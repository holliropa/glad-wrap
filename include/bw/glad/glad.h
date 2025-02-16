#pragma once

#include "config.h"
#include "capabilities.h"
#include "shader.h"
#include "program.h"
#include "program_binding.h"
#include "viewport.h"
#include "clearing.h"
#include "vertex_array.h"
#include "vertex_array_binding.h"
#include "buffer.h"
#include "buffer_binding.h"
#include "drawing.h"
#include "vertex-attribute.h"
#include "uniform.h"

namespace GLADWRAP_NAMESPACE {
    class GLAD {
    private:
        bool init_;

        explicit GLAD(bool init)
                : init_(init) {}

    public:
        ~GLAD() {
            gladLoaderUnloadGL();
        }

        [[nodiscard]] bool isInitialized() const {
            return init_;
        }

        [[nodiscard]] friend GLAD init() {
            return GLAD(gladLoaderLoadGL());
        }
    };

    [[nodiscard]] inline GLAD init();
}