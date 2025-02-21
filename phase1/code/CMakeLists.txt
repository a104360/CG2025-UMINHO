cmake_minimum_required(VERSION 3.5)

# Project Name
PROJECT(UnrealEngine)

set(OpenGL_GL_PREFERENCE LEGACY)


set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_executable(generator
    src/Figure.cpp
    src/Plane.cpp
    src/Box.cpp
    src/Cone.cpp
    src/Sphere.cpp
    src/Generator.cpp
)

add_executable(${PROJECT_NAME}
    src/Figure.cpp
    src/Plane.cpp
    src/Box.cpp
    src/Cone.cpp
    src/Sphere.cpp
    src/Engine.cpp
)

# Enable more warnings (optional)
target_compile_options(UnrealEngine PRIVATE -Wall -Wextra -Wpedantic)

find_package(OpenGL REQUIRED)
include_directories(${OpenGL_INCLUDE_DIRS} include)
link_directories(${OpenGL_LIBRARY_DIRS})
add_definitions(${OpenGL_DEFINITIONS})

if(NOT OPENGL_FOUND)
    message(ERROR " OPENGL not found!")
endif(NOT OPENGL_FOUND)


set( CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} Wno-deprecated")
find_package(GLUT REQUIRED)
include_directories(${GLUT_INCLUDE_DIR})
link_directories(${GLUT_LIBRARY_DIRS})
add_definitions(${GLUT_DEFINITIONS})

target_link_libraries(${PROJECT_NAME} ${OPENGL_LIBRARIES} ${GLUT_LIBRARIES} )
if(NOT GLUT_FOUND)
	message(ERROR ": GLUT not found!")
endif(NOT GLUT_FOUND)


