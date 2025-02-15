#pragma once

#include "config.h"
#include "enums/data_type.h"

namespace OGLWRAP_NAMESPACE {
    class VertexAttribute {
    public:
        VertexAttribute(GLuint location)
                : location_(location) {}

        VertexAttribute &pointer(GLuint values_per_vertex,
                                 DataType type,
                                 bool normalized,
                                 GLsizei stride,
                                 const void *offset_pointer = nullptr) {
            glVertexAttribPointer(location_,
                                  values_per_vertex,
                                  static_cast<GLenum>(type),
                                  normalized ? GL_TRUE : GL_FALSE,
                                  stride,
                                  offset_pointer);

            return *this;
        }

        VertexAttribute &enable() {
            glEnableVertexAttribArray(location_);

            return *this;
        }

        VertexAttribute &disable() {
            glDisableVertexAttribArray(location_);

            return *this;
        }

        [[nodiscard]] GLuint expose() const {
            return location_;
        }

    private:
        GLuint location_;
    };
}