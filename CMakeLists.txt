cmake_minimum_required(VERSION 3.28)
project(Tarottrpg LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(main src/main.cpp)
target_compile_features(main PRIVATE cxx_std_17)

find_package(SFML COMPONENTS Graphics Window System CONFIG REQUIRED)

target_link_libraries(main PRIVATE
  SFML::Graphics
  SFML::Window
  SFML::System
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT main)
