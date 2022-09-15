
#ifndef SLIC_ZARLINK_H
#define SLIC_ZARLINK_H

struct slic_platform_data {
	unsigned int ch1_rx_slot;
	unsigned int ch1_tx_slot;
	unsigned int ch2_rx_slot;
	unsigned int ch2_tx_slot;
};

/* SLIC channel configuration */
#define CH1_RX_SLOT_NUM		0
#define CH1_TX_SLOT_NUM		0
#define CH2_RX_SLOT_NUM		2
#define CH2_TX_SLOT_NUM		2

#define SLIC_SLOT_OFFSET	2

