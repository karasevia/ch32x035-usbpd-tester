target_sources(${TARGET_ELF} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/drv_gpio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/drv_usart.c
    ${CMAKE_CURRENT_SOURCE_DIR}/drv_gpio.h
    ${CMAKE_CURRENT_SOURCE_DIR}/drv_usart.h
)

target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
