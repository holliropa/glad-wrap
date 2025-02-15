#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class Capability : GLenum {
#ifdef GL_BLEND
            kBlend = GL_BLEND,
#endif
#ifdef GL_CLIP_DISTANCE
            kClipDistance = GL_CLIP_DISTANCE,
#endif
#ifdef GL_COLOR_LOGIC_OP
            kColorLogicOp = GL_COLOR_LOGIC_OP,
#endif
#ifdef GL_CULL_FACE
            kCullFace = GL_CULL_FACE,
#endif
#ifdef GL_DEBUG_OUTPUT
            kDebugOutput = GL_DEBUG_OUTPUT,
#endif
#ifdef GL_DEBUG_OUTPUT_SYNCHRONOUS
            kDebugOutputSynchronous = GL_DEBUG_OUTPUT_SYNCHRONOUS,
#endif
#ifdef GL_DEPTH_CLAMP
            kDepthClamp = GL_DEPTH_CLAMP,
#endif
#ifdef GL_DEPTH_TEST
            kDepthTest = GL_DEPTH_TEST,
#endif
#ifdef GL_DITHER
            kDither = GL_DITHER,
#endif
#ifdef GL_FRAMEBUFFER_SRGB
            kFramebufferSRGB = GL_FRAMEBUFFER_SRGB,
#endif
#ifdef GL_LINE_SMOOTH
            kLineSmooth = GL_LINE_SMOOTH,
#endif
#ifdef GL_MULTISAMPLE
            kMultisample = GL_MULTISAMPLE,
#endif
#ifdef GL_POLYGON_OFFSET_FILL
            kPolygonOffsetFill = GL_POLYGON_OFFSET_FILL,
#endif
#ifdef GL_POLYGON_OFFSET_LINE
            kPolygonOffsetLine = GL_POLYGON_OFFSET_LINE,
#endif
#ifdef GL_POLYGON_OFFSET_POINT
            kPolygonOffsetPoint = GL_POLYGON_OFFSET_POINT,
#endif
#ifdef GL_POLYGON_SMOOTH
            kPolygonSmooth = GL_POLYGON_SMOOTH,
#endif
#ifdef GL_PRIMITIVE_RESTART
            kPrimitiveRestart = GL_PRIMITIVE_RESTART,
#endif
#ifdef GL_PRIMITIVE_RESTART_FIXED_INDEX
            kPrimitiveRestartFixedIndex = GL_PRIMITIVE_RESTART_FIXED_INDEX,
#endif
#ifdef GL_RASTERIZER_DISCARD
            kRasterizedDiscard = GL_RASTERIZER_DISCARD,
#endif
#ifdef GL_SAMPLE_ALPHA_TO_COVERAGE
            kSampleAlphaToCoverage = GL_SAMPLE_ALPHA_TO_COVERAGE,
#endif
#ifdef GL_SAMPLE_ALPHA_TO_ONE
            kSampleAlphaToOne = GL_SAMPLE_ALPHA_TO_ONE,
#endif
#ifdef GL_SAMPLE_COVERAGE
            kSampleCoverage = GL_SAMPLE_COVERAGE,
#endif
#ifdef GL_SAMPLE_SHADING
            kSampleShading = GL_SAMPLE_SHADING,
#endif
#ifdef GL_SAMPLE_MASK
            kSampleMask = GL_SAMPLE_MASK,
#endif
#ifdef GL_SCISSOR_TEST
            kScissorTest = GL_SCISSOR_TEST,
#endif
#ifdef GL_STENCIL_TEST
            kStencilTest = GL_STENCIL_TEST,
#endif
#ifdef GL_TEXTURE_CUBE_MAP_SEAMLESS
            kTextureCubeMapSeamless = GL_TEXTURE_CUBE_MAP_SEAMLESS,
#endif
#ifdef GL_PROGRAM_POINT_SIZE
            kProgramPointSize = GL_PROGRAM_POINT_SIZE,
#endif
        };
    }

    using namespace enums;
}