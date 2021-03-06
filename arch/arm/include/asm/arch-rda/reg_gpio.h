//==============================================================================
//
//            Copyright (C) 2012-2013, RDA Microelectronics.
//                            All Rights Reserved
//
//      This source code is the property of RDA Microelectronics and is
//      confidential.  Any  modification, distribution,  reproduction or
//      exploitation  of  any content of this file is totally forbidden,
//      except  with the  written permission  of   RDA Microelectronics.
//
//==============================================================================
//
//    THIS FILE WAS GENERATED FROM ITS CORRESPONDING XML VERSION WITH COOLXML.
//
//                       !!! PLEASE DO NOT EDIT !!!
//
//  $HeadURL$
//  $Author$
//  $Date$
//  $Revision$
//
//==============================================================================
//
/// @file
//
//==============================================================================

#ifndef _REG_GPIO_H_
#define _REG_GPIO_H_

#include <asm/arch/hardware.h>
#include <asm/arch/rda_iomap.h>

// =============================================================================
//  MACROS
// =============================================================================
#define IDX_GPIO_DCON                           (0)
#define IDX_GPO_CHG                             (0)

// =============================================================================
//  TYPES
// =============================================================================

// ============================================================================
// GPIO_T
// -----------------------------------------------------------------------------
///
// =============================================================================
typedef volatile struct
{
    REG32                          gpio_oen_val;                 //0x00000000
    REG32                          gpio_oen_set_out;             //0x00000004
    REG32                          gpio_oen_set_in;              //0x00000008
    REG32                          gpio_val;                     //0x0000000C
    REG32                          gpio_set;                     //0x00000010
    REG32                          gpio_clr;                     //0x00000014
    REG32                          gpint_ctrl_set;               //0x00000018
    REG32                          gpint_ctrl_clr;               //0x0000001C
    REG32                          int_clr;                      //0x00000020
    REG32                          int_status;                   //0x00000024
    REG32                          chg_ctrl;                     //0x00000028
    REG32                          chg_cmd;                      //0x0000002C
    REG32                          gpo_set;                      //0x00000030
    REG32                          gpo_clr;                      //0x00000034
} HWP_GPIO_T;

#define hwp_apGpioA                ((HWP_GPIO_T*) (RDA_GPIO_A_BASE))
#define hwp_apGpioB                ((HWP_GPIO_T*) (RDA_GPIO_B_BASE))
#define hwp_apGpioD                ((HWP_GPIO_T*) (RDA_GPIO_D_BASE))
#if defined(CONFIG_MACH_RDA8810E) || defined(CONFIG_MACH_RDA8810H)
#define hwp_apGpioE                ((HWP_GPIO_T*) (RDA_GPIO_E_BASE))
#endif
#define hwp_gpio                   ((HWP_GPIO_T*) (RDA_GPIO_BASE))


//gpio_oen_val
#define GPIO_OEN_VAL(n)            (((n)&0xFFFFFFFF)<<0)
#define GPIO_OEN_VAL_INPUT         (0x1<<0)
#define GPIO_OEN_VAL_OUTPUT        (0x0<<0)

//gpio_oen_set_out
#define GPIO_OEN_SET_OUT(n)        (((n)&0xFFFFFFFF)<<0)

//gpio_oen_set_in
#define GPIO_OEN_SET_IN(n)         (((n)&0xFFFFFFFF)<<0)

//gpio_val
#define GPIO_GPIO_VAL(n)           (((n)&0xFFFFFFFF)<<0)

//gpio_set
#define GPIO_GPIO_SET(n)           (((n)&0xFFFFFFFF)<<0)

//gpio_clr
#define GPIO_GPIO_CLR(n)           (((n)&0xFFFFFFFF)<<0)

//gpint_ctrl_set
#define GPIO_GPINT_R_SET(n)        (((n)&0xFF)<<0)
#define GPIO_GPINT_F_SET(n)        (((n)&0xFF)<<8)
#define GPIO_DBN_EN_SET(n)         (((n)&0xFF)<<16)
#define GPIO_GPINT_MODE_SET(n)     (((n)&0xFF)<<24)

//gpint_ctrl_clr
#define GPIO_GPINT_R_CLR(n)        (((n)&0xFF)<<0)
#define GPIO_GPINT_F_CLR(n)        (((n)&0xFF)<<8)
#define GPIO_DBN_EN_CLR(n)         (((n)&0xFF)<<16)
#define GPIO_GPINT_MODE_CLR(n)     (((n)&0xFF)<<24)

//int_clr
#define GPIO_GPINT_CLR(n)          (((n)&0xFF)<<0)

//int_status
#define GPIO_GPINT_STATUS(n)       (((n)&0xFF)<<0)
#define GPIO_GPINT_STATUS_MASK     (0xFF<<0)
#define GPIO_GPINT_STATUS_SHIFT    (0)

//chg_ctrl
#define GPIO_OUT_TIME(n)           (((n)&15)<<0)
#define GPIO_WAIT_TIME(n)          (((n)&0x3F)<<4)
#define GPIO_INT_MODE_L2H          (0<<16)
#define GPIO_INT_MODE_H2L          (1<<16)
#define GPIO_INT_MODE_RR           (3<<16)

//chg_cmd
#define GPIO_DCON_MODE_SET         (1<<0)
#define GPIO_CHG_MODE_SET          (1<<4)
#define GPIO_DCON_MODE_CLR         (1<<8)
#define GPIO_CHG_MODE_CLR          (1<<12)
#define GPIO_CHG_DOWN              (1<<24)

//gpo_set
#define GPIO_GPO_SET(n)            (((n)&31)<<0)

//gpo_clr
#define GPIO_GPO_CLR(n)            (((n)&31)<<0)





#endif

