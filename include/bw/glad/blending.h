#pragma once

#include "config.h"
#include "enums/blend_function.h"

namespace GLADWRAP_NAMESPACE {
    inline void BlendFunc(BlendFunction src, BlendFunction dst) {
        glBlendFunc(static_cast<GLenum>(src), static_cast<GLenum>(dst));
    }
}