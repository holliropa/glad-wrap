#pragma once

#include "../config.h"

namespace OGLWRAP_NAMESPACE {
    namespace enums {
        enum class DrawMode : GLenum {
#ifdef GL_POINTS
            Points = GL_POINTS,
#endif
#ifdef GL_LINE_STRIP
            LineStrip = GL_LINE_STRIP,
#endif
#ifdef GL_LINE_LOOP
            LineLoop = GL_LINE_LOOP,
#endif
#ifdef GL_LINES
            Lines = GL_LINES,
#endif
#ifdef GL_LINE_STRIP_ADJACENCY
            LineStripAdjacency = GL_LINE_STRIP_ADJACENCY,
#endif
#ifdef GL_LINES_ADJACENCY
            LinesAdjacency = GL_LINES_ADJACENCY,
#endif
#ifdef GL_TRIANGLE_STRIP
            TriangleStrip = GL_TRIANGLE_STRIP,
#endif
#ifdef GL_TRIANGLE_FAN
            TriangleFan = GL_TRIANGLE_FAN,
#endif
#ifdef GL_TRIANGLES
            Triangles = GL_TRIANGLES,
#endif
#ifdef GL_TRIANGLE_STRIP_ADJACENCY
            TriangleStripAdjacency = GL_TRIANGLE_STRIP_ADJACENCY,
#endif
#ifdef GL_TRIANGLES_ADJACENCY
            TrianglesAdjacency = GL_TRIANGLES_ADJACENCY,
#endif
#ifdef GL_PATCHES
            Patches = GL_PATCHES,
#endif
        };
    }

    using namespace enums;
}