target_sources(${TARGET_ELF} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/board.h
    ${CMAKE_CURRENT_SOURCE_DIR}/rtconfig.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtdbg.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtdebug.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtdef.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rthw.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtlibc.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtm.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtservice.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/rtthread.h
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_dirent.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_errno.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_fcntl.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_fdset.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_ioctl.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_signal.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/libc/libc_stat.h
    ${CMAKE_CURRENT_SOURCE_DIR}/libcpu/risc-v/common/cpuport.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/finsh_api.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/finsh.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/msh.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/shell.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/rtdevice.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/completion.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/dataqueue.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/pipe.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/poll.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/ringbuffer.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/waitqueue.h 
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc/workqueue.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/drivers/pin.h
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/drivers/serial.h
    ${CMAKE_CURRENT_SOURCE_DIR}/board.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/clock.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/components.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cpu.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/device.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/idle.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ipc.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/irq.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/kservice.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/mem.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/memheap.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/mempool.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/object.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/scheduler.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/slab.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/thread.c
    ${CMAKE_CURRENT_SOURCE_DIR}/src/timer.c
    ${CMAKE_CURRENT_SOURCE_DIR}/libcpu/risc-v/common/cpuport.c
    ${CMAKE_CURRENT_SOURCE_DIR}/libcpu/risc-v/common/context_gcc.S
    ${CMAKE_CURRENT_SOURCE_DIR}/libcpu/risc-v/common/interrupt_gcc.S
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/cmd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/msh_cmd.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/msh_file.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/msh.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/shell.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh/symbol.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/serial/serial.c
    ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/misc/pin.c
)

target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/libc)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/libcpu/risc-v/common)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/drivers)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/components/drivers/include/ipc)
target_include_directories(${TARGET_ELF} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/components/finsh)
