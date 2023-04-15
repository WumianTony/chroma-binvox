cmake_minimum_required(VERSION 3.1)
project(binvox)

include(F:/Project/VS2019/vcpkg/scripts/buildsystems/vcpkg.cmake)
add_definitions(-DWINDOWS_NT)
add_definitions(-D_USE_MATH_DEFINES)

find_package(OpenCV CONFIG REQUIRED)
if(OpenCV_FOUND)
    message("-- OpenCV_INC ${OpenCV_INCLUDE_DIRS}")
    include_directories(${OpenCV_INCLUDE_DIRS})
endif()

# include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ./)
add_subdirectory(cc)
add_executable(binvox binvox.cc)

target_link_libraries(binvox vox ${OpenCV_LIBS})



