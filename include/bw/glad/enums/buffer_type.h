#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class BufferType : GLenum {
#ifdef GL_ARRAY_BUFFER
            kArray = GL_ARRAY_BUFFER,
#endif
#ifdef GL_ATOMIC_COUNTER_BUFFER
            kAtomicCounter = GL_ATOMIC_COUNTER_BUFFER,
#endif
#ifdef GL_COPY_READ_BUFFER
            kCopyRead = GL_COPY_READ_BUFFER,
#endif
#ifdef GL_COPY_WRITE_BUFFER
            kCopyWrite = GL_COPY_WRITE_BUFFER,
#endif
#ifdef GL_DISPATCH_INDIRECT_BUFFER
            kDispatchIndirect = GL_DISPATCH_INDIRECT_BUFFER,
#endif
#ifdef GL_DRAW_INDIRECT_BUFFER
            kDrawIndirect = GL_DRAW_INDIRECT_BUFFER,
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER
            kElementArray = GL_ELEMENT_ARRAY_BUFFER,
#endif
#ifdef GL_PIXEL_PACK_BUFFER
            kPixelPack = GL_PIXEL_PACK_BUFFER,
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER
            kPixelUnpack = GL_PIXEL_UNPACK_BUFFER,
#endif
#ifdef GL_SHADER_STORAGE_BUFFER
            kShaderStorage = GL_SHADER_STORAGE_BUFFER,
#endif
#ifdef GL_TEXTURE_BUFFER
            kTexture = GL_TEXTURE_BUFFER,
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER
            kTransformFeedback = GL_TRANSFORM_FEEDBACK_BUFFER,
#endif
#ifdef GL_UNIFORM_BUFFER
            kUniform = GL_UNIFORM_BUFFER,
#endif
        };
    }

    using namespace enums;
}