#pragma once

#include "config.h"
#include "gl_handle.h"
#include "enums/shader_type.h"

namespace OGLWRAP_NAMESPACE {
    class ShaderHandle : public GLHandle {
    public:
        explicit ShaderHandle(GLuint handle) {
            handle_ = handle;
            ownership_ = false;
        }

        explicit ShaderHandle(ShaderType shader_t) {
            handle_ = glCreateShader(GLenum(shader_t));
            ownership_ = true;
        }

        ~ShaderHandle() override {
            if (ownership_) {
                glDeleteShader(handle_);
            }
        }

        ShaderHandle(ShaderHandle &&) noexcept = default;

        ShaderHandle &operator=(ShaderHandle &&) noexcept = default;
    };
}