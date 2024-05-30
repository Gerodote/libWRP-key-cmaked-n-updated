cmake_minimum_required(VERSION 3.14...3.22)

project(libWRPkeycmakednupdatedExample1 LANGUAGES CXX)

# --- Import tools ----

include(../cmake/tools.cmake)

# ---- Dependencies ----

include(../cmake/getCPM.cmake)

# CPMAddPackage(
#   GITHUB_REPOSITORY jarro2783/cxxopts
#   VERSION 3.2.0
#   OPTIONS "CXXOPTS_BUILD_EXAMPLES NO" "CXXOPTS_BUILD_TESTS NO" "CXXOPTS_ENABLE_INSTALL YES"
# )
# include(../cmake/packages/addfmt.cmake)

CPMAddPackage(NAME libWRPkeycmakednupdated SOURCE_DIR ${CMAKE_CURRENT_LIST_DIR}/..)

# ---- Create standalone executable ----

file(GLOB sources CONFIGURE_DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cxx)

add_executable(${PROJECT_NAME} ${sources})

set_target_properties(${PROJECT_NAME} PROPERTIES CXX_STANDARD 20 OUTPUT_NAME "libWRPkeycmakednupdated")

target_link_libraries(${PROJECT_NAME} libWRPkeycmakednupdated::libWRPkeycmakednupdated)
# target_link_libraries(${PROJECT_NAME} cxxopts)
# target_link_libraries(${PROJECT_NAME} fmt::fmt)


# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}-targets
    # explicit destination specification required for 3.13, 3.14 no longer needs it
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    PRIVATE_HEADER DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
    PUBLIC_HEADER DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
  )

install(EXPORT ${PROJECT_NAME}-targets DESTINATION cmake
  NAMESPACE libWRPkeycmakednupdated:: FILE ${PROJECT_NAME}-targets.cmake)
# install(EXPORT ${PROJECT_NAME} )
