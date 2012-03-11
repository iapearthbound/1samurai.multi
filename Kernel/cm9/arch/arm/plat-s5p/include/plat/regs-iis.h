/* linux/include/asm-arm/plat-s3c24xx/regs-s3c2412-iis.h
 *
 * Copyright 2007 Simtec Electronics <linux@simtec.co.uk>
 *	http://armlinux.simtec.co.uk/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S3C2412 IIS register definition
*/

#ifndef __ASM_ARCH_REGS_S3C2412_IIS_H
#define __ASM_ARCH_REGS_S3C2412_IIS_H

#define S3C2412_IISCON			(0x00)
#define S3C2412_IISMOD			(0x04)
#define S3C2412_IISFIC			(0x08)
#define S3C2412_IISPSR			(0x0C)
#define S3C2412_IISTXD			(0x10)
#define S3C2412_IISRXD			(0x14)
#define S5P_IISFICS			(0x18)
#define S5P_IISTXDS			(0x1C)
#define S5P_IISAHB			(0x20)
#define S5P_IISSTR			(0x24)
#define S5P_IISSIZE			(0x28)
#define S5P_IISTRNCNT			(0x2C)
#define S5P_IISADDR0			(0x30)
#define S5P_IISADDR1			(0x34)
#define S5P_IISADDR2			(0x38)
#define S5P_IISADDR3			(0x3C)
#define S5P_IISSTR1          (0x40)

#define S5P_IISCON_FTXSURSTAT		(1 << 24)
#define S5P_IISCON_FTXSURINTEN		(1 << 23)
#define S5P_IISCON_TXSDMAPAUSE		(1 << 20)
#define S5P_IISCON_TXSDMACTIVE		(1 << 18)
#define S5P_IISCON_FTXURSTATUS		(1 << 17)
#define S5P_IISCON_FTXURINTEN		(1 << 16)

#define S3C2412_IISCON_LRINDEX		(1 << 11)
#define S3C2412_IISCON_TXFIFO_EMPTY	(1 << 10)
#define S3C2412_IISCON_RXFIFO_EMPTY	(1 << 9)
#define S3C2412_IISCON_TXFIFO_FULL	(1 << 8)
#define S3C2412_IISCON_RXFIFO_FULL	(1 << 7)
#define S3C2412_IISCON_TXDMA_PAUSE	(1 << 6)
#define S3C2412_IISCON_RXDMA_PAUSE	(1 << 5)
#define S3C2412_IISCON_TXCH_PAUSE	(1 << 4)
#define S3C2412_IISCON_RXCH_PAUSE	(1 << 3)
#define S3C2412_IISCON_TXDMA_ACTIVE	(1 << 2)
#define S3C2412_IISCON_RXDMA_ACTIVE	(1 << 1)
#define S3C2412_IISCON_IIS_ACTIVE	(1 << 0)

#define S3C64XX_IISMOD_OPPCLK		(3<<30)

#define S5P_IISMOD_TXSLP		(1<<28)
#define S5P_IISMOD_BLCPMASK		(3<<24)
#define S5P_IISMOD_BLCSMASK		(3<<26)

#define S3C64XX_IISMOD_BLC_16BIT	(0 << 13)
#define S3C64XX_IISMOD_BLC_8BIT		(1 << 13)
#define S3C64XX_IISMOD_BLC_24BIT	(2 << 13)
#define S3C64XX_IISMOD_BLC_MASK		(3 << 13)

#define S3C64XX_IISMOD_IMSMASK		(3 << 10)
#define S3C64XX_IISMOD_IMS_PCLK		(0 << 10)
#define S3C64XX_IISMOD_IMS_SYSMUX	(1 << 10)
#define S3C64XX_CLKSRC_I2SEXT		(3 << 10)
#define S3C64XX_CDCLKSRC_EXT		(5 << 10)

