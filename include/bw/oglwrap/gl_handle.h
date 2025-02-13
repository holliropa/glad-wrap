#pragma once

#include "config.h"
#include <utility>

namespace OGLWRAP_NAMESPACE {
    class GLHandle {
    public:
        explicit operator GLuint() const { return handle_; }

        GLHandle(const GLHandle &) = delete;

        GLHandle &operator=(const GLHandle &) = delete;

        GLHandle(GLHandle &&other) noexcept
                : handle_{other.handle_},
                  ownership_{other.ownership_} {
            other.handle_ = 0;
            other.ownership_ = false;
        }

        GLHandle &operator=(GLHandle &&other) noexcept {
            handle_ = std::exchange(other.handle_, 0);
            ownership_ = std::exchange(other.ownership_, false);

            return *this;
        }

        virtual ~GLHandle() = default;

        [[nodiscard]]bool hasOwnership() const { return ownership_; }

    protected:
        GLuint handle_ = 0;
        bool ownership_ = false;

        GLHandle() = default;
    };
}
