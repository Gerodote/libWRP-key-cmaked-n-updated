# cmake_minimum_required(VERSION 3.14...3.22)
#
# project(libWRPkeycmakednupdatedTests LANGUAGES CXX)
#
# # ---- Options ----
#
# option(ENABLE_TEST_COVERAGE "Enable test coverage" OFF)
# option(TEST_INSTALLED_VERSION "Test the version found by find_package" OFF)
#
# # --- Import tools ----
#
# include(../cmake/tools.cmake)
#
# # ---- Dependencies ----
#
# include(../cmake/getCPM.cmake)
#
# CPMAddPackage(NAME ut VERSION 2.0.1 URL https://github.com/boost-ext/ut/archive/refs/tags/v2.0.1.tar.gz)
# CPMAddPackage("gh:TheLartians/Format.cmake@1.7.3")
# include(../cmake/packages/addfmt.cmake)
#
# if(TEST_INSTALLED_VERSION)
#   find_package(libWRPkeycmakednupdated REQUIRED)
# else()
#   CPMAddPackage(NAME libWRPkeycmakednupdated SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..)
# endif()
#
# # ---- Create binary ----
#
# file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp)
# add_executable(${PROJECT_NAME} ${sources})
# # target_link_libraries(${PROJECT_NAME} Boost::ut)
# target_link_libraries(${PROJECT_NAME} libWRPkeycmakednupdated::libWRPkeycmakednupdated)
# # target_link_libraries(${PROJECT_NAME} fmt::fmt)
# set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20)
#
# target_compile_options(${PROJECT_NAME} PUBLIC -fsanitize=address,leak)
# target_link_options(${PROJECT_NAME} PUBLIC -fsanitize=address,leak)
#
# # # enable compiler warnings
# # if(NOT TEST_INSTALLED_VERSION)
# #   if(CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_CXX_COMPILER_ID MATCHES "GNU")
# #     target_compile_options(libWRPkeycmakednupdated PUBLIC -Wall -Wpedantic -Wextra -Werror)
# #   elseif(MSVC)
# #     target_compile_options(libWRPkeycmakednupdated PUBLIC /W4 /WX)
# #     target_compile_definitions(${PROJECT_NAME} PUBLIC DOCTEST_CONFIG_USE_STD_HEADERS)
# #   endif()
# # endif()
#
# # ---- Add libWRPkeycmakednupdatedTests ----
#
# enable_testing()
# add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})
#
# add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/fuzz)
#
# # Note: doctest and similar testing frameworks can automatically configure CMake tests. For other
# # testing frameworks add the tests target instead: add_test(NAME ${PROJECT_NAME} COMMAND
# # ${PROJECT_NAME})
#
# # include(${doctest_SOURCE_DIR}/scripts/cmake/doctest.cmake)
# # doctest_discover_tests(${PROJECT_NAME})
#
# # ---- code coverage ----
#
# if(ENABLE_TEST_COVERAGE)
#   target_compile_options(libWRPkeycmakednupdated PUBLIC -O0 -g -fprofile-arcs -ftest-coverage)
#   target_link_options(libWRPkeycmakednupdated PUBLIC -fprofile-arcs -ftest-coverage)
# endif()
