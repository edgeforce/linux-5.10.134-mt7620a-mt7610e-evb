# SPDX-License-Identifier: GPL-2.0

nandcore-objs := core.o bbt.o
obj-$(CONFIG_MTD_NAND_CORE) += nandcore.o
obj-$(CONFIG_MTD_NAND_MTK_BMT)	+= mtk_bmt.o

obj-y	+= onenand/
obj-y	+= raw/
obj-y	+= spi/

nandcore-$(CONFIG_MTD_NAND_ECC) += ecc.o
