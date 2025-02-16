#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class IndexType : GLenum {
#ifdef GL_UNSIGNED_BYTE
            kUnsignedByte = GL_UNSIGNED_BYTE,
#endif
#ifdef GL_UNSIGNED_SHORT
            kUnsignedShort = GL_UNSIGNED_SHORT,
#endif
#ifdef GL_UNSIGNED_INT
            kUnsignedInt = GL_UNSIGNED_INT,
#endif
        };
    }

    using namespace enums;
}