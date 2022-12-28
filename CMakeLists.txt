cmake_minimum_required(VERSION 3.20)
project(grpc_example)

set(CMAKE_CXX_STANDARD 17)
find_package(Threads)

aux_source_directory(. ALL_SRCS)
include_directories(. ./internal ./api/address)
add_subdirectory(internal)
add_subdirectory(api/)

add_executable(server ${ALL_SRCS})

target_link_libraries(server
        address_proto
        address_svc
        )