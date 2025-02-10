cmake_minimum_required(VERSION 3.28)
project(oglwrap LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED TRUE)

# Library and alias names
set(LIBRARY_NAME ogl)
set(LIBRARY_ALIAS bw::${LIBRARY_NAME})

add_subdirectory(extern/glad)
add_subdirectory(extern/glfw)

# Create an INTERFACE library (header-only library)
add_library(${LIBRARY_NAME} INTERFACE)

target_link_libraries(${LIBRARY_NAME} INTERFACE glad glfw)

# Alias for the library
add_library(${LIBRARY_ALIAS} ALIAS ${LIBRARY_NAME})

# Include directories for the INTERFACE library
target_include_directories(${LIBRARY_NAME}
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Optionally, add compile options for the INTERFACE library
target_compile_options(${LIBRARY_NAME} INTERFACE -Wall -Wextra -Wpedantic)
