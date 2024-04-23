/*
 * File      : drv_usbpd.h
 * This file is part of RT-Thread RTOS

 * Change Logs:
 * Date           Author       Notes
 * 2024-04-20     karasevia    the first version
 */
#ifndef USBPD_H__
#define USBPD_H__

int rt_usbpd_hw_init(void);
void rt_usbpd_process(void);

#endif
