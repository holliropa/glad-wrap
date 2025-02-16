#pragma once

#include "config.h"
#include "handle.h"

namespace GLADWRAP_NAMESPACE {
    class ProgramHandle : public Handle {
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