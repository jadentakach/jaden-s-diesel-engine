cmake_minimum_required(VERSION 3.20)

project(jadens-diesel-engine
    VERSION 0.1.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(jadens-diesel-engine
    src/main.cpp
    src/Engine.cpp
)

target_include_directories(jadens-diesel-engine
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)