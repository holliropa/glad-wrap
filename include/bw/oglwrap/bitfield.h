#pragma once

#include "config.h"

namespace OGLWRAP_NAMESPACE {
    template<typename Bit>
    class Bitfield {
    public:
        Bitfield() : bits_{0} {}

        Bitfield(GLbitfield bits) : bits_(bits) {}

        Bitfield(Bit bit) : bits_(GLbitfield(bit)) {}

        Bitfield operator|(Bit b) const {
            return Bitfield{bits_ | static_cast<GLbitfield>(b)};
        }

        Bitfield &operator|=(Bitfield b) {
            bits_ |= b.bits_;
            return *this;
        }

        explicit operator GLbitfield() const { return bits_; }

    private:
        GLbitfield bits_;
    };
}