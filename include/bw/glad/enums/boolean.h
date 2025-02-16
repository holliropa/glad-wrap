#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class Boolean : GLboolean {
#ifdef GL_TRUE
            kTrue = GL_TRUE,
#endif
#ifdef GL_FALSE
            kFalse = GL_FALSE,
#endif
        };
    }

    using namespace enums;
}