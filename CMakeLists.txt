cmake_minimum_required(VERSION 3.20)
project(grpc_example)

set(CMAKE_CXX_STANDARD 17)
find_package(Threads)

include_directories(. ./internal)
aux_source_directory(. ALL_SRCS)

link_directories(${PROJECT_SOURCE_DIR}/lib)
add_subdirectory(internal)
add_subdirectory(api/address)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_executable(server ${ALL_SRCS})

target_link_libraries(server
        address_proto
        address_svc
        )