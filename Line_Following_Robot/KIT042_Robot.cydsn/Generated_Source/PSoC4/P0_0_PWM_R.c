/*******************************************************************************
* File Name: P0_0_PWM_R.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "P0_0_PWM_R.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        P0_0_PWM_R_PC =   (P0_0_PWM_R_PC & \
                                (uint32)(~(uint32)(P0_0_PWM_R_DRIVE_MODE_IND_MASK << (P0_0_PWM_R_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (P0_0_PWM_R_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: P0_0_PWM_R_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void P0_0_PWM_R_Write(uint8 value) 
{
    uint8 drVal = (uint8)(P0_0_PWM_R_DR & (uint8)(~P0_0_PWM_R_MASK));
    drVal = (drVal | ((uint8)(value << P0_0_PWM_R_SHIFT) & P0_0_PWM_R_MASK));
    P0_0_PWM_R_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: P0_0_PWM_R_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void P0_0_PWM_R_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(P0_0_PWM_R__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: P0_0_PWM_R_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro P0_0_PWM_R_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 P0_0_PWM_R_Read(void) 
{
    return (uint8)((P0_0_PWM_R_PS & P0_0_PWM_R_MASK) >> P0_0_PWM_R_SHIFT);
}


/*******************************************************************************
* Function Name: P0_0_PWM_R_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 P0_0_PWM_R_ReadDataReg(void) 
{
    return (uint8)((P0_0_PWM_R_DR & P0_0_PWM_R_MASK) >> P0_0_PWM_R_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(P0_0_PWM_R_INTSTAT) 

    /*******************************************************************************
    * Function Name: P0_0_PWM_R_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 P0_0_PWM_R_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(P0_0_PWM_R_INTSTAT & P0_0_PWM_R_MASK);
		P0_0_PWM_R_INTSTAT = maskedStatus;
        return maskedStatus >> P0_0_PWM_R_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
