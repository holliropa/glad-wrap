#pragma once

#include "config.h"
#include "bitfield.h"
#include "enums/buffer_select_bit.h"

namespace GLADWRAP_NAMESPACE {
    inline void ClearColor(GLfloat r, GLfloat g, GLfloat b, GLfloat a){
        glClearColor(r, g, b, a);
    }

    class ClearBuffers {
        Bitfield<BufferSelectBit> buffers_;
    public:
        ClearBuffers &Color() {
            buffers_ |= BufferSelectBit::kColorBufferBit;
            return *this;
        }

        ClearBuffers &Depth() {
            buffers_ |= BufferSelectBit::kDepthBufferBit;
            return *this;
        }

        ClearBuffers &Stencil() {
            buffers_ |= BufferSelectBit::kStencilBufferBit;
            return *this;
        }

        ~ClearBuffers() {
            if (static_cast<GLbitfield>(buffers_) != 0) {
                glClear(static_cast<GLbitfield>(buffers_));
            }
        }
    };

    inline ClearBuffers Clear() {
        return {};
    }
}