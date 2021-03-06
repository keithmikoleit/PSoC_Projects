    IF :LNOT::DEF:INCLUDED_CYFITTERRV_INC
INCLUDED_CYFITTERRV_INC EQU 1
    GET cydevicerv_trm.inc

; SPIM_1_TxInternalInterrupt
SPIM_1_TxInternalInterrupt__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
SPIM_1_TxInternalInterrupt__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
SPIM_1_TxInternalInterrupt__INTC_MASK EQU 0x01
SPIM_1_TxInternalInterrupt__INTC_NUMBER EQU 0
SPIM_1_TxInternalInterrupt__INTC_PRIOR_MASK EQU 0xC0
SPIM_1_TxInternalInterrupt__INTC_PRIOR_NUM EQU 3
SPIM_1_TxInternalInterrupt__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
SPIM_1_TxInternalInterrupt__INTC_SET_EN_REG EQU CYREG_CM0_ISER
SPIM_1_TxInternalInterrupt__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; P0_4_D0_Speaker
P0_4_D0_Speaker__0__DM__MASK EQU 0x7000
P0_4_D0_Speaker__0__DM__SHIFT EQU 12
P0_4_D0_Speaker__0__DR EQU CYREG_PRT0_DR
P0_4_D0_Speaker__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
P0_4_D0_Speaker__0__HSIOM_MASK EQU 0x000F0000
P0_4_D0_Speaker__0__HSIOM_SHIFT EQU 16
P0_4_D0_Speaker__0__INTCFG EQU CYREG_PRT0_INTCFG
P0_4_D0_Speaker__0__INTSTAT EQU CYREG_PRT0_INTSTAT
P0_4_D0_Speaker__0__MASK EQU 0x10
P0_4_D0_Speaker__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
P0_4_D0_Speaker__0__OUT_SEL_SHIFT EQU 8
P0_4_D0_Speaker__0__OUT_SEL_VAL EQU 1
P0_4_D0_Speaker__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
P0_4_D0_Speaker__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
P0_4_D0_Speaker__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
P0_4_D0_Speaker__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
P0_4_D0_Speaker__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
P0_4_D0_Speaker__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
P0_4_D0_Speaker__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
P0_4_D0_Speaker__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
P0_4_D0_Speaker__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
P0_4_D0_Speaker__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
P0_4_D0_Speaker__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
P0_4_D0_Speaker__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
P0_4_D0_Speaker__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
P0_4_D0_Speaker__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
P0_4_D0_Speaker__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
P0_4_D0_Speaker__0__PC EQU CYREG_PRT0_PC
P0_4_D0_Speaker__0__PC2 EQU CYREG_PRT0_PC2
P0_4_D0_Speaker__0__PORT EQU 0
P0_4_D0_Speaker__0__PS EQU CYREG_PRT0_PS
P0_4_D0_Speaker__0__SHIFT EQU 4
P0_4_D0_Speaker__DR EQU CYREG_PRT0_DR
P0_4_D0_Speaker__INTCFG EQU CYREG_PRT0_INTCFG
P0_4_D0_Speaker__INTSTAT EQU CYREG_PRT0_INTSTAT
P0_4_D0_Speaker__MASK EQU 0x10
P0_4_D0_Speaker__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
P0_4_D0_Speaker__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
P0_4_D0_Speaker__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
P0_4_D0_Speaker__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
P0_4_D0_Speaker__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
P0_4_D0_Speaker__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
P0_4_D0_Speaker__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
P0_4_D0_Speaker__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
P0_4_D0_Speaker__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
P0_4_D0_Speaker__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
P0_4_D0_Speaker__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
P0_4_D0_Speaker__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
P0_4_D0_Speaker__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
P0_4_D0_Speaker__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
P0_4_D0_Speaker__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
P0_4_D0_Speaker__PC EQU CYREG_PRT0_PC
P0_4_D0_Speaker__PC2 EQU CYREG_PRT0_PC2
P0_4_D0_Speaker__PORT EQU 0
P0_4_D0_Speaker__PS EQU CYREG_PRT0_PS
P0_4_D0_Speaker__SHIFT EQU 4

