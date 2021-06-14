cmake_minimum_required (VERSION 3.8)

project ("cplusplus_concurrency")

set (CMAKE_CXX_STANDARD 11)

add_executable(thread_guard thread_guard.cc)

add_executable(scope_thread scope_thread.cc)


# add_executable(edit_document edit_document.cc)