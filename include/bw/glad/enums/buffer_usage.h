#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class BufferUsage : GLenum {
#ifdef GL_STREAM_DRAW
            kStreamDraw = GL_STREAM_DRAW,
#endif
#ifdef GL_STREAM_READ
            kStreamRead = GL_STREAM_READ,
#endif
#ifdef GL_STREAM_COPY
            kStreamCopy = GL_STREAM_COPY,
#endif
#ifdef GL_STATIC_DRAW
            kStaticDraw = GL_STATIC_DRAW,
#endif
#ifdef GL_STATIC_READ
            kStaticRead = GL_STATIC_READ,
#endif
#ifdef GL_STATIC_COPY
            kStaticCopy = GL_STATIC_COPY,
#endif
#ifdef GL_DYNAMIC_DRAW
            kDynamicDraw = GL_DYNAMIC_DRAW,
#endif
#ifdef GL_DYNAMIC_READ
            kDynamicRead = GL_DYNAMIC_READ,
#endif
#ifdef GL_DYNAMIC_COPY
            kDynamicCopy = GL_DYNAMIC_COPY,
#endif
        };
    }

    using namespace enums;
}