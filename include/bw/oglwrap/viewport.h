#pragma once

#include "config.h"

namespace OGLWRAP_NAMESPACE {
    inline void Viewport(GLint x, GLint y, GLsizei w, GLsizei h) {
        glViewport(x, y, w, h);
    }

    inline void Viewport(GLsizei w, GLsizei h) {
        glViewport(0, 0, w, h);
    }
}