#pragma once

#include "config.h"
#include <type_traits>

namespace OGLWRAP_NAMESPACE {
    class UniformObject {
    protected:
        GLint location_;

    public:
        static const GLint kInvalidLocation = GLint(-1);

        explicit UniformObject(GLint location = kInvalidLocation)
                : location_(location) {}

        UniformObject(const Program &program, const char *qualifier) {
            location_ = glGetUniformLocation(static_cast<GLuint>(program.expose()), qualifier);
        }

        [[nodiscard]] bool isValid() const { return location_ != kInvalidLocation; }

        [[nodiscard]] GLint expose() const { return location_; };

        explicit operator GLint() const { return location_; }
    };
}

#include "uniform-inl.h"