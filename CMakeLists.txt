cmake_minimum_required(VERSION 3.0.0)
project(TileMapParser VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

find_package(PkgConfig REQUIRED)
pkg_check_modules(TinyXml2 REQUIRED tinyxml2)


add_executable(TileMapParser main.cpp)

target_include_directories(TileMapParser PRIVATE ${TinyXml2_INCLUDE_DIRS} )
target_link_libraries(TileMapParser ${TinyXml2_LIBRARIES})



set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
