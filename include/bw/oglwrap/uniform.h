#pragma once

#include "config.h"
#include "program.h"

namespace OGLWRAP_NAMESPACE {
    enum class UniformType {
        kScalar,
        kVector,
        kMatrix
    };

    template<UniformType T, typename V, int R = 1, int C = 1>
    struct UniformTrait {
        static constexpr UniformType uniform_type = T;
        static constexpr int rows = R;
        static constexpr int cols = C;
        using value_type = V;
    };

    template<typename TRAIT>
    class Uniform {
    public:
        using ValueType = typename TRAIT::value_type;

        Uniform(const Program &program, GLint location)
                : location_(location), program_(program) {}

        void set(const ValueType) {
            static_assert((sizeof(TRAIT), false),
                          "Trying to set a uniform to a value that is not an OpenGL type.");
        }

        void set(const ValueType *, GLsizei = 1) {
            static_assert((sizeof(TRAIT), false),
                          "Trying to set a uniform to a value that is not an OpenGL type.");
        }

    private:
        mutable GLint location_;
        const Program &program_;
    };

    template<>
    inline void Uniform<UniformTrait<UniformType::kScalar, GLfloat>>::set(GLfloat value) {
        glUniform1f(location_, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLfloat, 1>>::set(const GLfloat *value, GLsizei size) {
        glUniform1fv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLfloat, 2>>::set(const GLfloat *value, GLsizei size) {
        glUniform2fv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLfloat, 3>>::set(const GLfloat *value, GLsizei size) {
        glUniform3fv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLfloat, 4>>::set(const GLfloat *value, GLsizei size) {
        glUniform4fv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLint, 1>>::set(const GLint *value, GLsizei size) {
        glUniform1iv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLint, 2>>::set(const GLint *value, GLsizei size) {
        glUniform1iv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLint, 3>>::set(const GLint *value, GLsizei size) {
        glUniform1iv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLint, 4>>::set(const GLint *value, GLsizei size) {
        glUniform1iv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLuint, 1>>::set(const GLuint *value, GLsizei size) {
        glUniform1uiv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLuint, 2>>::set(const GLuint *value, GLsizei size) {
        glUniform2uiv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLuint, 3>>::set(const GLuint *value, GLsizei size) {
        glUniform3uiv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kVector, GLuint, 4>>::set(const GLuint *value, GLsizei size) {
        glUniform4uiv(location_, size, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 2, 2>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix2fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 3, 3>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix3fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 4, 4>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix4fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 2, 3>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix2x3fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 3, 2>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix3x2fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 2, 4>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix2x4fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 4, 2>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix4x2fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 3, 4>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix3x4fv(location_, size, GL_FALSE, value);
    }

    template<>
    inline void Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 4, 3>>::set(const GLfloat *value, GLsizei size) {
        glUniformMatrix4x3fv(location_, size, GL_FALSE, value);
    }

    using UniformFloatVector = Uniform<UniformTrait<UniformType::kVector, GLfloat>>;
    using UniformMatrix4 = Uniform<UniformTrait<UniformType::kMatrix, GLfloat, 4, 4>>;
}