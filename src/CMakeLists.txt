#project(projectB C)

include_directories(include)

file(GLOB SOURCES lu-settings.c)

add_compile_options(
    "$<$<CONFIG:DEBUG>:-g3>"
)

add_compile_options( "$<$<CONFIG:RELEASE>:-O3;-funroll-loops>" )


add_library(projectBlib ${SOURCES})

target_include_directories(projectBlib
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

#install(TARGETS projectBlib
#    LIBRARY DESTINATION lib
#    ARCHIVE DESTINATION lib)
