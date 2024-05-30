# if(libWRPkeycmakednupdated_BUILD_FUZZ_TESTER)
#
#   file(GLOB fuzz_sources CONFIGURE_DEPENDS
#     ${CMAKE_CURRENT_LIST_DIR}/source/*.cpp)
#   file(GLOB fuzz_headers CONFIGURE_DEPENDS
#     ${CMAKE_CURRENT_LIST_DIR}/source/*.hpp)
#
#   add_executable(libWRPkeycmakednupdated_fuzzer ${fuzz_sources} ${fuzz_headers})
#   target_include_directories(libWRPkeycmakednupdated_fuzzer PUBLIC
#     ${CMAKE_CURRENT_LIST_DIR}/source)
#   target_link_libraries(libWRPkeycmakednupdated_fuzzer libWRPkeycmakednupdated)
#
#   function(enable_libfuzzer_and_asan target)
#     target_compile_options(${target} PUBLIC -fsanitize=fuzzer,address)
#     target_link_options(${target} PUBLIC -fsanitize=fuzzer,address)
#   endfunction()
#
#   enable_libfuzzer_and_asan(libWRPkeycmakednupdated_fuzzer)
#
#
# endif()
