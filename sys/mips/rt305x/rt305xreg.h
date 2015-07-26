/*-
 * Copyright (c) 2010 Aleksandr Rybalko.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: releng/10.1/sys/mips/rt305x/rt305xreg.h 220297 2011-04-03 14:39:55Z adrian $
 */

#ifndef _RT305XREG_H_
#define _RT305XREG_H_

/* XXX: must move to config */
#define RT305X		1
#define RT305XF		1
#define RT3052F		1
#define __U_BOOT__	1
/* XXX: must move to config */

#ifdef RT3052F
#define PLATFORM_COUNTER_FREQ	(384 * 1000 * 1000)
#endif
#ifdef RT3050F
#define PLATFORM_COUNTER_FREQ	(320 * 1000 * 1000)
#endif
#ifndef PLATFORM_COUNTER_FREQ
#error "Nor RT3052F nor RT3050F defined"
#endif

#define SYSTEM_CLOCK	(PLATFORM_COUNTER_FREQ/3)


#define SDRAM_BASE 	0x00000000
#define SDRAM_END 	0x03FFFFFF

#define SYSCTL_BASE 	0x10000000
#define SYSCTL_END 	0x100000FF
#define TIMER_BASE 	0x10000100
#define TIMER_END 	0x100001FF
#define INTCTL_BASE 	0x10000200
#define INTCTL_END 	0x100002FF
#define MEMCTRL_BASE	0x10000300
#define MEMCTRL_END 	0x100003FF /* SDRAM & Flash/SRAM */
#define PCM_BASE 	0x10000400
#define PCM_END 	0x100004FF
#define UART_BASE 	0x10000500
#define UART_END 	0x100005FF
#define PIO_BASE 	0x10000600
#define PIO_END 	0x100006FF
#define GDMA_BASE 	0x10000700
#define GDMA_END 	0x100007FF /* Generic DMA */
#define NANDFC_BASE 	0x10000800
#define NANDFC_END 	0x100008FF /* NAND Flash Controller */
#define I2C_BASE 	0x10000900
#define I2C_END 	0x100009FF
#define I2S_BASE 	0x10000A00
#define I2S_END 	0x10000AFF
#define SPI_BASE 	0x10000B00
#define SPI_END 	0x10000BFF
#define UARTLITE_BASE 	0x10000C00
#define UARTLITE_END 	0x10000CFF

#define FRENG_BASE 	0x10100000
#define FRENG_END 	0x1010FFFF /* Frame Engine */
#define ETHSW_BASE 	0x10110000
#define ETHSW_END 	0x10117FFF /* Ethernet Switch */
#define ROM_BASE 	0x10118000
#define ROM_END 	0x10119FFF
#define WLAN_BASE 	0x10180000
#define WLAN_END 	0x101BFFFF /* 802.11n MAC/BBP */
#define USB_OTG_BASE	0x101C0000
#define USB_OTG_END 	0x101FFFFF
#define EMEM_BASE 	0x1B000000
#define EMEM_END 	0x1BFFFFFF /* External SRAM/Flash */
#define FLASH_BASE 	0x1F000000
#define FLASH_END 	0x1FFFFFFF /* Flash window */

#define OBIO_MEM_BASE	SYSCTL_BASE
#define OBIO_MEM_START	OBIO_MEM_BASE
#define OBIO_MEM_END	FLASH_END



