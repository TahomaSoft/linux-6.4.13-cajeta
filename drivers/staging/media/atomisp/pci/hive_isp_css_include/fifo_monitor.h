/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

#ifndef __FIFO_MONITOR_H_INCLUDED__
#define __FIFO_MONITOR_H_INCLUDED__

/*
 * This file is included on every cell {SP,ISP,host} and on every system
 * that uses the input system device(s). It defines the API to DLI bridge
 *
 * System and cell specific interfaces and inline code are included
 * conditionally through Makefile path settings.
 *
 *  - .        system and cell agnostic interfaces, constants and identifiers
 *	- public:  system agnostic, cell specific interfaces
 *	- private: system dependent, cell specific interfaces & inline implementations
 *	- global:  system specific constants and identifiers
 *	- local:   system and cell specific constants and identifiers
 */

#include "system_local.h"
#include "fifo_monitor_local.h"

#ifndef __INLINE_FIFO_MONITOR__
#define STORAGE_CLASS_FIFO_MONITOR_H extern
#define STORAGE_CLASS_FIFO_MONITOR_C
#include "fifo_monitor_public.h"
#else  /* __INLINE_FIFO_MONITOR__ */
#define STORAGE_CLASS_FIFO_MONITOR_H static inline
#define STORAGE_CLASS_FIFO_MONITOR_C static inline
#include "fifo_monitor_private.h"
#endif /* __INLINE_FIFO_MONITOR__ */

#endif /* __FIFO_MONITOR_H_INCLUDED__ */
