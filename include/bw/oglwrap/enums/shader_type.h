#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class ShaderType : GLenum {
#ifdef GL_COMPUTE_SHADER
            kComputeShader = GL_COMPUTE_SHADER,
#endif
#ifdef GL_VERTEX_SHADER
            kVertexShader = GL_VERTEX_SHADER,
#endif
#ifdef GL_GEOMETRY_SHADER
            kGeometryShader = GL_GEOMETRY_SHADER,
#endif
#ifdef GL_FRAGMENT_SHADER
            kFragmentShader = GL_FRAGMENT_SHADER,
#endif
#ifdef GL_TESS_CONTROL_SHADER
            kTessControlShader = GL_TESS_CONTROL_SHADER,
#endif
#ifdef GL_TESS_EVALUATION_SHADER
            kTessEvaluationShader = GL_TESS_EVALUATION_SHADER,
#endif
        };
    }

    using namespace enums;
}