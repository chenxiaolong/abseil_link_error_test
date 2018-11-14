cmake_minimum_required(VERSION 3.10)

project(test)

add_subdirectory(abseil-cpp)

add_executable(main main.cpp)

# Succeeds if set to 'cxx_std_14'
target_compile_features(main PRIVATE cxx_std_17)

target_link_libraries(main PRIVATE absl::strings)
