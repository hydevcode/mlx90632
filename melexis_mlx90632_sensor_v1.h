/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-07-22     xph    first version
 */
#ifndef __MELEXIS_MLX90632_SENSOR_V1_H__
#define __MELEXIS_MLX90632_SENSOR_V1_H__

#include "rtthread.h"
#include "board.h"
#include "rtdevice.h"
#include "mlx90632.h"

#include <rtdevice.h>

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

struct mlx90632_device
{
    struct rt_i2c_bus_device *bus;
    rt_uint8_t addr;
    /* device eeprom data */
    rt_int32_t PR ;
    rt_int32_t PG ;
    rt_int32_t PT ;
    rt_int32_t PO ;
    rt_int32_t Ea ;
    rt_int32_t Eb ;
    rt_int32_t Fa ;
    rt_int32_t Fb ;
    rt_int32_t Ga ;
    rt_int16_t Ha ;
    rt_int16_t Hb ;
    rt_int16_t Gb ;
    rt_int16_t Ka ;

    double pre_ambient;
    double pre_object;
    double ambient;
    double object;

};

typedef struct mlx90632_device * mlx90632_device_t;

rt_err_t rt_hw_mlx90632_init(const char *name, struct rt_sensor_config *cfg);

#endif /* #define __MELEXIS_MLX90632_SENSOR_V1_H__ */









