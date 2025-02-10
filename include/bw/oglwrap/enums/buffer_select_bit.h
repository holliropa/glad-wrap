#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class BufferSelectBit : GLenum {
#ifdef GL_COLOR_BUFFER_BIT
            kColorBufferBit = GL_COLOR_BUFFER_BIT,
#endif
#ifdef GL_DEPTH_BUFFER_BIT
            kDepthBufferBit = GL_DEPTH_BUFFER_BIT,
#endif
#ifdef GL_STENCIL_BUFFER_BIT
            kStencilBufferBit = GL_STENCIL_BUFFER_BIT,
#endif
        };
    }

    using namespace enums;
}