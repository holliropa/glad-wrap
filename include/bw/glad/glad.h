#pragma once

#include "capabilities.h"
#include "shader.h"
#include "program.h"
#include "viewport.h"
#include "clearing.h"
#include "vertex_array.h"
#include "buffer.h"
#include "drawing.h"
#include "vertex-attribute.h"
#include "uniform.h"
#include "blending.h"
#include "rasterization.h"
#include "texture.h"
#include "binding.h"

namespace glad {
    [[nodiscard]] inline bool load() {
        return gladLoaderLoadGL();
    }

    inline void unload() {
        gladLoaderUnloadGL();
    }
}
