#pragma once

#include "config.h"
#include "vertex_array_handle.h"

namespace OGLWRAP_NAMESPACE {
    class VertexArray {
    public:
        VertexArray() = default;

        VertexArray(VertexArray &&) noexcept = delete;

        VertexArray &operator=(VertexArray &&) noexcept = delete;

        explicit VertexArray(GLuint handle) : handle_{handle} {}

        [[nodiscard]] const GLHandle &expose() const { return handle_; }

    private:
        VertexArrayHandle handle_;
    };
}