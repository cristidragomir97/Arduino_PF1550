/*
  Copyright (c) 2019 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef PF1550_DEFINES_H_
#define PF1550_DEFINES_H_

/******************************************************************************
   NAMESPACE
 ******************************************************************************/

namespace PF1550
{

/******************************************************************************
   DEFINE
 ******************************************************************************/

/* LDO1_CTRL ******************************************************************/
#define REG_LDO1_CTRL_VLDO1_EN_bp               (0)
#define REG_LDO1_CTRL_VLDO1_STBY_EN_bp          (1)
#define REG_LDO1_CTRL_VLDO1_OMODE_bp            (2)

/* LDO2_CTRL ******************************************************************/
#define REG_LDO2_CTRL_VLDO2_EN_bp               (0)
#define REG_LDO2_CTRL_VLDO2_STBY_EN_bp          (1)
#define REG_LDO2_CTRL_VLDO2_OMODE_bp            (2)

/* LDO3_CTRL ******************************************************************/
#define REG_LDO3_CTRL_VLDO3_EN_bp               (0)
#define REG_LDO3_CTRL_VLDO3_STBY_EN_bp          (1)
#define REG_LDO3_CTRL_VLDO3_OMODE_bp            (2)

/* CHG_EOC_CNFG ***************************************************************/
#define REG_CHG_EOC_CNFG_IEOC_mask              (0x70)

/* CHG_CURR_CFG ***************************************************************/
#define REG_CHG_CURR_CFG_CHG_CC_mask            (0x1F)

/* BATT_REG *******************************************************************/
#define REG_BATT_REG_CHCCV_mask                 (0x3F)

/* VBUS_INLIM_CNFG ************************************************************/
#define REG_VBUS_INLIM_CNFG_VBUS_LIN_INLIM_mask (0xF8)

/******************************************************************************
   NAMESPACE
 ******************************************************************************/

} /* PF1550 */

#endif /* PF1550_DEFINES_H_ */