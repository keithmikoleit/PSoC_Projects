/*******************************************************************************
* File Name: P2_2_VBatDiv.c  
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
#include "P2_2_VBatDiv.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        P2_2_VBatDiv_PC =   (P2_2_VBatDiv_PC & \
                                (uint32)(~(uint32)(P2_2_VBatDiv_DRIVE_MODE_IND_MASK << (P2_2_VBatDiv_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (P2_2_VBatDiv_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: P2_2_VBatDiv_Write
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
void P2_2_VBatDiv_Write(uint8 value) 
{
    uint8 drVal = (uint8)(P2_2_VBatDiv_DR & (uint8)(~P2_2_VBatDiv_MASK));
    drVal = (drVal | ((uint8)(value << P2_2_VBatDiv_SHIFT) & P2_2_VBatDiv_MASK));
    P2_2_VBatDiv_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: P2_2_VBatDiv_SetDriveMode
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
void P2_2_VBatDiv_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(P2_2_VBatDiv__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: P2_2_VBatDiv_Read
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
*  Macro P2_2_VBatDiv_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 P2_2_VBatDiv_Read(void) 
{
    return (uint8)((P2_2_VBatDiv_PS & P2_2_VBatDiv_MASK) >> P2_2_VBatDiv_SHIFT);
}


/*******************************************************************************
* Function Name: P2_2_VBatDiv_ReadDataReg
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
uint8 P2_2_VBatDiv_ReadDataReg(void) 
{
    return (uint8)((P2_2_VBatDiv_DR & P2_2_VBatDiv_MASK) >> P2_2_VBatDiv_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(P2_2_VBatDiv_INTSTAT) 

    /*******************************************************************************
    * Function Name: P2_2_VBatDiv_ClearInterrupt
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
    uint8 P2_2_VBatDiv_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(P2_2_VBatDiv_INTSTAT & P2_2_VBatDiv_MASK);
		P2_2_VBatDiv_INTSTAT = maskedStatus;
        return maskedStatus >> P2_2_VBatDiv_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