; SPIM_1_BSPIM
SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_02
SPIM_1_BSPIM_BitCounter_ST__MASK_REG EQU CYREG_UDB_W8_MSK_02
SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG EQU CYREG_UDB_CAT16_CTL_ST_02
SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG EQU CYREG_UDB_CAT16_CTL_ST_02
SPIM_1_BSPIM_BitCounter_ST__STATUS_REG EQU CYREG_UDB_W8_ST_02
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_UDB_W16_CTL_02
SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_UDB_W16_CTL_02
SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_UDB_W16_CTL_02
SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG EQU CYREG_UDB_W16_MSK_02
SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_UDB_W16_MSK_02
SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_UDB_W16_MSK_02
SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
SPIM_1_BSPIM_BitCounter__CONTROL_REG EQU CYREG_UDB_W8_CTL_02
SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
SPIM_1_BSPIM_BitCounter__COUNT_REG EQU CYREG_UDB_W8_CTL_02
SPIM_1_BSPIM_BitCounter__COUNT_ST_REG EQU CYREG_UDB_CAT16_CTL_ST_02
SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
SPIM_1_BSPIM_BitCounter__PERIOD_REG EQU CYREG_UDB_W8_MSK_02
SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_00
SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_00
SPIM_1_BSPIM_RxStsReg__32BIT_MASK_REG EQU CYREG_UDB_W32_MSK_00
SPIM_1_BSPIM_RxStsReg__32BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W32_ACTL_00
SPIM_1_BSPIM_RxStsReg__32BIT_STATUS_REG EQU CYREG_UDB_W32_ST_00
SPIM_1_BSPIM_RxStsReg__4__MASK EQU 0x10
SPIM_1_BSPIM_RxStsReg__4__POS EQU 4
SPIM_1_BSPIM_RxStsReg__5__MASK EQU 0x20
SPIM_1_BSPIM_RxStsReg__5__POS EQU 5
SPIM_1_BSPIM_RxStsReg__6__MASK EQU 0x40
SPIM_1_BSPIM_RxStsReg__6__POS EQU 6
SPIM_1_BSPIM_RxStsReg__MASK EQU 0x70
SPIM_1_BSPIM_RxStsReg__MASK_REG EQU CYREG_UDB_W8_MSK_00
SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_00
SPIM_1_BSPIM_RxStsReg__STATUS_REG EQU CYREG_UDB_W8_ST_00
SPIM_1_BSPIM_TxStsReg__0__MASK EQU 0x01
SPIM_1_BSPIM_TxStsReg__0__POS EQU 0
SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_01
SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG EQU CYREG_UDB_W16_ST_01
SPIM_1_BSPIM_TxStsReg__1__MASK EQU 0x02
SPIM_1_BSPIM_TxStsReg__1__POS EQU 1
SPIM_1_BSPIM_TxStsReg__2__MASK EQU 0x04
SPIM_1_BSPIM_TxStsReg__2__POS EQU 2
SPIM_1_BSPIM_TxStsReg__3__MASK EQU 0x08
SPIM_1_BSPIM_TxStsReg__3__POS EQU 3
SPIM_1_BSPIM_TxStsReg__4__MASK EQU 0x10
SPIM_1_BSPIM_TxStsReg__4__POS EQU 4
SPIM_1_BSPIM_TxStsReg__MASK EQU 0x1F
SPIM_1_BSPIM_TxStsReg__MASK_REG EQU CYREG_UDB_W8_MSK_01
SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_01
SPIM_1_BSPIM_TxStsReg__STATUS_REG EQU CYREG_UDB_W8_ST_01
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A0_REG EQU CYREG_UDB_W16_A0_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_A1_REG EQU CYREG_UDB_W16_A1_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D0_REG EQU CYREG_UDB_W16_D0_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_D1_REG EQU CYREG_UDB_W16_D1_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_UDB_W16_ACTL_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F0_REG EQU CYREG_UDB_W16_F0_02
SPIM_1_BSPIM_sR8_Dp_u0__16BIT_F1_REG EQU CYREG_UDB_W16_F1_02
SPIM_1_BSPIM_sR8_Dp_u0__A0_A1_REG EQU CYREG_UDB_CAT16_A_02
SPIM_1_BSPIM_sR8_Dp_u0__A0_REG EQU CYREG_UDB_W8_A0_02
SPIM_1_BSPIM_sR8_Dp_u0__A1_REG EQU CYREG_UDB_W8_A1_02
SPIM_1_BSPIM_sR8_Dp_u0__D0_D1_REG EQU CYREG_UDB_CAT16_D_02
SPIM_1_BSPIM_sR8_Dp_u0__D0_REG EQU CYREG_UDB_W8_D0_02
SPIM_1_BSPIM_sR8_Dp_u0__D1_REG EQU CYREG_UDB_W8_D1_02
SPIM_1_BSPIM_sR8_Dp_u0__DP_AUX_CTL_REG EQU CYREG_UDB_W8_ACTL_02
SPIM_1_BSPIM_sR8_Dp_u0__F0_F1_REG EQU CYREG_UDB_CAT16_F_02
SPIM_1_BSPIM_sR8_Dp_u0__F0_REG EQU CYREG_UDB_W8_F0_02
SPIM_1_BSPIM_sR8_Dp_u0__F1_REG EQU CYREG_UDB_W8_F1_02
SPIM_1_BSPIM_sR8_Dp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02
SPIM_1_BSPIM_sR8_Dp_u0__PER_DP_AUX_CTL_REG EQU CYREG_UDB_CAT16_ACTL_MSK_02

; Clock_1
Clock_1__DIVIDER_MASK EQU 0x0000FFFF
Clock_1__ENABLE EQU CYREG_CLK_DIVIDER_A00
Clock_1__ENABLE_MASK EQU 0x80000000
Clock_1__MASK EQU 0x80000000
Clock_1__REGISTER EQU CYREG_CLK_DIVIDER_A00

; isr_1
isr_1__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
isr_1__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
isr_1__INTC_MASK EQU 0x02
isr_1__INTC_NUMBER EQU 1
isr_1__INTC_PRIOR_MASK EQU 0xC000
isr_1__INTC_PRIOR_NUM EQU 3
isr_1__INTC_PRIOR_REG EQU CYREG_CM0_IPR0
isr_1__INTC_SET_EN_REG EQU CYREG_CM0_ISER
isr_1__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

; Miscellaneous
; -- WARNING: define names containing LEOPARD or PANTHER are deprecated and will be removed in a future release
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_MEMBER_4A EQU 2
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_DIE_PSOC4A EQU 2
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_DIE_PSOC4A
CYDEV_BCLK__HFCLK__HZ EQU 48000000
CYDEV_BCLK__HFCLK__KHZ EQU 48000
CYDEV_BCLK__HFCLK__MHZ EQU 48
CYDEV_BCLK__SYSCLK__HZ EQU 48000000
CYDEV_BCLK__SYSCLK__KHZ EQU 48000
CYDEV_BCLK__SYSCLK__MHZ EQU 48
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 3
CYDEV_CHIP_DIE_PSOC5LP EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04C81193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 4
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REV_PSOC4A_PRODUCTION
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_HEAP_SIZE EQU 0x0100
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_BOOTLOADER_ENABLE EQU 0
    ENDIF
    END
