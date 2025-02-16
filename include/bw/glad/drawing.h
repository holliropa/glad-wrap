#pragma once

#include "config.h"
#include "enums/primitive_type.h"
#include "enums/index_type.h"

namespace GLADWRAP_NAMESPACE {
    inline void DrawElements(PrimitiveType type,
                             GLsizei count,
                             IndexType index_type
    ) {
        glDrawElements(static_cast<GLenum>(type), count, static_cast<GLenum>(index_type), nullptr);
    }
}