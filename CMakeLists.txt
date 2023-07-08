# CMakeList.txt : CMake project for PhysicsSimulator, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (PhysicsSimulator "PhysicsSimulator.cpp" "PhysicsSimulator.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PhysicsSimulator PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory("glfw-3.3.8")
target_link_libraries(PhysicsSimulator glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(PhysicsSimulator OpenGL::GL)