#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class DataType : GLenum {
#ifdef GL_BYTE
            kByte = GL_BYTE,
#endif
#ifdef GL_DOUBLE
            kDouble = GL_DOUBLE,
#endif
#ifdef GL_FIXED
            kFixed = GL_FIXED,
#endif
#ifdef GL_FLOAT
            kFloat = GL_FLOAT,
#endif
#ifdef GL_HALF_FLOAT
            kHalfFloat = GL_HALF_FLOAT,
#endif
#ifdef GL_INT
            kInt = GL_INT,
#endif
#ifdef GL_SHORT
            kShort = GL_SHORT,
#endif
#ifdef GL_UNSIGNED_BYTE
            kUnsignedByte = GL_UNSIGNED_BYTE,
#endif
#ifdef GL_UNSIGNED_INT
            kUnsignedInt = GL_UNSIGNED_INT,
#endif
#ifdef GL_UNSIGNED_SHORT
            kUnsignedShort = GL_UNSIGNED_SHORT,
#endif
        };
    }

    using namespace enums;
}