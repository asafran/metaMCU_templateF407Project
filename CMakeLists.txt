cmake_minimum_required(VERSION 3.21)

project(template_AT32F407_project
VERSION 0.0.1
DESCRIPTION "metaMCU AT32F407 template project")

enable_language(C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_subdirectory(device/Firmware_AT32F407_403)
add_subdirectory(device/metaMCU_AT32F407)

option(DUMP_ASM "Create full assembly of final executable" OFF)

set(EXECUTABLE template_project_executable)

set(PROJECT_SOURCES
    src/main.cpp
    )

add_executable(${EXECUTABLE} ${PROJECT_SOURCES})

target_include_directories(${EXECUTABLE} PRIVATE include)

target_include_directories(Firmware_AT32F403A_407 PRIVATE include) #for conf.h

target_link_libraries(${EXECUTABLE} Firmware_AT32F403A_407)
target_link_libraries(${EXECUTABLE} metaMCU::AT32F407)

###############################################################################
target_compile_options(${EXECUTABLE} PRIVATE
    $<$<CONFIG:Debug>:-Og -g3 -ggdb>
    $<$<CONFIG:Release>:-Os -g0>)

# The last command can take a couple of seconds on larger project, usefull for debugging
add_custom_command(TARGET ${EXECUTABLE} POST_BUILD
    COMMAND ${CMAKE_SIZE} $<TARGET_FILE:${EXECUTABLE}>
    COMMAND ${CMAKE_OBJCOPY} -O ihex $<TARGET_FILE:${EXECUTABLE}> ${EXECUTABLE}.hex
    COMMAND ${CMAKE_OBJCOPY} -O binary $<TARGET_FILE:${EXECUTABLE}> ${EXECUTABLE}.bin)

if (${DUMP_ASM})
    add_custom_command(TARGET ${EXECUTABLE} POST_BUILD
        COMMAND ${CMAKE_OBJDUMP} -D $<TARGET_FILE:${EXECUTABLE}> > ${EXECUTABLE}.s)
endif()
