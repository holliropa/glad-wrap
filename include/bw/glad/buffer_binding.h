#pragma once

#include "config.h"
#include "buffer.h"
#include "enums/buffer_type.h"
#include "enums/buffer_binding.h"

namespace GLADWRAP_NAMESPACE {
    template<BufferType BUFFER_TYPE>
    inline void Bind(const Buffer<BUFFER_TYPE> &buffer) {
        glBindBuffer(static_cast<GLenum>(BUFFER_TYPE), static_cast<GLuint>(buffer.expose()));
    }

    template<BufferType BUFFER_TYPE>
    inline void Unbind(const Buffer<BUFFER_TYPE> &) {
        glBindBuffer(static_cast<GLenum>(BUFFER_TYPE), 0);
    }

    inline BufferBinding GetBindingTarget(BufferType bufferType) {
        switch (bufferType) {
            case BufferType::kArray:
                return BufferBinding::kArray;
            case BufferType::kAtomicCounter:
                return BufferBinding::kAtomicCounter;
            case BufferType::kCopyRead:
                return BufferBinding::kCopyRead;
            case BufferType::kCopyWrite:
                return BufferBinding::kCopyWrite;
            case BufferType::kDispatchIndirect:
                return BufferBinding::kDispatchIndirect;
            case BufferType::kDrawIndirect:
                return BufferBinding::kDrawIndirect;
            case BufferType::kElementArray:
                return BufferBinding::kElementArray;
            case BufferType::kPixelPack:
                return BufferBinding::kPixelPack;
            case BufferType::kPixelUnpack:
                return BufferBinding::kPixelUnpack;
            case BufferType::kShaderStorage:
                return BufferBinding::kShaderStorage;
            case BufferType::kTexture:
                return BufferBinding::kTexture;
            case BufferType::kTransformFeedback:
                return BufferBinding::kTransformFeedback;
            case BufferType::kUniform:
                return BufferBinding::kUniform;
        }
    }

    template<BufferType BUFFER_TYPE>
    bool IsBound(const Buffer<BUFFER_TYPE> &buffer) {
        GLint bound_buffer;
        glGetIntegerv(GLenum(GetBindingTarget(BUFFER_TYPE)), &bound_buffer);

        return buffer.expose() == GLuint(bound_buffer);
    }
}