/* System Control */
#define SYSCTL_CHIPID0_3 	0x00 /* 'R''T''3''0' */
#define SYSCTL_CHIPID4_7 	0x04 /* '5''2'' '' ' */
#define SYSCTL_SYSCFG		0x10
#define SYSCTL_SYSCFG_INIC_EE_SDRAM		(1<<29)
#define SYSCTL_SYSCFG_INIC_8MB_SDRAM		(1<<28) 
#define SYSCTL_SYSCFG_GE0_MODE_MASK		0x03000000
#define SYSCTL_SYSCFG_GE0_MODE_SHIFT		24
#define SYSCTL_SYSCFG_GE0_MODE_RGMII		0 /* RGMII Mode */
#define SYSCTL_SYSCFG_GE0_MODE_MII		1 /* MII Mode */
#define SYSCTL_SYSCFG_GE0_MODE_REV_MII		2 /*Reversed MII Mode*/
#define SYSCTL_SYSCFG_BOOT_ADDR_1F00		(1<<22)
#define SYSCTL_SYSCFG_BYPASS_PLL		(1<<21)
#define SYSCTL_SYSCFG_BIG_ENDIAN		(1<<20)
#define SYSCTL_SYSCFG_CPU_CLK_SEL_384MHZ	(1<<18)
#define SYSCTL_SYSCFG_BOOT_FROM_MASK		0x00030000
#define SYSCTL_SYSCFG_BOOT_FROM_SHIFT		16
#define SYSCTL_SYSCFG_BOOT_FROM_FLASH16		0
#define SYSCTL_SYSCFG_BOOT_FROM_FLASH8		1
#define SYSCTL_SYSCFG_BOOT_FROM_NANDFLASH	2
#define SYSCTL_SYSCFG_BOOT_FROM_ROM		3
#define SYSCTL_SYSCFG_TEST_CODE_MASK		0x0000ff00
#define SYSCTL_SYSCFG_TEST_CODE_SHIFT		8
#define SYSCTL_SYSCFG_SRAM_CS_MODE_MASK		0x0000000c
#define SYSCTL_SYSCFG_SRAM_CS_MODE_SHIFT	2
#define SYSCTL_SYSCFG_SRAM_CS_MODE_SRAM		0
#define SYSCTL_SYSCFG_SRAM_CS_MODE_WDOG_RST	1
#define SYSCTL_SYSCFG_SRAM_CS_MODE_BT_COEX	2
#define SYSCTL_SYSCFG_SDRAM_CLK_DRV		(1<<0) /* 8mA/12mA */

#define SYSCTL_TESTSTAT		0x18
#define SYSCTL_TESTSTAT2	0x1C

#define SYSCTL_CLKCFG0		0x2C
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_MASK		0xc0000000
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_SHIFT		30
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_ZERO_DELAY	0
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_1NS_DELAY		1
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_2NS_DELAY		2
#define SYSCTL_CLKCFG0_SDRAM_CLK_SKEW_3NS_DELAY		3

#define SYSCTL_CLKCFG1		0x30
#define SYSCTL_CLKCFG1_PBUS_DIV_CLK_BY2		(1<<30)
#define SYSCTL_CLKCFG1_OTG_CLK_EN		(1<<18)
#define SYSCTL_CLKCFG1_I2S_CLK_EN		(1<<15)
#define SYSCTL_CLKCFG1_I2S_CLK_SEL_EXT		(1<<14)
#define SYSCTL_CLKCFG1_I2S_CLK_DIV_MASK 		0x00003f00
#define SYSCTL_CLKCFG1_I2S_CLK_DIV_SHIFT 	8
#define SYSCTL_CLKCFG1_PCM_CLK_EN		(1<<7)
#define SYSCTL_CLKCFG1_PCM_CLK_SEL_EXT 		(1<<6)
#define SYSCTL_CLKCFG1_PCM_CLK_DIV_MASK 		0x0000003f
#define SYSCTL_CLKCFG1_PCM_CLK_DIV_SHIFT 	0

#define SYSCTL_RSTCTRL		0x34
#define SYSCTL_RSTCTRL_ETHSW		(1<<23)
#define SYSCTL_RSTCTRL_OTG		(1<<22)
#define SYSCTL_RSTCTRL_FRENG		(1<<21)
#define SYSCTL_RSTCTRL_WLAN		(1<<20)
#define SYSCTL_RSTCTRL_UARTL		(1<<19)
#define SYSCTL_RSTCTRL_SPI		(1<<18)
#define SYSCTL_RSTCTRL_I2S		(1<<17)
#define SYSCTL_RSTCTRL_I2C		(1<<16)
#define SYSCTL_RSTCTRL_DMA		(1<<14)
#define SYSCTL_RSTCTRL_PIO		(1<<13)
#define SYSCTL_RSTCTRL_UART		(1<<12)
#define SYSCTL_RSTCTRL_PCM		(1<<11)
#define SYSCTL_RSTCTRL_MC		(1<<10)
#define SYSCTL_RSTCTRL_INTC		(1<<9)
#define SYSCTL_RSTCTRL_TIMER		(1<<8)
#define SYSCTL_RSTCTRL_SYS		(1<<0)

#define SYSCTL_RSTSTAT		0x38
#define SYSCTL_RSTSTAT_SWCPURST		(1<<3)
#define SYSCTL_RSTSTAT_SWSYSRST		(1<<2)
#define SYSCTL_RSTSTAT_WDRST		(1<<1)

