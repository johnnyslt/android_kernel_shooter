/* linux/arch/arm/mach-msm/board-shooter.h
 *
 * Copyright (C) 2010-2011 HTC Corporation.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ARCH_ARM_MACH_MSM_BOARD_shooter_H
#define __ARCH_ARM_MACH_MSM_BOARD_shooter_H

#include <mach/board.h>
#include <mach/msm_memtypes.h>

#define MSM_RAM_CONSOLE_BASE	MSM_HTC_RAM_CONSOLE_PHYS
#define MSM_RAM_CONSOLE_SIZE	MSM_HTC_RAM_CONSOLE_SIZE

/* Memory map */
#define MSM_ION_HEAP_NUM      5

#define MSM_FB_SIZE           roundup((960 * ALIGN(540, 32) * 4 * 3), 4096)
#define MSM_SMI_SIZE          0x3900000
#define KERNEL_SMI_SIZE       0xC00000
#define USER_SMI_SIZE         (MSM_SMI_SIZE - KERNEL_SMI_SIZE)
#define MSM_PMEM_ADSP_SIZE    0x1100000
#define MSM_PMEM_AUDIO_SIZE   0x300000
#define MSM_ION_SF_SIZE       0x2B00000
#define MSM_ION_MM_FW_SIZE    0x200000
#define MSM_ION_MM_SIZE       0x3400000
#define MSM_ION_MFC_SIZE      0x300000

#define MSM_SMI_BASE          0x38000000
#define KERNEL_SMI_BASE       MSM_SMI_BASE
#define USER_SMI_BASE         (KERNEL_SMI_BASE + KERNEL_SMI_SIZE)
#define MSM_ION_MM_FW_BASE    MSM_SMI_BASE
#define MSM_ION_MM_BASE       (MSM_ION_MM_FW_BASE + MSM_ION_MM_FW_SIZE)
#define MSM_ION_MFC_BASE      0x3B600000
#define MSM_FB_BASE           0x3B900000
#define MSM_ION_SF_BASE       0x40300000
#define MSM_PMEM_AUDIO_BASE   0x46400000
#define MSM_PMEM_ADSP_BASE    (PHY_BASE_ADDR1 + 0x1800000)

#ifdef CONFIG_MACH_SHOOTER_CT
#define PHY_BASE_ADDR1        0x48800000
#define SIZE_ADDR1            0x37800000
#else
#define PHY_BASE_ADDR1        0x48000000
#define SIZE_ADDR1            0x38000000
#endif

/* GPIO definition */

/* Direct Keys */
#define SHOOTER_GPIO_SW_LCM_3D		(64)
#define SHOOTER_GPIO_SW_LCM_2D		(68)
#define SHOOTER_GPIO_KEY_VOL_DOWN	(103)
#define SHOOTER_GPIO_KEY_VOL_UP		(104)
#define SHOOTER_GPIO_KEY_CAM_STEP2	(115)
#define SHOOTER_GPIO_KEY_CAM_STEP1	(123)
#define SHOOTER_GPIO_KEY_POWER		(125)

/* Battery */
#define shooter_GPIO_MBAT_IN		(61)
#define shooter_GPIO_CHG_INT		(126)

/* Wifi */
#define shooter_GPIO_WIFI_IRQ		(46)
#define shooter_GPIO_WIFI_SHUTDOWN_N	(96)

/* WiMax */
#define SHOOTER_GPIO_WIMAX_UART_SIN	(41)
#define SHOOTER_GPIO_WIMAX_UART_SOUT	(42)
#define SHOOTER_GPIO_V_WIMAX_1V2_RF_EN	(43)
#define SHOOTER_GPIO_WIMAX_EXT_RST	(49)
#define SHOOTER_GPIO_V_WIMAX_DVDD_EN	(94)
#define SHOOTER_GPIO_V_WIMAX_PVDD_EN	(105)
#define SHOOTER_GPIO_WIMAX_SDIO_D0	(143)
#define SHOOTER_GPIO_WIMAX_SDIO_D1	(144)
#define SHOOTER_GPIO_WIMAX_SDIO_D2	(145)
#define SHOOTER_GPIO_WIMAX_SDIO_D3	(146)
#define SHOOTER_GPIO_WIMAX_SDIO_CMD	(151)
#define SHOOTER_GPIO_WIMAX_SDIO_CLK_CPU	(152)
#define SHOOTER_GPIO_CPU_WIMAX_SW	(156)
#define SHOOTER_GPIO_CPU_WIMAX_UART_EN	(157)

