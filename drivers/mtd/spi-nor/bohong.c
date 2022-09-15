// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2005, Intec Automation Inc.
 * Copyright (C) 2014, Freescale Semiconductor, Inc.
 */

#include <linux/mtd/spi-nor.h>

#include "core.h"

static const struct flash_info bohong_parts[] = {
	/* BoHong Microelectronics */
	{ "bh25q128as", INFO(0x684018, 0, 64 * 1024, 256,
			    SECT_4K | SPI_NOR_DUAL_READ | SPI_NOR_QUAD_READ) },
};

const struct spi_nor_manufacturer spi_nor_bohong = {
	.name = "bohong",
	.parts = bohong_parts,
	.nparts = ARRAY_SIZE(bohong_parts),
};
