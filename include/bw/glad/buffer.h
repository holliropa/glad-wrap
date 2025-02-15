#pragma once

#include <vector>
#include "config.h"
#include "buffer_handle.h"
#include "enums/buffer_type.h"
#include "enums/buffer_usage.h"

namespace OGLWRAP_NAMESPACE {
    template<BufferType BUFFER_TYPE>
    class Buffer {
    public:
        [[nodiscard]] constexpr BufferType type() const { return BUFFER_TYPE; }

        Buffer() = default;

        Buffer(Buffer &&) noexcept = default;

        Buffer &operator=(Buffer &&) noexcept = default;

        explicit Buffer(GLuint handle) : handle_{handle} {}

        void data(GLsizei size,
                  const void *data,
                  BufferUsage usage = BufferUsage::kStaticDraw);

        template<typename GLtype>
        void data(const std::vector<GLtype>& data,
                  BufferUsage usage = BufferUsage::kStaticDraw);

        [[nodiscard]] GLint size() const;

        [[nodiscard]] const Handle &expose() const { return handle_; }

    private:
        BufferHandle handle_;
    };

    using ArrayBuffer = Buffer<BufferType::kArray>;
    using AtomicCounterBuffer = Buffer<BufferType::kAtomicCounter>;
    using CopyReadBuffer = Buffer<BufferType::kCopyRead>;
    using CopyWriteBuffer = Buffer<BufferType::kCopyWrite>;
    using DispatchIndirectBuffer = Buffer<BufferType::kDispatchIndirect>;
    using DrawIndirectBuffer = Buffer<BufferType::kDrawIndirect>;
    using ElementArrayBuffer = Buffer<BufferType::kElementArray>;
    using PixelPackBuffer = Buffer<BufferType::kPixelPack>;
    using PixelUnpackBuffer = Buffer<BufferType::kPixelUnpack>;
    using ShaderStorageBuffer = Buffer<BufferType::kShaderStorage>;
    using TextureBuffer = Buffer<BufferType::kTexture>;
    using TransformFeedbackBuffer = Buffer<BufferType::kTransformFeedback>;
    using UniformBuffer = Buffer<BufferType::kUniform>;
}

#include "buffer-inl.h"