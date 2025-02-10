#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class BufferType : GLenum {
#ifdef GL_ARRAY_BUFFER
            kArrayBuffer = GL_ARRAY_BUFFER,
#endif
#ifdef GL_ATOMIC_COUNTER_BUFFER
            kAtomicCounterBuffer = GL_ATOMIC_COUNTER_BUFFER,
#endif
#ifdef GL_COPY_READ_BUFFER
            kCopyReadBuffer = GL_COPY_READ_BUFFER,
#endif
#ifdef GL_COPY_WRITE_BUFFER
            kCopyWriteBuffer = GL_COPY_WRITE_BUFFER,
#endif
#ifdef GL_DISPATCH_INDIRECT_BUFFER
            kDispatchIndirectBuffer = GL_DISPATCH_INDIRECT_BUFFER,
#endif
#ifdef GL_DRAW_INDIRECT_BUFFER
            kDrawIndirectBuffer = GL_DRAW_INDIRECT_BUFFER,
#endif
#ifdef GL_ELEMENT_ARRAY_BUFFER
            kElementArrayBuffer = GL_ELEMENT_ARRAY_BUFFER,
#endif
#ifdef GL_PIXEL_PACK_BUFFER
            kPixelPackBuffer = GL_PIXEL_PACK_BUFFER,
#endif
#ifdef GL_PIXEL_UNPACK_BUFFER
            kPixelUnpackBuffer = GL_PIXEL_UNPACK_BUFFER,
#endif
#ifdef GL_SHADER_STORAGE_BUFFER
            kShaderStorageBuffer = GL_SHADER_STORAGE_BUFFER,
#endif
#ifdef GL_TEXTURE_BUFFER
            kTextureBuffer = GL_TEXTURE_BUFFER,
#endif
#ifdef GL_TRANSFORM_FEEDBACK_BUFFER
            kTransformFeedbackBuffer = GL_TRANSFORM_FEEDBACK_BUFFER,
#endif
#ifdef GL_UNIFORM_BUFFER
            kUniformBuffer = GL_UNIFORM_BUFFER,
#endif
        };
    }

    using namespace enums;
}