#define S3C2412_IISMOD_MASTER_INTERNAL	(0 << 10)
#define S3C2412_IISMOD_MASTER_EXTERNAL	(1 << 10)
#define S3C2412_IISMOD_SLAVE		(2 << 10)
#define S3C2412_IISMOD_MASTER_MASK	(3 << 10)
#define S3C2412_IISMOD_MODE_TXONLY	(0 << 8)
#define S3C2412_IISMOD_MODE_RXONLY	(1 << 8)
#define S3C2412_IISMOD_MODE_TXRX	(2 << 8)
#define S3C2412_IISMOD_MODE_MASK	(3 << 8)
#define S3C2412_IISMOD_LR_LLOW		(0 << 7)
#define S3C2412_IISMOD_LR_RLOW		(1 << 7)
#define S3C2412_IISMOD_SDF_IIS		(0 << 5)
#define S3C2412_IISMOD_SDF_MSB		(1 << 5)
#define S3C2412_IISMOD_SDF_LSB		(2 << 5)
#define S3C2412_IISMOD_SDF_MASK		(3 << 5)
#define S3C2412_IISMOD_RCLK_256FS	(0 << 3)
#define S3C2412_IISMOD_RCLK_512FS	(1 << 3)
#define S3C2412_IISMOD_RCLK_384FS	(2 << 3)
#define S3C2412_IISMOD_RCLK_768FS	(3 << 3)
#define S3C2412_IISMOD_RCLK_MASK 	(3 << 3)
#define S3C2412_IISMOD_BCLK_32FS	(0 << 1)
#define S3C2412_IISMOD_BCLK_48FS	(1 << 1)
#define S3C2412_IISMOD_BCLK_16FS	(2 << 1)
#define S3C2412_IISMOD_BCLK_24FS	(3 << 1)
#define S3C2412_IISMOD_BCLK_MASK	(3 << 1)
#define S3C2412_IISMOD_8BIT		(1 << 0)

#define S3C64XX_IISMOD_CDCLKCON		(1 << 12)

#define S3C2412_IISPSR_PSREN		(1 << 15)

#define S3C2412_IISFIC_TXFLUSH		(1 << 15)
#define S3C2412_IISFIC_RXFLUSH		(1 << 7)
#define S3C2412_IISFIC_TXCOUNT(x)	(((x) >>  8) & 0xf)
#define S3C2412_IISFIC_RXCOUNT(x)	(((x) >>  0) & 0xf)

#define S5P_IISAHB_INTENLVL3	(1<<27)
#define S5P_IISAHB_INTENLVL2	(1<<26)
#define S5P_IISAHB_INTENLVL1	(1<<25)
#define S5P_IISAHB_INTENLVL0	(1<<24)
#define S5P_IISAHB_LVL3INT	(1<<23)
#define S5P_IISAHB_LVL2INT	(1<<22)
#define S5P_IISAHB_LVL1INT	(1<<21)
#define S5P_IISAHB_LVL0INT	(1<<20)
#define S5P_IISAHB_CLRLVL3	(1<<19)
#define S5P_IISAHB_CLRLVL2	(1<<18)
#define S5P_IISAHB_CLRLVL1	(1<<17)
#define S5P_IISAHB_CLRLVL0	(1<<16)
#define S5P_IISAHB_DMARLD	(1<<5)
#define S5P_IISAHB_DMA_STRADDRRST (1<<7)
#define S5P_IISAHB_DMA_STRADDRTOG (1<<6)
#define S5P_IISAHB_DISRLDINT	(1<<3)
#define S5P_IISAHB_DMAEND	(1<<2)
#define S5P_IISAHB_DMACLR	(1<<1)
#define S5P_IISAHB_DMAEN	(1<<0)

#define S5P_IISSIZE_SHIFT	(16)
#define S5P_IISSIZE_TRNMSK	(0xffff)
#define S5P_IISTRNCNT_MASK	(0xffffff)

#define S5P_IISADDR_MASK	(0x3fffff)
#define S5P_IISADDR_SHIFT	(10)
#define S5P_IISADDR_ENSTOP	(1<<0)

/* clock sources */
#define S3C_IISMOD_IMSMASK	(3<<10)
#define S3C_IISMOD_MSTPCLK	(0<<10)
#define S3C_IISMOD_MSTCLKAUDIO	(1<<10)
#define S3C_IISMOD_SLVPCLK	(2<<10)
#define S3C_IISMOD_SLVI2SCLK	(3<<10)

#define S3C_CLKSRC_PCLK		S3C_IISMOD_MSTPCLK
#define S3C_CLKSRC_CLKAUDIO	S3C_IISMOD_MSTCLKAUDIO
#define S3C_CLKSRC_SLVPCLK	S3C_IISMOD_SLVPCLK
#define S3C_CLKSRC_I2SEXT	S3C_IISMOD_SLVI2SCLK
#define S3C_CDCLKSRC_INT	(4<<10)
#define S3C_CDCLKSRC_EXT	(5<<10)


#endif /* __ASM_ARCH_REGS_S3C2412_IIS_H */

