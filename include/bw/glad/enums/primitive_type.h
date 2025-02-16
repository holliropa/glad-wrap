#pragma once

#include "../config.h"

namespace GLADWRAP_NAMESPACE {
    namespace enums {
        enum class PrimitiveType : GLenum {
#ifdef GL_POINTS
            kPoints = GL_POINTS,
#endif
#ifdef GL_LINES
            kLines = GL_LINES,
#endif
#ifdef GL_LINE_LOOP
            kLineLoop = GL_LINE_LOOP,
#endif
#ifdef GL_LINE_STRIP
            kLineStrip = GL_LINE_STRIP,
#endif
#ifdef GL_TRIANGLES
            kTriangles = GL_TRIANGLES,
#endif
#ifdef GL_TRIANGLE_STRIP
            kTriangleStrip = GL_TRIANGLE_STRIP,
#endif
#ifdef GL_TRIANGLE_FAN
            kTriangleFan = GL_TRIANGLE_FAN,
#endif
#ifdef GL_LINES_ADJACENCY
            kLinesAdjacency = GL_LINES_ADJACENCY,
#endif
#ifdef GL_LINE_STRIP_ADJACENCY
            kLineStripAdjacency = GL_LINE_STRIP_ADJACENCY,
#endif
#ifdef GL_TRIANGLES_ADJACENCY
            kTrianglesAdjacency = GL_TRIANGLES_ADJACENCY,
#endif
#ifdef GL_TRIANGLE_STRIP_ADJACENCY
            kTriangleStripAdjacency = GL_TRIANGLE_STRIP_ADJACENCY,
#endif
        };
    }

    using namespace enums;
}