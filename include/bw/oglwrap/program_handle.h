#pragma once

#include "config.h"
#include "gl_handle.h"

namespace OGLWRAP_NAMESPACE {
    class ProgramHandle : public GLHandle {
    public:
        explicit ProgramHandle(GLuint handle) {
            handle_ = handle;
            ownership_ = false;
        }

        ProgramHandle() {
            handle_ = glCreateProgram();
            ownership_ = true;
        }

        ~ProgramHandle() override {
            if (ownership_) {
                glDeleteProgram(handle_);
            }
        }

        ProgramHandle(ProgramHandle &&) noexcept = default;

        ProgramHandle &operator=(ProgramHandle &&) noexcept = default;
    };
}