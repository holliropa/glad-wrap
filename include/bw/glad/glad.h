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
#include "blending.h"

namespace GLADWRAP_NAMESPACE {
    [[nodiscard]] inline bool load() {
        return gladLoaderLoadGL();
    }

    inline void unload() {
        gladLoaderUnloadGL();
    }
}