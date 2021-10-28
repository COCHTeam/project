

set(CMAKE_C_COMPILER gcc)

#include_directories(include)

file(GLOB SOURCES test.c mat-band-test.c ../src/mat-band.c)

add_compile_options( "$<$<CONFIG:DEBUG>:-g3>")
add_compile_options( "$<$<CONFIG:RELEASE>:-O3;-funroll-loops>" )

add_executable(testA ${SOURCES})

target_include_directories(testA PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/test)

#target_link_libraries(testA projectAlib)

install(TARGETS testA RUNTIME DESTINATION bin)

