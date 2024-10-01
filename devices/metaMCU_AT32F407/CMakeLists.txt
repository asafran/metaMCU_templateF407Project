cmake_minimum_required(VERSION 3.14)

project(metaMCU_AT32F407
VERSION 0.0.1
DESCRIPTION "metaMCU AT32F407 package")

add_subdirectory(Firmware)

enable_language(CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)
    
set(REGISTERS_DIRECTORIES
	${CMAKE_CURRENT_SOURCE_DIR}/AT32F407xx_v2
	${CMAKE_CURRENT_SOURCE_DIR}/platform
	)

add_library(metaMCU_AT32F407 INTERFACE)

target_link_libraries(metaMCU_AT32F407 INTERFACE Firmware_AT32F407_403)
target_link_libraries(metaMCU_AT32F407 INTERFACE metaMCU)
target_include_directories(metaMCU_AT32F407 INTERFACE ${REGISTERS_DIRECTORIES})
