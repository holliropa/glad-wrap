#pragma once

#include "config.h"
#include "enums/capability.h"

namespace OGLWRAP_NAMESPACE {
    /// Enables a capability.
    /// @see glEnable
    inline void Enable(Capability capability) {
        glEnable(GLenum(capability));
    }

    inline void Disable(Capability capability) {
        glDisable(GLenum(capability));
    }

    inline void SetCapability(Capability capability, bool value) {
        if (value) {
            glEnable(GLenum(capability));
        } else {
            glDisable(GLenum(capability));
        }
    }
}
