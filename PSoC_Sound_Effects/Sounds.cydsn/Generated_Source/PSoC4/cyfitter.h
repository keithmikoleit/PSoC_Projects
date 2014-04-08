#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* SPIM_1_TxInternalInterrupt */
#define SPIM_1_TxInternalInterrupt__INTC_CLR_EN_REG CYREG_CM0_ICER
#define SPIM_1_TxInternalInterrupt__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define SPIM_1_TxInternalInterrupt__INTC_MASK 0x01u
#define SPIM_1_TxInternalInterrupt__INTC_NUMBER 0u
#define SPIM_1_TxInternalInterrupt__INTC_PRIOR_MASK 0xC0u
#define SPIM_1_TxInternalInterrupt__INTC_PRIOR_NUM 3u
#define SPIM_1_TxInternalInterrupt__INTC_PRIOR_REG CYREG_CM0_IPR0
#define SPIM_1_TxInternalInterrupt__INTC_SET_EN_REG CYREG_CM0_ISER
#define SPIM_1_TxInternalInterrupt__INTC_SET_PD_REG CYREG_CM0_ISPR

/* P0_4_D0_Speaker */
#define P0_4_D0_Speaker__0__DM__MASK 0x7000u
#define P0_4_D0_Speaker__0__DM__SHIFT 12
#define P0_4_D0_Speaker__0__DR CYREG_PRT0_DR
#define P0_4_D0_Speaker__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define P0_4_D0_Speaker__0__HSIOM_MASK 0x000F0000u
#define P0_4_D0_Speaker__0__HSIOM_SHIFT 16u
#define P0_4_D0_Speaker__0__INTCFG CYREG_PRT0_INTCFG
#define P0_4_D0_Speaker__0__INTSTAT CYREG_PRT0_INTSTAT
#define P0_4_D0_Speaker__0__MASK 0x10u
#define P0_4_D0_Speaker__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define P0_4_D0_Speaker__0__OUT_SEL_SHIFT 8u
#define P0_4_D0_Speaker__0__OUT_SEL_VAL 1u
#define P0_4_D0_Speaker__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define P0_4_D0_Speaker__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define P0_4_D0_Speaker__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define P0_4_D0_Speaker__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define P0_4_D0_Speaker__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define P0_4_D0_Speaker__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define P0_4_D0_Speaker__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define P0_4_D0_Speaker__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define P0_4_D0_Speaker__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define P0_4_D0_Speaker__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define P0_4_D0_Speaker__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define P0_4_D0_Speaker__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define P0_4_D0_Speaker__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define P0_4_D0_Speaker__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define P0_4_D0_Speaker__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define P0_4_D0_Speaker__0__PC CYREG_PRT0_PC
#define P0_4_D0_Speaker__0__PC2 CYREG_PRT0_PC2
#define P0_4_D0_Speaker__0__PORT 0u
#define P0_4_D0_Speaker__0__PS CYREG_PRT0_PS
#define P0_4_D0_Speaker__0__SHIFT 4
#define P0_4_D0_Speaker__DR CYREG_PRT0_DR
#define P0_4_D0_Speaker__INTCFG CYREG_PRT0_INTCFG
#define P0_4_D0_Speaker__INTSTAT CYREG_PRT0_INTSTAT
#define P0_4_D0_Speaker__MASK 0x10u
#define P0_4_D0_Speaker__PA__CFG0 CYREG_UDB_PA0_CFG0
#define P0_4_D0_Speaker__PA__CFG1 CYREG_UDB_PA0_CFG1
#define P0_4_D0_Speaker__PA__CFG10 CYREG_UDB_PA0_CFG10
#define P0_4_D0_Speaker__PA__CFG11 CYREG_UDB_PA0_CFG11
#define P0_4_D0_Speaker__PA__CFG12 CYREG_UDB_PA0_CFG12
#define P0_4_D0_Speaker__PA__CFG13 CYREG_UDB_PA0_CFG13
#define P0_4_D0_Speaker__PA__CFG14 CYREG_UDB_PA0_CFG14
#define P0_4_D0_Speaker__PA__CFG2 CYREG_UDB_PA0_CFG2
#define P0_4_D0_Speaker__PA__CFG3 CYREG_UDB_PA0_CFG3
#define P0_4_D0_Speaker__PA__CFG4 CYREG_UDB_PA0_CFG4
#define P0_4_D0_Speaker__PA__CFG5 CYREG_UDB_PA0_CFG5
#define P0_4_D0_Speaker__PA__CFG6 CYREG_UDB_PA0_CFG6
#define P0_4_D0_Speaker__PA__CFG7 CYREG_UDB_PA0_CFG7
#define P0_4_D0_Speaker__PA__CFG8 CYREG_UDB_PA0_CFG8
#define P0_4_D0_Speaker__PA__CFG9 CYREG_UDB_PA0_CFG9
#define P0_4_D0_Speaker__PC CYREG_PRT0_PC
#define P0_4_D0_Speaker__PC2 CYREG_PRT0_PC2
#define P0_4_D0_Speaker__PORT 0u
#define P0_4_D0_Speaker__PS CYREG_PRT0_PS
#define P0_4_D0_Speaker__SHIFT 4

