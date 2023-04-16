cmake_minimum_required(VERSION 3.16.3)
set(PROJ a6_1)
project(${PROJ})

include_directories(include)

file(GLOB SOURCES "src/*.cpp")
file(GLOB SOURCES "src/*.c")

add_executable(${PROJ} ${SOURCES})
target_link_libraries(${PROJ} m)