/* Sensors */
#define shooter_SENSOR_I2C_SDA		(72)
#define shooter_SENSOR_I2C_SCL		(73)
#define shooter_GYRO_INT		(127)
#define shooter_ECOMPASS_INT		(128)
#define shooter_GSENSOR_INT		(129)

/* Microp */

/* TP */
#define shooter_TP_I2C_SDA    (51)
#define shooter_TP_I2C_SCL    (52)
#ifdef CONFIG_MACH_SHOOTER_CT
#define shooter_TP_ATT_N      (57)
#else
#define shooter_TP_ATT_N      (65)
#define shooter_TP_ATT_N_XC   (57)
#endif

/* LCD */
#define GPIO_LCM_ID			50
#define GPIO_LCM_RST_N			66
#define GPIO_LCD_TE           (28)

/* Audio */
#define SHOOTER_AUD_CODEC_RST		(67)
#define SHOOTER_AUD_CDC_LDO_SEL		(116)
#define SHOOTER_AUD_MIC_SEL		PMGPIO(14)
#define SHOOTER_AUD_SPK_ENO		PMGPIO(19)
#define SHOOTER_AUD_HANDSET_ENO		PMGPIO(18)
/* BT */
#define shooter_GPIO_BT_HOST_WAKE	(45)
#define shooter_GPIO_BT_UART1_TX	(53)
#define shooter_GPIO_BT_UART1_RX	(54)
#define shooter_GPIO_BT_UART1_CTS	(55)
#define shooter_GPIO_BT_UART1_RTS	(56)
#define shooter_GPIO_BT_SHUTDOWN_N	(100)
#define shooter_GPIO_BT_CHIP_WAKE	(130)
#define shooter_GPIO_BT_RESET_N		(142)

/* USB */
#define shooter_GPIO_USB_ID		(63)
#define shooter_GPIO_MHL_RESET		(70)
#define shooter_GPIO_MHL_INT		(71)
#define shooter_GPIO_MHL_USB_SWITCH	(99)

/* General */
#define shooter_GENERAL_I2C_SDA		(59)
#define shooter_GENERAL_I2C_SCL		(60)

/* Flashlight */
#define shooter_FLASH_EN		(29)
#define shooter_TORCH_EN		(30)

/* Accessory */
#define shooter_GPIO_AUD_HP_DET		(31)

/* SPI */
#define shooter_SPI_DO			(33)
#define shooter_SPI_DI			(34)
#define shooter_SPI_CS			(35)
#define shooter_SPI_CLK			(36)

/* CAMERA SPI */
#if defined (CONFIG_MACH_SHOOTER_U) || defined (CONFIG_MACH_SHOOTER_CT)
#define SHOOTER_SP3D_SPI_DO		(41)
#define SHOOTER_SP3D_SPI_DI		(42)
#define SHOOTER_SP3D_SPI_CS		(43)
#define SHOOTER_SP3D_SPI_CLK		(44)
#else
#define SHOOTER_SP3D_SPI_DO		(37)
#define SHOOTER_SP3D_SPI_DI		(38)
#define SHOOTER_SP3D_SPI_CS		(39)
#define SHOOTER_SP3D_SPI_CLK		(40)
#endif

/* CAMERA GPIO */
#define SHOOTER_CAM_I2C_SDA		(47)
#define SHOOTER_CAM_I2C_SCL		(48)

#define SHOOTER_SP3D_GATE		(107)
#define SHOOTER_SP3D_CORE_GATE		(58)
#define SHOOTER_SP3D_SYS_RST		(102)
#define SHOOTER_SP3D_PDX		(137)