/* SPIM_1_BSPIM */
#define SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_UDB_W16_ST_02
#define SPIM_1_BSPIM_BitCounter_ST__MASK_REG CYREG_UDB_W8_MSK_02
#define SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_02
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_02
#define SPIM_1_BSPIM_BitCounter_ST__STATUS_REG CYREG_UDB_W8_ST_02
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_02
#define SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_02
#define SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_02
#define SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_02
#define SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_02
#define SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_02
#define SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_02
#define SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_02
#define SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define SPIM_1_BSPIM_BitCounter__CONTROL_REG CYREG_UDB_W8_CTL_02
#define SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define SPIM_1_BSPIM_BitCounter__COUNT_REG CYREG_UDB_W8_CTL_02
#define SPIM_1_BSPIM_BitCounter__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define SPIM_1_BSPIM_BitCounter__PERIOD_REG CYREG_UDB_W8_MSK_02
#define SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_00
#define SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_UDB_W16_ST_00
#define SPIM_1_BSPIM_RxStsReg__32BIT_MASK_REG CYREG_UDB_W32_MSK_00
#define SPIM_1_BSPIM_RxStsReg__32BIT_STATUS_AUX_CTL_REG CYREG_UDB_W32_ACTL_00
#define SPIM_1_BSPIM_RxStsReg__32BIT_STATUS_REG CYREG_UDB_W32_ST_00
#define SPIM_1_BSPIM_RxStsReg__4__MASK 0x10u
#define SPIM_1_BSPIM_RxStsReg__4__POS 4
#define SPIM_1_BSPIM_RxStsReg__5__MASK 0x20u
#define SPIM_1_BSPIM_RxStsReg__5__POS 5
#define SPIM_1_BSPIM_RxStsReg__6__MASK 0x40u
#define SPIM_1_BSPIM_RxStsReg__6__POS 6
#define SPIM_1_BSPIM_RxStsReg__MASK 0x70u
#define SPIM_1_BSPIM_RxStsReg__MASK_REG CYREG_UDB_W8_MSK_00
#define SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_00
#define SPIM_1_BSPIM_RxStsReg__STATUS_REG CYREG_UDB_W8_ST_00
#define SPIM_1_BSPIM_TxStsReg__0__MASK 0x01u
#define SPIM_1_BSPIM_TxStsReg__0__POS 0
#define SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_UDB_W16_ACTL_01
#define SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_UDB_W16_ST_01
#define SPIM_1_BSPIM_TxStsReg__1__MASK 0x02u
#define SPIM_1_BSPIM_TxStsReg__1__POS 1
#define SPIM_1_BSPIM_TxStsReg__2__MASK 0x04u
#define SPIM_1_BSPIM_TxStsReg__2__POS 2
#define SPIM_1_BSPIM_TxStsReg__3__MASK 0x08u
#define SPIM_1_BSPIM_TxStsReg__3__POS 3
#define SPIM_1_BSPIM_TxStsReg__4__MASK 0x10u
#define SPIM_1_BSPIM_TxStsReg__4__POS 4
#define SPIM_1_BSPIM_TxStsReg__MASK 0x1Fu
#define SPIM_1_BSPIM_TxStsReg__MASK_REG CYREG_UDB_W8_MSK_01
#define SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_01
#define SPIM_1_BSPIM_TxStsReg__STATUS_REG CYREG_UDB_W8_ST_01
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG CYREG_UDB_CAT16_A_02
#define SPIM_1_BSPIM_sR8_Dp_u0__A0_REG CYREG_UDB_W8_A0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__A1_REG CYREG_UDB_W8_A1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG CYREG_UDB_CAT16_D_02
#define SPIM_1_BSPIM_sR8_Dp_u0__D0_REG CYREG_UDB_W8_D0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__D1_REG CYREG_UDB_W8_D1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG CYREG_UDB_CAT16_F_02
#define SPIM_1_BSPIM_sR8_Dp_u0__F0_REG CYREG_UDB_W8_F0_02
#define SPIM_1_BSPIM_sR8_Dp_u0__F1_REG CYREG_UDB_W8_F1_02
#define SPIM_1_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define SPIM_1_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02

/* Clock_1 */
#define Clock_1__DIVIDER_MASK 0x0000FFFFu
#define Clock_1__ENABLE CYREG_CLK_DIVIDER_A00
#define Clock_1__ENABLE_MASK 0x80000000u
#define Clock_1__MASK 0x80000000u
#define Clock_1__REGISTER CYREG_CLK_DIVIDER_A00

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_CM0_ICER
#define isr_1__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define isr_1__INTC_MASK 0x02u
#define isr_1__INTC_NUMBER 1u
#define isr_1__INTC_PRIOR_MASK 0xC000u
#define isr_1__INTC_PRIOR_NUM 3u
#define isr_1__INTC_PRIOR_REG CYREG_CM0_IPR0
#define isr_1__INTC_SET_EN_REG CYREG_CM0_ISER
#define isr_1__INTC_SET_PD_REG CYREG_CM0_ISPR

/* Miscellaneous */
/* -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release */
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_MEMBER_4A 2u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_DIE_PSOC4A 2u
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_DIE_PSOC4A
#define CYDEV_BCLK__HFCLK__HZ 48000000U
#define CYDEV_BCLK__HFCLK__KHZ 48000U
#define CYDEV_BCLK__HFCLK__MHZ 48U
#define CYDEV_BCLK__SYSCLK__HZ 48000000U
#define CYDEV_BCLK__SYSCLK__KHZ 48000U
#define CYDEV_BCLK__SYSCLK__MHZ 48U
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 3u
#define CYDEV_CHIP_DIE_PSOC5LP 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 4u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REV_PSOC4A_PRODUCTION
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_HEAP_SIZE 0x0100
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */