#pragma once

#include <string>
#include "config.h"
#include "shader_handle.h"
#include "enums/shader_type.h"

namespace GLADWRAP_NAMESPACE {
    class Shader {
    public:
        enum State {
            kNotCompiled, kCompileFailure, kCompileSuccessful
        };

    private:
        ShaderHandle shader_handle_;
        ShaderType shader_t_;

    protected:
        mutable State state_ = kNotCompiled;

    public:
        Shader(Shader &&) noexcept = default;

        Shader &operator=(Shader &&) noexcept = default;

        explicit Shader(ShaderType shader_t)
                : shader_handle_(shader_t), shader_t_(shader_t) {};

        ShaderType shader_type() const { return shader_t_; }

        State state() const { return state_; }

        void set_source(const std::string &source) {
            auto str = source.c_str();
            glShaderSource(static_cast<GLuint>(shader_handle_), 1, &str, nullptr);
        }

        void compile() const {
            if (state_ != kNotCompiled)
                return;

            glCompileShader(static_cast<GLuint>(shader_handle_));

            GLint status;
            glGetShaderiv(static_cast<GLuint>(shader_handle_), GL_COMPILE_STATUS, &status);
            state_ = status == GL_TRUE ? kCompileSuccessful : kCompileFailure;
        }

        const Handle &expose() const {
            return shader_handle_;
        }
    };

    class ComputeShader : public Shader {
    public:
        ComputeShader() : Shader(ShaderType::kComputeShader) {}
    };

    class VertexShader : public Shader {
    public:
        VertexShader() : Shader(ShaderType::kVertexShader) {}
    };

    class GeometryShader : public Shader {
    public:
        GeometryShader() : Shader(ShaderType::kGeometryShader) {}
    };

    class FragmentShader : public Shader {
    public:
        FragmentShader() : Shader(ShaderType::kFragmentShader) {}
    };

    class TessControlShader : public Shader {
    public:
        TessControlShader() : Shader(ShaderType::kTessControlShader) {}
    };

    class TessEvaluationShader : public Shader {
    public:
        TessEvaluationShader() : Shader(ShaderType::kTessEvaluationShader) {}
    };
}