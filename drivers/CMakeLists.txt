target_sources(${TARGET_ELF} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/gpio/drv_gpio.c
    ${CMAKE_CURRENT_SOURCE_DIR}/gpio/drv_gpio.h
    ${CMAKE_CURRENT_SOURCE_DIR}/usart/drv_usart.c
    ${CMAKE_CURRENT_SOURCE_DIR}/usart/drv_usart.h
    ${CMAKE_CURRENT_SOURCE_DIR}/usbpd/drv_usbpd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/usbpd/drv_usbpd.h
)

target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/gpio)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/usart)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/usbpd)