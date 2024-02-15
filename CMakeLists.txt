cmake_minimum_required(VERSION 3.12)
 
# Include the subsidiary .cmake file to get the SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)
pico_sdk_init()

# Set the name of the project
project(RP2040-Motor-Encoder
        VERSION 0.1.0
        LANGUAGES C CXX
        )
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# add all the subdirectories
add_subdirectory(MotorEncoder)
add_subdirectory(example)