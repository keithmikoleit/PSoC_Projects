/*******************************************************************************
* File Name: PlayMode_ISR.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/


#include <cydevice_trm.h>
#include <CyLib.h>
#include <PlayMode_ISR.h>

#if !defined(PlayMode_ISR__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START PlayMode_ISR_intc` */

/* `#END` */

extern cyisraddress CyRamVectors[CYINT_IRQ_BASE + CY_NUM_INTERRUPTS];

/* Declared in startup, used to set unused interrupts to. */
CY_ISR_PROTO(IntDefaultHandler);


/*******************************************************************************
* Function Name: PlayMode_ISR_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_Start(void)
{
    /* For all we know the interrupt is active. */
    PlayMode_ISR_Disable();

    /* Set the ISR to point to the PlayMode_ISR Interrupt. */
    PlayMode_ISR_SetVector(&PlayMode_ISR_Interrupt);

    /* Set the priority. */
    PlayMode_ISR_SetPriority((uint8)PlayMode_ISR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    PlayMode_ISR_Enable();
}


/*******************************************************************************
* Function Name: PlayMode_ISR_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    PlayMode_ISR_Disable();

    /* Set the ISR to point to the PlayMode_ISR Interrupt. */
    PlayMode_ISR_SetVector(address);

    /* Set the priority. */
    PlayMode_ISR_SetPriority((uint8)PlayMode_ISR_INTC_PRIOR_NUMBER);

    /* Enable it. */
    PlayMode_ISR_Enable();
}


/*******************************************************************************
* Function Name: PlayMode_ISR_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_Stop(void)
{
    /* Disable this interrupt. */
    PlayMode_ISR_Disable();

    /* Set the ISR to point to the passive one. */
    PlayMode_ISR_SetVector(&IntDefaultHandler);
}


/*******************************************************************************
* Function Name: PlayMode_ISR_Interrupt
********************************************************************************
*
* Summary:
*   The default Interrupt Service Routine for PlayMode_ISR.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(PlayMode_ISR_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START PlayMode_ISR_Interrupt` */

    /* `#END` */
}


/*******************************************************************************
* Function Name: PlayMode_ISR_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling PlayMode_ISR_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use PlayMode_ISR_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_SetVector(cyisraddress address)
{
    CyRamVectors[CYINT_IRQ_BASE + PlayMode_ISR__INTC_NUMBER] = address;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress PlayMode_ISR_GetVector(void)
{
    return CyRamVectors[CYINT_IRQ_BASE + PlayMode_ISR__INTC_NUMBER];
}


/*******************************************************************************
* Function Name: PlayMode_ISR_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling PlayMode_ISR_Start
*   or PlayMode_ISR_StartEx will override any effect this method would 
*   have had. This method should only be called after PlayMode_ISR_Start or 
*   PlayMode_ISR_StartEx has been called. To set the initial
*   priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 3, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_SetPriority(uint8 priority)
{
	uint8 interruptState;
    uint32 priorityOffset = ((PlayMode_ISR__INTC_NUMBER % 4u) * 8u) + 6u;
    
	interruptState = CyEnterCriticalSection();
    *PlayMode_ISR_INTC_PRIOR = (*PlayMode_ISR_INTC_PRIOR & (uint32)(~PlayMode_ISR__INTC_PRIOR_MASK)) |
                                    ((uint32)priority << priorityOffset);
	CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: PlayMode_ISR_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 3, 0 being the highest.
*
*******************************************************************************/
uint8 PlayMode_ISR_GetPriority(void)
{
    uint32 priority;
	uint32 priorityOffset = ((PlayMode_ISR__INTC_NUMBER % 4u) * 8u) + 6u;

    priority = (*PlayMode_ISR_INTC_PRIOR & PlayMode_ISR__INTC_PRIOR_MASK) >> priorityOffset;

    return (uint8)priority;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_Enable(void)
{
    /* Enable the general interrupt. */
    *PlayMode_ISR_INTC_SET_EN = PlayMode_ISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 PlayMode_ISR_GetState(void)
{
    /* Get the state of the general interrupt. */
    return ((*PlayMode_ISR_INTC_SET_EN & (uint32)PlayMode_ISR__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_Disable(void)
{
    /* Disable the general interrupt. */
    *PlayMode_ISR_INTC_CLR_EN = PlayMode_ISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_SetPending(void)
{
    *PlayMode_ISR_INTC_SET_PD = PlayMode_ISR__INTC_MASK;
}


/*******************************************************************************
* Function Name: PlayMode_ISR_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void PlayMode_ISR_ClearPending(void)
{
    *PlayMode_ISR_INTC_CLR_PD = PlayMode_ISR__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
