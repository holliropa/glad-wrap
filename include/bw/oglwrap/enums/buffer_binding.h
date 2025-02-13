#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class BufferBinding : GLenum {
#ifdef GL_ARRAY_BUFFER_BINDING
            kArray = GL_ARRAY_BUFFER_BINDING,
#endif
#ifdef GL_ATOMIC_COUNTER_BUFFER_BINDING
            kAtomicCounter = GL_ATOMIC_COUNTER_BUFFER_BINDING,
#endif
#ifdef GL_COPY_READ_BUFFER_BINDING
            kCopyRead = GL_COPY_READ_BUFFER_BINDING,
#endif
#ifdef GL_COPY_WRITE_BUFFER_BINDING
            kCopyWrite = GL_COPY_WRITE_BUFFER_BINDING,
#endif
#ifdef GL_DISPATCH_INDIRECT_BUFFER_BINDING
            kDispatchIndirect = GL_DISPATCH_INDIRECT_BUFFER_BINDING,
#endif
#ifdef GL_DRAW_INDIRECT_BUFFER_BINDING
            kDrawIndirect = GL_DRAW_INDIRECT_BUFFER_BINDING,
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER_BINDING
            kElementArray = GL_ELEMENT_ARRAY_BUFFER_BINDING,
#endif
#ifdef GL_PIXEL_PACK_BUFFER_BINDING
            kPixelPack = GL_PIXEL_PACK_BUFFER_BINDING,
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER_BINDING
            kPixelUnpack = GL_PIXEL_UNPACK_BUFFER_BINDING,
#endif
#ifdef GL_SHADER_STORAGE_BUFFER_BINDING
            kShaderStorage = GL_SHADER_STORAGE_BUFFER_BINDING,
#endif
#ifdef GL_TEXTURE_BUFFER_BINDING
            kTexture = GL_TEXTURE_BUFFER_BINDING,
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER_BINDING
            kTransformFeedback = GL_TRANSFORM_FEEDBACK_BUFFER_BINDING,
#endif
#ifdef GL_UNIFORM_BUFFER_BINDING
            kUniform = GL_UNIFORM_BUFFER_BINDING,
#endif
        };
    }

    using namespace enums;
}