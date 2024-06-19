cmake_minimum_required(VERSION 3.27.5)

project(osi-lib VERSION 1.0.0)
set(CMAKE_CXX_STANDARD 23)

# create byte osi lib
file(GLOB_RECURSE OSI_LIB_SOURCES "src/*.cpp")
add_library(osi SHARED ${OSI_LIB_SOURCES})
target_include_directories(osi PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# # download google test
# include(FetchContent)
# FetchContent_Declare(
#   googletest
#   URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )
# # for Windows: prevent overriding the parent project's compiler/linker settings
# set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# create byte buffer lib unit tests
# enable_testing()
# add_executable(osi_unit_test unit_test/osi_unit_test.cpp)
# target_link_libraries(osi_unit_test PRIVATE GTest::gtest_main byte_buffer)

# include(GoogleTest)
# gtest_discover_tests(osi_unit_test)

add_executable(test main.cpp)
target_link_libraries(test osi)