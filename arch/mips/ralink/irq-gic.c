// SPDX-License-Identifier: GPL-2.0-only
/*
 *
 * Copyright (C) 2015 Nikolay Martynov <mar.kolya@gmail.com>
 * Copyright (C) 2015 John Crispin <john@phrozen.org>
 */

#include <linux/init.h>

#include <linux/of.h>
#include <linux/irqchip.h>
#include <asm/mips-cps.h>

int get_c0_perfcount_int(void)
{
	/*
	 * Performance counter events are routed through GIC.
	 * Prevent them from firing on CPU IRQ7 as well
	 */
	clear_c0_status(IE_SW0 << 7);

	return gic_get_c0_perfcount_int();
}
EXPORT_SYMBOL_GPL(get_c0_perfcount_int);

void __init arch_init_irq(void)
{
	irqchip_init();
}
