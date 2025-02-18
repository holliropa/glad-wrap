#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class BlendFunction : GLenum {
#ifdef GL_ZERO
            kZero = GL_ZERO,
#endif
#ifdef GL_ONE
            kOne = GL_ONE,
#endif
#ifdef GL_SRC_COLOR
            kSrcColor = GL_SRC_COLOR,
#endif
#ifdef GL_ONE_MINUS_SRC_COLOR
            kOneMinusSrcColor = GL_ONE_MINUS_SRC_COLOR,
#endif
#ifdef GL_DST_COLOR
            kDstColor = GL_DST_COLOR,
#endif
#ifdef GL_ONE_MINUS_DST_COLOR
            kOneMinusDstColor = GL_ONE_MINUS_DST_COLOR,
#endif
#ifdef GL_SRC_ALPHA
            kSrcAlpha = GL_SRC_ALPHA,
#endif
#ifdef GL_ONE_MINUS_SRC_ALPHA
            kOneMinusSrcAlpha = GL_ONE_MINUS_SRC_ALPHA,
#endif
#ifdef GL_DST_ALPHA
            kDstAlpha = GL_DST_ALPHA,
#endif
#ifdef GL_ONE_MINUS_DST_ALPHA
            kOneMinusDstAlpha = GL_ONE_MINUS_DST_ALPHA,
#endif
#ifdef GL_CONSTANT_COLOR
            kConstantColor = GL_CONSTANT_COLOR,
#endif
#ifdef GL_ONE_MINUS_CONSTANT_COLOR
            kOneMinusConstantColor = GL_ONE_MINUS_CONSTANT_COLOR,
#endif
#ifdef GL_CONSTANT_ALPHA
            kConstantAlpha = GL_CONSTANT_ALPHA,
#endif
#ifdef GL_ONE_MINUS_CONSTANT_ALPHA
            kOneMinusConstantAlpha = GL_ONE_MINUS_CONSTANT_ALPHA,
#endif
#ifdef GL_SRC_ALPHA_SATURATE
            kSrcAlphaSaturate = GL_SRC_ALPHA_SATURATE,
#endif
#ifdef GL_SRC1_COLOR
            kSrc1Color = GL_SRC1_COLOR,
#endif
#ifdef GL_ONE_MINUS_SRC1_COLOR
            kOneMinusSrc1Color = GL_ONE_MINUS_SRC1_COLOR,
#endif
#ifdef GL_SRC1_ALPHA
            kSrc1Alpha = GL_SRC1_ALPHA,
#endif
#ifdef GL_ONE_MINUS_SRC1_ALPHA
            kOneMinusSrc1Alpha = GL_ONE_MINUS_SRC1_ALPHA,
#endif
        };
    }

    using namespace enums;
}