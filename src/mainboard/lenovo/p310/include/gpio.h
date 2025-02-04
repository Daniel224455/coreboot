/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef CFG_GPIO_H
#define CFG_GPIO_H

#include <gpio.h>

/* Pad configuration was generated automatically using intelp2m utility */
static const struct pad_config gpio_table[] = {

	/* ------- GPIO Community 0 ------- */

	/* ------- GPIO Group GPP_A ------- */
	_PAD_CFG_STRUCT(GPP_A0,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A1, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A2, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A3, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A4, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A5,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_A6, PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A7,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A8,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_A9,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_A10,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_A11,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A12,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A13,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_A14,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_A15,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A16,
			PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_A17,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_A18,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A19,
			PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(
		GPP_A20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_A21,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A22,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_A23,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),

	/* ------- GPIO Group GPP_B ------- */
	_PAD_CFG_STRUCT(
		GPP_B0,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_B1,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B2,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_B3,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_B4,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B5,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_B6,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B7,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_B8,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_B9,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B10,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_B11,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B12,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_B13,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_B14,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(
		GPP_B15,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_B16,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_B17,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B18,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(
		GPP_B19,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B20,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE) | (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_B21,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_B22,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_B23,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			PAD_PULL(DN_20K)),

	/* ------- GPIO Community 1 ------- */

	/* ------- GPIO Group GPP_C ------- */
	_PAD_CFG_STRUCT(GPP_C0,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C1,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C2,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C3,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C4,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C5,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE),
			0),
	/* GPP_C6 - RESERVED */
	/* GPP_C7 - RESERVED */
	_PAD_CFG_STRUCT(GPP_C8,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_C9,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C10,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C11,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_C12,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(GPP_C13,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(GPP_C14,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_C15,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_C16,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C17,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C18,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C19,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_C21,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_C22,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_C23,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),

	/* ------- GPIO Group GPP_D ------- */
	_PAD_CFG_STRUCT(GPP_D0,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_D1,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(GPP_D2,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_D3,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_D4,
			PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE) | 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_D5,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D6,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D7,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D8,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D9,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D10,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_D11,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_D12,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_D13,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_D14,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_D15,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_D16,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_D17,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_BUF(TX_DISABLE) | (1 << 1), 0),
	_PAD_CFG_STRUCT(GPP_D18,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_D19,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D21,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D22,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_D23,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Group GPP_E ------- */
	_PAD_CFG_STRUCT(GPP_E0,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_E1,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_E2,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPP_E3,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E4,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E5,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(SCI)
				| PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E6,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E7,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E8,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_E9,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_E10,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_E11,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_E12,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),

	/* ------- GPIO Group GPP_F ------- */
	_PAD_CFG_STRUCT(
		GPP_F0,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_F1,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F2,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(
		GPP_F3,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_F4,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_F5,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(EDGE_SINGLE)
				| PAD_IRQ_ROUTE(SCI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F6,
			PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_F7,
			PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_TRIG(EDGE_SINGLE)
				| PAD_IRQ_ROUTE(SCI) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(
		GPP_F8,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_F9,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_F10,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(IOAPIC)
				| PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F11,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F12,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(IOAPIC)
				| PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F13,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(IOAPIC)
				| PAD_BUF(RX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F14,
			PAD_FUNC(GPIO) | PAD_RESET(DEEP) | PAD_IRQ_ROUTE(IOAPIC)
				| PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_F15,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_F16,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_F17,
			PAD_FUNC(NF1) | PAD_RESET(DEEP) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_F18,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_F19,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_F20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_F21,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_F22,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_F23,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Group GPP_G ------- */
	_PAD_CFG_STRUCT(GPP_G0,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_G1,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G2,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_G3,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G4,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G5,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G6,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G7,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G8,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G9,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G10,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G11,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G12,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G13,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G14,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G15,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G16,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G17,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_G18,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(IOAPIC)
				| PAD_BUF(RX_DISABLE) | 1,
			0),
	_PAD_CFG_STRUCT(GPP_G19,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_IRQ_ROUTE(SCI)
				| PAD_RX_POL(INVERT) | PAD_BUF(TX_DISABLE) | (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_G20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_G21,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_G22,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_G23,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Group GPP_H ------- */
	_PAD_CFG_STRUCT(
		GPP_H0,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H1,
		PAD_FUNC(GPIO) | PAD_RESET(RSMRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H2,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(
		GPP_H3,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H4,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H5,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H6,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H7,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H8,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H9,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H10,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(GPP_H11,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_H12,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H13,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H14,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H15,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_H16,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H17,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_H18,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE)
				| 1,
			0),
	_PAD_CFG_STRUCT(
		GPP_H19,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H20,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H21,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H22,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_H23,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Community 2 ------- */

	/* -------- GPIO Group GPD -------- */
	_PAD_CFG_STRUCT(GPD0,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPD1, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE) | (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPD2,
			PAD_FUNC(NF1) | PAD_IRQ_ROUTE(SCI) | PAD_BUF(TX_DISABLE) | (1 << 1),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPD3, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE) | (1 << 1),
			PAD_PULL(UP_20K)),
	_PAD_CFG_STRUCT(GPD4, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD5, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD6, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD7, PAD_FUNC(GPIO) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD8, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD9, PAD_FUNC(GPIO) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD10, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPD11, PAD_FUNC(NF1) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),

	/* ------- GPIO Community 3 ------- */

	/* ------- GPIO Group GPP_I ------- */
	_PAD_CFG_STRUCT(GPP_I0,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE) | (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_I1,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_I2,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(GPP_I3,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_IRQ_ROUTE(SMI)
				| PAD_IRQ_ROUTE(NMI) | PAD_BUF(TX_DISABLE),
			0),
	_PAD_CFG_STRUCT(
		GPP_I4,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE), 0),
	_PAD_CFG_STRUCT(
		GPP_I5,
		PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(RX_DISABLE), 0),
	_PAD_CFG_STRUCT(GPP_I6,
			PAD_FUNC(GPIO) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_I7,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_I8,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			PAD_PULL(DN_20K)),
	_PAD_CFG_STRUCT(GPP_I9,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			0),
	_PAD_CFG_STRUCT(GPP_I10,
			PAD_FUNC(NF1) | PAD_RESET(PLTRST) | PAD_TRIG(OFF) | PAD_BUF(TX_DISABLE)
				| (1 << 1),
			PAD_PULL(DN_20K)),
};

#endif /* CFG_GPIO_H */
