cmake_minimum_required(VERSION 3.25)
project(APCProject LANGUAGES CXX)

# Use C++23 standard
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Make GCC very pedantic and disable extensions
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    add_compile_options(
        -Wall
        -Wextra
        -Wpedantic
        -Wlogical-op
        -Wmissing-include-dirs
        -Wredundant-decls
        -Wstrict-overflow
        -Wundef
        -Wnull-dereference
        -Walloca
        -Werror=vla
)
endif()

# Add executable
add_executable(${PROJECT_NAME} main.cpp)

# Add threading support
find_package(Threads REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE Threads::Threads)
