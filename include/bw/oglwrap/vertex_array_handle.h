#pragma once

#include "config.h"
#include "gl_handle.h"

namespace OGLWRAP_NAMESPACE {
    class VertexArrayHandle : public GLHandle {
    public:
        explicit VertexArrayHandle(GLuint handle) {
            handle_ = handle;
            ownership_ = false;
        }

        VertexArrayHandle() {
            glGenVertexArrays(1, &handle_);
            ownership_ = true;
        }

        ~VertexArrayHandle() override {
            if (ownership_) {
                glDeleteVertexArrays(1, &handle_);
            }
        }

        VertexArrayHandle(VertexArrayHandle &&) noexcept = default;

        VertexArrayHandle &operator=(VertexArrayHandle &&) noexcept = default;
    };
}