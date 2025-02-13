#pragma once

namespace OGLWRAP_NAMESPACE {
    template<BufferType BUFFER_TYPE>
    void Buffer<BUFFER_TYPE>::data(GLsizei size,
                                   const void *data,
                                   BufferUsage usage) {
        Bind(*this);

        glBufferData(static_cast<GLenum>(BUFFER_TYPE), size, data, static_cast<GLenum>(usage));
    }

    template<BufferType BUFFER_TYPE>
    template<typename GLtype>
    void Buffer<BUFFER_TYPE>::data(const std::vector<GLtype> &data,
                                   BufferUsage usage) {

        Bind(*this);

        glBufferData(static_cast<GLenum>(BUFFER_TYPE),
                     data.size() * sizeof(GLtype),
                     data.data(),
                     static_cast<GLenum>(usage));
    }

    template<BufferType BUFFER_TYPE>
    GLint Buffer<BUFFER_TYPE>::size() const {
        Bind(*this);

        GLint size;
        glGetBufferParameteriv(static_cast<GLenum>(BUFFER_TYPE), GL_BUFFER_SIZE, &size);
        return size;
    }
}