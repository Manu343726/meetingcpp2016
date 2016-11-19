project(MeetingCpp2016)
cmake_minimum_required(VERSION 2.8)

set(SIPLASPLAS_PACKAGE_URL "https://github.com/Manu343726/siplasplas/releases/download/0.0.2-1/siplasplas-master-GNU-6_2_1-Debug-dynamic.tar.gz")
include(siplasplas-bootstrap.cmake)

add_library(project project.cpp)
target_include_directories(project PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${SIPLASPLAS_INCLUDE_DIR}"
)
target_compile_options(project PRIVATE -std=c++14)

# This adds a custom target to run DRLParser
# before building your target, getting all the
# compilation options from the target itself
# (Set DRLPARSER_VERBOSE variable to TRUE
# to see the actual parser invocation)
configure_siplasplas_reflection(project)

add_executable(main main.cpp)
target_link_libraries(main PUBLIC project)
target_compile_options(main PRIVATE -std=c++14)
