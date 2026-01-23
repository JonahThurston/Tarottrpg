cmake_minimum_required(VERSION 3.28)
project(Tarottrpg LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(Tarottrpg
  src/main.cpp
  src/game/GameState/GameState.cpp
  src/game/PlayerState/PlayerState.cpp
  src/game/Deck/Deck.cpp
)
target_compile_features(Tarottrpg PRIVATE cxx_std_17)

target_include_directories(Tarottrpg PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)

find_package(SFML COMPONENTS Graphics Window System CONFIG REQUIRED)

target_link_libraries(Tarottrpg PRIVATE
  SFML::Graphics
  SFML::Window
  SFML::System
  
)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Tarottrpg)
