cmake_minimum_required(VERSION 3.29)
project(Cours4IAPA-DLL)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HEADER_FILES
        include/BarLib.h
        include/FooFoo.h
        include/FooLib.h)

set(SOURCE_FILES
        src/BarLib.cpp
        src/FooFoo.cpp
        src/FooLib.cpp)

add_library(Cours4IAPA-DLL SHARED ${HEADER_FILES} ${SOURCE_FILES})

target_include_directories(Cours4IAPA-DLL PUBLIC include/)

target_compile_definitions(Cours4IAPA-DLL PRIVATE DLL_EXPORT)

install(TARGETS Cours4IAPA-DLL
        RUNTIME DESTINATION ${CMAKE_BINARY_DIR}
        LIBRARY DESTINATION ${CMAKE_BINARY_DIR}/lib
        ARCHIVE DESTINATION ${CMAKE_BINARY_DIR}/lib/static)
