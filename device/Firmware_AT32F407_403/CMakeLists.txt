cmake_minimum_required(VERSION 3.5)

project(Firmware_AT32F403A_407
VERSION 0.0.1
DESCRIPTION "AT32F407_403 Firmware package")

set(CPU_PARAMETERS
    -mcpu=cortex-m4
    -mthumb
    -mfpu=fpv4-sp-d16
    -mfloat-abi=hard)

enable_language(C ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS ON)

set(FIRMWARE_LIBRARY ${CMAKE_CURRENT_SOURCE_DIR}/AT32F403A_407_Firmware_Library)
set(DEVICE_LIBRARY ${FIRMWARE_LIBRARY}/libraries/cmsis/cm4/device_support)
set(CORE_LIBRARY ${FIRMWARE_LIBRARY}/libraries/cmsis/cm4/core_support)
set(DRIVER_LIBRARY ${FIRMWARE_LIBRARY}/libraries/drivers)
set(STARTUP_SCRIPT ${FIRMWARE_LIBRARY}/libraries/cmsis/cm4/device_support/startup/gcc/startup_at32f403a_407.s)
set(MCU_LINKER_SCRIPT ${FIRMWARE_LIBRARY}/libraries/cmsis/cm4/device_support/startup/gcc/linker)

set(OUTPUT "" CACHE STRING "")

string(REGEX MATCH "AT32(F40[37]A?).(.).7" OUTPUT ${DEVICE})

message(REGEX1="${CMAKE_MATCH_1}")
message(REGEX2="${CMAKE_MATCH_2}")

string(APPEND MCU_LINKER_SCRIPT "/AT32${CMAKE_MATCH_1}x${CMAKE_MATCH_2}_FLASH.ld")

message(LINK="${MCU_LINKER_SCRIPT}")

if(NOT ${CMAKE_MATCH_0} STREQUAL ${DEVICE})
    message(SEND_ERROR Error: incorrect DEVICE variable ${DEVICE})
endif()

add_library(Firmware_AT32F403A_407)

target_compile_definitions(Firmware_AT32F403A_407 PUBLIC ${DEVICE})
target_compile_options(Firmware_AT32F403A_407 PUBLIC ${CPU_PARAMETERS})
target_link_options(Firmware_AT32F403A_407 PUBLIC -T${MCU_LINKER_SCRIPT} ${CPU_PARAMETERS})

target_include_directories(Firmware_AT32F403A_407 PUBLIC ${DEVICE_LIBRARY} ${CORE_LIBRARY} ${DRIVER_LIBRARY}/inc)

file(GLOB DEVICE_SOURCES CONFIGURE_DEPENDS
    ${DEVICE_LIBRARY}/*.c
    ${DEVICE_LIBRARY}/*.h
    ${CORE_LIBRARY}/*.c
    ${CORE_LIBRARY}/*.h
    ${DRIVER_LIBRARY}/src/*.c
    ${DRIVER_LIBRARY}/inc/*.h
    )

target_sources(Firmware_AT32F403A_407 PUBLIC ${DEVICE_SOURCES} ${STARTUP_SCRIPT})
