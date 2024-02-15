add_executable(MotorEncoderExample
    ${CMAKE_CURRENT_LIST_DIR}/example.cpp
)

# Link the Project to an extra library
target_link_libraries(MotorEncoderExample PUBLIC
    pico_stdlib
    MotorEncoder
)

pico_add_extra_outputs(MotorEncoderExample)

# Enable USB, Disable UART output
pico_enable_stdio_usb(MotorEncoderExample 1)
pico_enable_stdio_uart(MotorEncoderExample 0)

target_include_directories(MotorEncoderExample PUBLIC "${CMAKE_SOURCE_DIR}")