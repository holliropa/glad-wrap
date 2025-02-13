#pragma once

#include "config.h"
#include "gl_handle.h"

namespace OGLWRAP_NAMESPACE {
    class BufferHandle : public GLHandle {
    public:
        explicit BufferHandle(GLuint handle) {
            handle_ = handle;
            ownership_ = false;
        }

        BufferHandle() {
            glGenBuffers(1, &handle_);
            ownership_ = true;
        }

        ~BufferHandle() override {
            if (ownership_) {
                glDeleteBuffers(1, &handle_);
            }
        }

        BufferHandle(BufferHandle &&) noexcept = default;

        BufferHandle &operator=(BufferHandle &&) noexcept = default;
    };
}