#define SYSCTL_GPIOMODE		0x60
#define SYSCTL_GPIOMODE_RGMII_GPIO_MODE		(1<<9)
#define SYSCTL_GPIOMODE_SDRAM_GPIO_MODE  	(1<<8)
#define SYSCTL_GPIOMODE_MDIO_GPIO_MODE   	(1<<7)
#define SYSCTL_GPIOMODE_JTAG_GPIO_MODE   	(1<<6)
#define SYSCTL_GPIOMODE_UARTL_GPIO_MODE  	(1<<5)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_UARTF		(0<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_PCM_UARTF	(1<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_PCM_I2S	(2<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_I2S_UARTF	(3<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_PCM_GPIO	(4<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_GPIO_UARTF	(5<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_GPIO_I2S	(6<<2)
#define SYSCTL_GPIOMODE_UARTF_SHARE_MODE_GPIO		(7<<2)
#define SYSCTL_GPIOMODE_SPI_GPIO_MODE    	(1<<1)
#define SYSCTL_GPIOMODE_I2C_GPIO_MODE    	(1<<0)

#define SYSCTL_MEMO0		0x68
#define SYSCTL_MEMO1		0x6C

/* Timer */
#define TIMER_TMRSTAT		0x00
#define TIMER_TMRSTAT_TMR1RST	(1<<5)
#define TIMER_TMRSTAT_TMR0RST	(1<<4)
#define TIMER_TMRSTAT_TMR1INT	(1<<1)
#define TIMER_TMRSTAT_TMR0INT	(1<<0)
#define TIMER_TMR0LOAD		0x10
#define TIMER_TMR0VAL		0x14
#define TIMER_TMR0CTL		0x18
#define TIMER_TMR1LOAD		0x20
#define TIMER_TMR1VAL		0x24
#define TIMER_TMR1CTL		0x28

#define TIMER_TMRLOAD_TMR0LOAD_MASK	0xffff

#define TIMER_TMRVAL_TMR0VAL_MASK	0xffff

#define TIMER_TMRCTL_ENABLE		(1<<7)
#define TIMER_TMRCTL_MODE_MASK		0x00000030
#define TIMER_TMRCTL_MODE_SHIFT		4
#define TIMER_TMRCTL_MODE_FREE		0
#define TIMER_TMRCTL_MODE_PERIODIC	1
#define TIMER_TMRCTL_MODE_TIMOUT	2
#define TIMER_TMRCTL_MODE_TIMOUT3	3
#define TIMER_TMRCTL_PRESCALE_MASK	0x0000000f
#define TIMER_TMRCTL_PRESCALE_SHIFT	0
#define TIMER_TMRCTL_PRESCALE_NONE	0
#define TIMER_TMRCTL_PRESCALE_BY_4	1
#define TIMER_TMRCTL_PRESCALE_BY_8	2
#define TIMER_TMRCTL_PRESCALE_BY_16	3
#define TIMER_TMRCTL_PRESCALE_BY_32	4
#define TIMER_TMRCTL_PRESCALE_BY_64	5
#define TIMER_TMRCTL_PRESCALE_BY_128	6
#define TIMER_TMRCTL_PRESCALE_BY_256	7
#define TIMER_TMRCTL_PRESCALE_BY_512	8
#define TIMER_TMRCTL_PRESCALE_BY_1K	9
#define TIMER_TMRCTL_PRESCALE_BY_2K	10
#define TIMER_TMRCTL_PRESCALE_BY_4K	11
#define TIMER_TMRCTL_PRESCALE_BY_8K	12
#define TIMER_TMRCTL_PRESCALE_BY_16K	13
#define TIMER_TMRCTL_PRESCALE_BY_32K	14
#define TIMER_TMRCTL_PRESCALE_BY_64K	15

/* Interrupt Controller */
#define IC_IRQ0STAT		0x00
#define IC_IRQ1STAT		0x04
#define IC_INTTYPE		0x20
#define IC_INTRAW		0x30
#define IC_INT_ENA		0x34
#define IC_INT_DIS		0x38

#define IC_OTG		18
#define IC_ETHSW	17
#define IC_UARTLITE	12
#define IC_I2S		10
#define IC_PERFC	9
#define IC_NAND		8
#define IC_DMA		7
#define IC_PIO		6
#define IC_UART		5
#define IC_PCM		4
#define IC_ILL_ACCESS	3
#define IC_WDTIMER	2
#define IC_TIMER0	1
#define IC_SYSCTL	0

#define IC_LINE_GLOBAL		(1<<31) /* Only for DIS/ENA regs */
#define IC_LINE_OTG		(1<<18)
#define IC_LINE_ETHSW		(1<<17)
#define IC_LINE_UARTLITE	(1<<12)
#define IC_LINE_I2S		(1<<10)
#define IC_LINE_PERFC		(1<<9)
#define IC_LINE_NAND		(1<<8)
#define IC_LINE_DMA		(1<<7)
#define IC_LINE_PIO		(1<<6)
#define IC_LINE_UART		(1<<5)
#define IC_LINE_PCM		(1<<4)
#define IC_LINE_ILL_ACCESS	(1<<3)
#define IC_LINE_WDTIMER		(1<<2)
#define IC_LINE_TIMER0		(1<<1)
#define IC_LINE_SYSCTL		(1<<0)

