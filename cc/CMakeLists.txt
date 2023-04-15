find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

file(GLOB SRC 
    file/*.h file/*.cc 
    geom/*.h geom/*.cc
    math/*.h math/*.cc
    ply/*.h ply/*.c
    time/*.h time/*.cc
    ui/*.h ui/*.cc
    voxel/*.h voxel/*.cc
    )

include_directories(${OPENGL_INCLUDE_DIRS} ${GLUT_INCLUDE_DIRS} ../)

add_library(vox ${SRC})
target_link_libraries(vox  ${OPENGL_LIBRARIES} GLUT::GLUT ${OpenCV_LIBS})