#define SHOOTER_S5K4E1_PD		(137)
#define SHOOTER_S5K4E1_INTB		(102)
#define SHOOTER_S5K4E1_VCM_PD		(58)

#define SHOOTER_SP3D_MCLK		(32)
#define SHOOTER_WEBCAM_STB		(140)
#define SHOOTER_WEBCAM_RST		(138)
#define SHOOTER_CAM_SEL			(141)
#define SHOOTER_SP3D_INT		(106)

/* LCM */
#define SHOOTER_CTL_3D_1		(131)
#define SHOOTER_CTL_3D_2		(132)
#define SHOOTER_CTL_3D_3		(133)
#define SHOOTER_CTL_3D_4		(134)
#define SHOOTER_LCM_3D_PDz		(135)

/* PMIC */

/* PMIC GPIO definition */
#define PMGPIO(x)			(x-1)
#define SHOOTER_3DLCM_PD		PMGPIO(20)
#define SHOOTER_AUD_QTR_RESET		PMGPIO(21)
#define SHOOTER_TP_RST			PMGPIO(23)
#define SHOOTER_GREEN_LED		PMGPIO(24)
#define SHOOTER_AMBER_LED		PMGPIO(25)
#define SHOOTER_3DCLK			PMGPIO(26)
#define SHOOTER_CHG_STAT		PMGPIO(33)
#define SHOOTER_SDC3_DET		PMGPIO(34)
#define SHOOTER_PLS_INT			PMGPIO(22)
#define SHOOTER_AUD_REMO_PRES		PMGPIO(37)
#define SHOOTER_AUD_REMO_EN		PMGPIO(15)
#define SHOOTER_WIFI_BT_SLEEP_CLK	PMGPIO(38)
#define SHOOTER_TORCH_SET1		PMGPIO(32)
#define SHOOTER_TORCH_SET2		PMGPIO(31)
#define SHOOTER_WIMAX_HOST_WAKEUP	PMGPIO(17)
#define SHOOTER_WIMAX_DEBUG12		PMGPIO(16)
#define SHOOTER_WIMAX_DEBUG14_XA	PMGPIO(28)
#define SHOOTER_WIMAX_DEBUG15_XA	PMGPIO(30)
#define SHOOTER_WIMAX_DEBUG14		PMGPIO(35)
#define SHOOTER_WIMAX_DEBUG15		PMGPIO(36)

/* Macros assume PMIC GPIOs start at 0 */
#define PM8058_GPIO_BASE			NR_MSM_GPIOS
#define PM8058_GPIO_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8058_GPIO_BASE)
#define PM8058_GPIO_SYS_TO_PM(sys_gpio)		(sys_gpio - PM8058_GPIO_BASE)
#define PM8058_MPP_BASE				(PM8058_GPIO_BASE + PM8058_GPIOS)
#define PM8058_MPP_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8058_MPP_BASE)
#define PM8058_MPP_SYS_TO_PM(sys_gpio)		(sys_gpio - PM8058_MPP_BASE)

#define PM8901_GPIO_BASE			(PM8058_GPIO_BASE + \
		PM8058_GPIOS + PM8058_MPPS)
#define PM8901_GPIO_PM_TO_SYS(pm_gpio)		(pm_gpio + PM8901_GPIO_BASE)
#define PM8901_GPIO_SYS_TO_PM(sys_gpio)		(sys_gpio - PM901_GPIO_BASE)
#define PM8901_IRQ_BASE				(PM8058_IRQ_BASE + \
		NR_PMIC8058_IRQS)

extern int panel_type;

int __init shooter_init_mmc(void);
void __init shooter_audio_init(void);
int __init shooter_init_keypad(void);
int __init shooter_wifi_init(void);
void shooter_init_fb(void);
void shooter_allocate_fb_region(void);
void __init shooter_mdp_writeback(struct memtype_reserve* reserve_table);
void __init msm_fb_add_devices(void);

#endif /* __ARCH_ARM_MACH_MSM_BOARD_shooter_H */
