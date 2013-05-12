/*******************************************************************************
* File Name: Data_CMD_Sel.h  
* Version 1.70
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

#if !defined(CY_CONTROL_REG_Data_CMD_Sel_H) /* CY_CONTROL_REG_Data_CMD_Sel_H */
#define CY_CONTROL_REG_Data_CMD_Sel_H

#include "cytypes.h"


/***************************************
*         Function Prototypes 
***************************************/

void    Data_CMD_Sel_Write(uint8 control) ;
uint8   Data_CMD_Sel_Read(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define Data_CMD_Sel_Control        (* (reg8 *) Data_CMD_Sel_Sync_ctrl_reg__CONTROL_REG )
#define Data_CMD_Sel_Control_PTR    (  (reg8 *) Data_CMD_Sel_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_Data_CMD_Sel_H */


/* [] END OF FILE */
