

set(CMAKE_C_COMPILER g++)

include_directories(include)

file(GLOB SOURCES lu.cpp Yaml.cpp lu-read-settings.c)

add_compile_options( "$<$<CONFIG:DEBUG>:-g3>")
add_compile_options( "$<$<CONFIG:RELEASE>:-O3;-funroll-loops>" )

add_executable(projectA ${SOURCES})

target_include_directories(projectA PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/project)

install(TARGETS projectA RUNTIME DESTINATION bin)