#define IC_INT_MASK		0x000617ff

/* GPIO */

#define GPIO23_00_INT		0x00 /* Programmed I/O Int Status */
#define GPIO23_00_EDGE		0x04 /* Programmed I/O Edge Status */
#define GPIO23_00_RENA		0x08 /* Programmed I/O Int on Rising */
#define GPIO23_00_FENA		0x0C /* Programmed I/O Int on Falling */
#define GPIO23_00_DATA		0x20 /* Programmed I/O Data */
#define GPIO23_00_DIR		0x24 /* Programmed I/O Direction */
#define GPIO23_00_POL		0x28 /* Programmed I/O Pin Polarity */
#define GPIO23_00_SET		0x2C /* Set PIO Data Bit */
#define GPIO23_00_RESET		0x30 /* Clear PIO Data bit */
#define GPIO23_00_TOG		0x34 /* Toggle PIO Data bit */

#define GPIO39_24_INT		0x38
#define GPIO39_24_EDGE		0x3c
#define GPIO39_24_RENA		0x40
#define GPIO39_24_FENA		0x44
#define GPIO39_24_DATA		0x48
#define GPIO39_24_DIR		0x4c
#define GPIO39_24_POL		0x50
#define GPIO39_24_SET		0x54
#define GPIO39_24_RESET		0x58
#define GPIO39_24_TOG		0x5c

#define GPIO51_40_INT		0x60
#define GPIO51_40_EDGE		0x64
#define GPIO51_40_RENA		0x68
#define GPIO51_40_FENA		0x6C
#define GPIO51_40_DATA		0x70
#define GPIO51_40_DIR		0x74
#define GPIO51_40_POL		0x78
#define GPIO51_40_SET		0x7C
#define GPIO51_40_RESET		0x80
#define GPIO51_40_TOG		0x84




#define GDMA_CHANNEL_REQ0	0
#define GDMA_CHANNEL_REQ1	1 /* (NAND-flash) */
#define GDMA_CHANNEL_REQ2	2 /* (I2S) */
#define GDMA_CHANNEL_REQ3	3 /* (PCM0-RX) */
#define GDMA_CHANNEL_REQ4	4 /* (PCM1-RX) */
#define GDMA_CHANNEL_REQ5	5 /* (PCM0-TX) */
#define GDMA_CHANNEL_REQ6	6 /* (PCM1-TX) */
#define GDMA_CHANNEL_REQ7	7
#define GDMA_CHANNEL_MEM	8

/* Generic DMA Controller */
/* GDMA Channel n Source Address */
#define GDMASA(n)		(0x00 + 0x10*n)
 /* GDMA Channel n Destination Address */
#define GDMADA(n)		(0x04 + 0x10*n)
 /* GDMA Channel n Control Register 0 */
#define GDMACT0(n)		(0x08 + 0x10*n)

#define GDMACT0_TR_COUNT_MASK		0x0fff0000
#define GDMACT0_TR_COUNT_SHIFT		16
#define GDMACT0_SRC_CHAN_SHIFT		12
#define GDMACT0_SRC_CHAN_MASK		0x0000f000
#define GDMACT0_DST_CHAN_SHIFT		8
#define GDMACT0_DST_CHAN_MASK		0x00000f00
#define GDMACT0_SRC_BURST_MODE		(1<<7)
#define GDMACT0_DST_BURST_MODE		(1<<6)
#define GDMACT0_BURST_SIZE_SHIFT	3
#define GDMACT0_BURST_SIZE_MASK		0x00000038
#define GDMACT0_BURST_SIZE_1		0
#define GDMACT0_BURST_SIZE_2		1
#define GDMACT0_BURST_SIZE_4		2
#define GDMACT0_BURST_SIZE_8		3
#define GDMACT0_BURST_SIZE_16		4

#define GDMACT0_DONE_INT_EN		(1<<2)
#define GDMACT0_CHAN_EN			(1<<1)
/*
 * In software mode, the data transfer will start when the Channel Enable bit
 * is set.
 * In hardware mode, the data transfer will start when the DMA Request is
 * asserted.
*/
#define GDMACT0_SWMODE			(1<<0)




#endif /* _RT305XREG_H_ */
