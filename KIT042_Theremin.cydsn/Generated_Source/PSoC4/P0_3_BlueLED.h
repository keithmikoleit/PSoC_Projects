/*******************************************************************************
* File Name: P0_3_BlueLED.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_P0_3_BlueLED_H) /* Pins P0_3_BlueLED_H */
#define CY_PINS_P0_3_BlueLED_H

#include "cytypes.h"
#include "cyfitter.h"
#include "P0_3_BlueLED_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    P0_3_BlueLED_Write(uint8 value) ;
void    P0_3_BlueLED_SetDriveMode(uint8 mode) ;
uint8   P0_3_BlueLED_ReadDataReg(void) ;
uint8   P0_3_BlueLED_Read(void) ;
uint8   P0_3_BlueLED_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define P0_3_BlueLED_DRIVE_MODE_BITS        (3)
#define P0_3_BlueLED_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - P0_3_BlueLED_DRIVE_MODE_BITS))
#define P0_3_BlueLED_DRIVE_MODE_SHIFT       (0x00u)
#define P0_3_BlueLED_DRIVE_MODE_MASK        (0x07u << P0_3_BlueLED_DRIVE_MODE_SHIFT)

#define P0_3_BlueLED_DM_ALG_HIZ         (0x00u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_DIG_HIZ         (0x01u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_RES_UP          (0x02u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_RES_DWN         (0x03u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_OD_LO           (0x04u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_OD_HI           (0x05u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_STRONG          (0x06u << P0_3_BlueLED_DRIVE_MODE_SHIFT)
#define P0_3_BlueLED_DM_RES_UPDWN       (0x07u << P0_3_BlueLED_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define P0_3_BlueLED_MASK               P0_3_BlueLED__MASK
#define P0_3_BlueLED_SHIFT              P0_3_BlueLED__SHIFT
#define P0_3_BlueLED_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define P0_3_BlueLED_PS                     (* (reg32 *) P0_3_BlueLED__PS)
/* Port Configuration */
#define P0_3_BlueLED_PC                     (* (reg32 *) P0_3_BlueLED__PC)
/* Data Register */
#define P0_3_BlueLED_DR                     (* (reg32 *) P0_3_BlueLED__DR)
/* Input Buffer Disable Override */
#define P0_3_BlueLED_INP_DIS                (* (reg32 *) P0_3_BlueLED__PC2)


#if defined(P0_3_BlueLED__INTSTAT)  /* Interrupt Registers */

    #define P0_3_BlueLED_INTSTAT                (* (reg32 *) P0_3_BlueLED__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins P0_3_BlueLED_H */


/* [] END OF FILE */
