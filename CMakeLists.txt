cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 17)

#Enable debug symbols
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose debug or release" FORCE)
endif()

project(mc-one-week)

#Add the files
file(GLOB_RECURSE SOURCES Source/*.cpp Source/*.h Source/*.hpp)
add_executable(mc-one-week ${SOURCES})

# Set variables
set(SFML_DIR "SFML/lib/cmake/SFML")
set(GLM_INCLUDE_DIR "glm")
set(SFML_STATIC_LIBRARIES TRUE)

#Add libraries
#SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
find_package(SFML 2.5 COMPONENTS graphics network audio window system REQUIRED)

#glm
find_package(GLM REQUIRED)

# glad
# https://github.com/aaronmjacobs/InitGL
set(GLAD_DIR "Source/glad")
add_library("glad" "${GLAD_DIR}/glad.c")
target_include_directories("glad" PRIVATE "${GLAD_DIR}")
target_include_directories(${PROJECT_NAME} PUBLIC ${GLM_INCLUDE_DIRS} PRIVATE "${GLAD_DIR}")
target_link_libraries(${PROJECT_NAME} "glad" "${CMAKE_DL_LIBS}")


find_package(Threads)

target_link_libraries(mc-one-week sfml-graphics sfml-audio sfml-network sfml-window sfml-system)
target_link_libraries(mc-one-week Threads::Threads)
# target_link_libraries(mc-one-week Threads::Threads ${EXECUTABLE_NAME} ${SFML_LIBRARIES}) 
