/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Placeholder wrapper to allow addressing Allwinner D1 (and later) sun20i
 * CPU based devices separately. Please do not add anything in here.
 */
#ifndef __CONFIG_H
#define __CONFIG_H

#include <configs/sunxi-common.h>

#ifdef CONFIG_RISCV
#define CONFIG_SYS_BOOTM_LEN           (32 << 20)
#endif

#endif /* __CONFIG_H */
