cmake_minimum_required(VERSION 3.29)
project(Cours4IAPA)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(SFML COMPONENTS system window graphics network audio CONFIG REQUIRED)

#file(GLOB SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(Cours4IAPA Cours4IAPA/src/main.cpp)

add_subdirectory(Cours4IAPA/libraries)
add_dependencies(Cours4IAPA Cours4IAPA-DLL)

target_link_libraries(${PROJECT_NAME} PRIVATE Cours4IAPA-DLL)
#target_link_libraries(${PROJECT_NAME} PRIVATE sfml-audio sfml-system sfml-graphics sfml-window sfml-network)

add_custom_command(TARGET Cours4IAPA POST_BUILD
        COMMAND ${CMAKE_COMMAND} --install ${CMAKE_BINARY_DIR} --config $<CONFIG>)

#message(STATUS "------------------C Compiler: ${CMAKE_C_COMPILER}")
#message(STATUS "------------------C++ Compiler: ${CMAKE_CXX_COMPILER}")

#message(STATUS "------------------C Compiler Version: ${CMAKE_C_COMPILER_VERSION}")
#message(STATUS "------------------C++ Compiler Version: ${CMAKE_CXX_COMPILER_VERSION}")

#message(STATUS "---------------Linker: ${CMAKE_LINKER}")

#USE MINGW
#USE LINKER LLD OU LDD

#ccache valgrind doxygen(Generate doc HTML)