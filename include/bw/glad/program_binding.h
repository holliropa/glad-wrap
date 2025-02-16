#pragma once

#include "config.h"
#include "program.h"

namespace GLADWRAP_NAMESPACE {
    inline void Bind(const Program &program) {
        glUseProgram(static_cast<GLuint>(program.expose()));
    }

    inline void Unbind(const Program &) {
        glUseProgram(0);
    }

    bool IsBound(const Program &program) {
        GLint current_program;
        glGetIntegerv(GL_CURRENT_PROGRAM, &current_program);

        return static_cast<GLuint>(program.expose()) == GLuint(current_program);
    }

    inline void UnbindProgram() {
        glUseProgram(0);
    }
}