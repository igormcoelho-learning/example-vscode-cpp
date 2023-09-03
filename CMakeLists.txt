cmake_minimum_required(VERSION 3.27)
project(lista01-project LANGUAGES CXX VERSION 0.0.1)
#
set (CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_STANDARD_REQUIRED ON)
set (CMAKE_CXX_EXTENSIONS OFF)
set (CMAKE_EXPORT_COMPILE_COMMANDS ON)
Include(FetchContent)

# ====== configure project with header only library ======
add_library(lista01 INTERFACE)
target_include_directories(lista01 INTERFACE include/)
add_executable(aplicacao src/main.cpp)
target_link_libraries(aplicacao PRIVATE lista01)

# ===== check if external fmt library is used ===== 
option(USE_EXTERNAL_FMT "Use external library fmt" OFF)
if(USE_EXTERNAL_FMT)
FetchContent_Declare(fmt GIT_REPOSITORY https://github.com/fmtlib/fmt.git GIT_TAG 9.1.0)
FetchContent_MakeAvailable(fmt)
target_link_libraries(lista01 INTERFACE fmt)
target_link_libraries(aplicacao PRIVATE fmt)
endif()

# ===== check if external catch2 library is used ===== 
option(BUILD_TESTING "Build tests" OFF)
if(BUILD_TESTING)
FetchContent_Declare(Catch2 GIT_REPOSITORY https://github.com/catchorg/Catch2.git GIT_TAG v3.3.1)
FetchContent_MakeAvailable(Catch2)
#
list(APPEND CMAKE_MODULE_PATH ${catch2_SOURCE_DIR}/extras)
include(CTest)
include(Catch)
#
add_executable(my_test tests/get_data.test.cpp)
target_link_libraries(my_test PRIVATE lista01 Catch2::Catch2WithMain)
catch_discover_tests(my_test)
endif()
