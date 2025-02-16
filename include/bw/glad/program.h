#pragma once

#include "config.h"
#include "shader.h"
#include "program_handle.h"
#include <stdexcept>

namespace GLADWRAP_NAMESPACE {
    class Program {
    public:
        enum State {
            kNotLinked, kLinkFailure, kLinkSuccessful, kValidationFailure
        };

        Program() = default;

        Program(Program &&) = default;

        Program &operator=(Program &&) noexcept = default;

        explicit Program(GLuint handle)
                : program_{handle} {
            if (handle != 0) {
                GLint status;
                glGetProgramiv(static_cast<GLuint>(program_), GL_LINK_STATUS, &status);
                if (status == GL_TRUE) {
                    state_ = kLinkSuccessful;
                }
            }
        };

        template<typename... Rest>
        Program &attach_shader(const Shader &shader, Rest &&... rest) {
            attach_shader(shader);
            attach_shader(rest...);

            return *this;
        }

        Program &attach_shader() {
            return *this;
        }

        Program &attach_shader(const Shader &shader) {
            if (state_ != kNotLinked) {
                throw std::logic_error(
                        "Program::attach_shader called on already linked program."
                );
            }

            shader.compile();

            glAttachShader(static_cast<GLuint>(program_), static_cast<GLuint>(shader.expose()));

            return *this;
        }

        Program &attach_shader(Shader &&shader) = delete;

        virtual const Program &link() {
            if (state_ != kNotLinked)
                return *this;

            glLinkProgram(static_cast<GLuint>(program_));

            GLint status;
            glGetProgramiv(static_cast<GLuint>(program_), GL_LINK_STATUS, &status);
            if (status == GL_FALSE) {
                state_ = kLinkFailure;
            } else {
                state_ = kLinkSuccessful;
            }

            return *this;
        }

        State state() const { return state_; }

        const Handle &expose() const { return program_; }

    private:
        ProgramHandle program_;
        mutable State state_ = kNotLinked;
    };
}