#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* Pin_1 */
#define Pin_1__0__DR CYREG_GPIO_PRT0_DR
#define Pin_1__0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define Pin_1__0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define Pin_1__0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define Pin_1__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define Pin_1__0__HSIOM_MASK 0x000000F0u
#define Pin_1__0__HSIOM_SHIFT 4u
#define Pin_1__0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define Pin_1__0__INTR CYREG_GPIO_PRT0_INTR
#define Pin_1__0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define Pin_1__0__INTSTAT CYREG_GPIO_PRT0_INTR
#define Pin_1__0__MASK 0x02u
#define Pin_1__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_1__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_1__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_1__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_1__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_1__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_1__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_1__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_1__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_1__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_1__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_1__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_1__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_1__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_1__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_1__0__PC CYREG_GPIO_PRT0_PC
#define Pin_1__0__PC2 CYREG_GPIO_PRT0_PC2
#define Pin_1__0__PORT 0u
#define Pin_1__0__PS CYREG_GPIO_PRT0_PS
#define Pin_1__0__SHIFT 1
#define Pin_1__DR CYREG_GPIO_PRT0_DR
#define Pin_1__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define Pin_1__DR_INV CYREG_GPIO_PRT0_DR_INV
#define Pin_1__DR_SET CYREG_GPIO_PRT0_DR_SET
#define Pin_1__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define Pin_1__INTR CYREG_GPIO_PRT0_INTR
#define Pin_1__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define Pin_1__INTSTAT CYREG_GPIO_PRT0_INTR
#define Pin_1__MASK 0x02u
#define Pin_1__PA__CFG0 CYREG_UDB_PA0_CFG0
#define Pin_1__PA__CFG1 CYREG_UDB_PA0_CFG1
#define Pin_1__PA__CFG10 CYREG_UDB_PA0_CFG10
#define Pin_1__PA__CFG11 CYREG_UDB_PA0_CFG11
#define Pin_1__PA__CFG12 CYREG_UDB_PA0_CFG12
#define Pin_1__PA__CFG13 CYREG_UDB_PA0_CFG13
#define Pin_1__PA__CFG14 CYREG_UDB_PA0_CFG14
#define Pin_1__PA__CFG2 CYREG_UDB_PA0_CFG2
#define Pin_1__PA__CFG3 CYREG_UDB_PA0_CFG3
#define Pin_1__PA__CFG4 CYREG_UDB_PA0_CFG4
#define Pin_1__PA__CFG5 CYREG_UDB_PA0_CFG5
#define Pin_1__PA__CFG6 CYREG_UDB_PA0_CFG6
#define Pin_1__PA__CFG7 CYREG_UDB_PA0_CFG7
#define Pin_1__PA__CFG8 CYREG_UDB_PA0_CFG8
#define Pin_1__PA__CFG9 CYREG_UDB_PA0_CFG9
#define Pin_1__PC CYREG_GPIO_PRT0_PC
#define Pin_1__PC2 CYREG_GPIO_PRT0_PC2
#define Pin_1__PORT 0u
#define Pin_1__PS CYREG_GPIO_PRT0_PS
#define Pin_1__SHIFT 1

/* Miscellaneous */
#define CY_PROJECT_NAME "HelloTLC59731"
#define CY_VERSION "PSoC Creator  3.3 CP2"
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 18u
#define CYDEV_CHIP_DIE_PSOC4A 10u
#define CYDEV_CHIP_DIE_PSOC5LP 17u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 10u
#define CYDEV_CHIP_MEMBER_4C 15u
#define CYDEV_CHIP_MEMBER_4D 6u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 11u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 9u
#define CYDEV_CHIP_MEMBER_4I 14u
#define CYDEV_CHIP_MEMBER_4J 7u
#define CYDEV_CHIP_MEMBER_4K 8u
#define CYDEV_CHIP_MEMBER_4L 13u
#define CYDEV_CHIP_MEMBER_4M 12u
#define CYDEV_CHIP_MEMBER_4N 5u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 17u
#define CYDEV_CHIP_MEMBER_5B 16u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 10u
#define CYDEV_DFT_SELECT_CLK1 11u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
