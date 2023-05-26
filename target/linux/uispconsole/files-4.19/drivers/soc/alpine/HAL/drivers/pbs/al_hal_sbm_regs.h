/*
 * Copyright 2018, Amazon.com, Inc. or its affiliates. All Rights Reserved
 */

/**
 *  @{
 * @file   al_hal_sbm_regs.h
 *
 * @brief sbm registers
 *
 * This file was auto-generated by RegGen v1.2.1
 *
 */

#ifndef __AL_HAL_SBM_REGS_H__
#define __AL_HAL_SBM_REGS_H__

#include "al_hal_plat_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Unit Registers
 */

struct al_sbm_gen {
	/* [0x0] SERDES registers Version */
	uint32_t version;
	/* [0x4] */
	uint32_t rsrvd_0[63];
};

struct al_sbm_sbus {
	/* [0x0] */
	uint32_t rsrvd_0[4];
	/* [0x10] */
	uint32_t cfg;
	/* [0x14] */
	uint32_t ctl;
	/* [0x18] */
	uint32_t reg_0xfe_0x81;
	/* [0x1c] */
	uint32_t reg_0xfe_0x80;
	/* [0x20] */
	uint32_t core_cmd;
	/* [0x24] */
	uint32_t core_add;
	/* [0x28] */
	uint32_t core_data;
	/* [0x2c] */
	uint32_t core_rcv;
	/* [0x30] */
	uint32_t rcv;
	/* [0x34] */
	uint32_t spare_int_cmd;
	/* [0x38] */
	uint32_t spare_add;
	/* [0x3c] */
	uint32_t spare_data;
	/* [0x40] */
	uint32_t spare_rcv_res;
	/* [0x44] */
	uint32_t spare_rcv;
	/* [0x48] */
	uint32_t core_mem;
	/* [0x4c] */
	uint32_t bist_done;
	/* [0x50] */
	uint32_t reserved;
	/* [0x54] */
	uint32_t sticky;
	/* [0x58] */
	uint32_t rcv_sticky;
	/* [0x5c] */
	uint32_t rcv_data_sticky;
	/* [0x60] */
	uint32_t rsrvd_1[40];
};

struct al_sbm_rom {
	/* [0x0] */
	uint32_t rsrvd_0[4];
	/* [0x10] */
	uint32_t ctrl;
	/* [0x14] */
	uint32_t rsrvd_1[3];
};

struct al_sbm_twi {
	/* [0x0] */
	uint32_t rsrvd_0[4];
	/* [0x10] */
	uint32_t data;
	/* [0x14] */
	uint32_t wr;
	/* [0x18] */
	uint32_t low_address;
	/* [0x1c] */
	uint32_t rsrvd_1;
};

struct al_sbm_spico {
	/* [0x0] */
	uint32_t rsrvd_0[4];
	/* [0x10] */
	uint32_t cntl;
	/* [0x14] */
	uint32_t general_purpose;
	/* [0x18] ECC errors */
	uint32_t alert;
	/* [0x1c] Timing margins */
	uint32_t mem;
	/* [0x20] Timing margins */
	uint32_t temp;
	/* [0x24] Timing margins */
	uint32_t sleep;
	/* [0x28] Timing margins */
	uint32_t threshold;
	/* [0x2c] */
	uint32_t general;
	/* [0x30] */
	uint32_t rsrvd_1[4];
};

struct al_sbm_sbm_mutex {
	/* [0x0] SERDES MUX */
	uint32_t mutex_lane;
};

struct al_sbm_regs {
	/* [0x0] 4 groups of interrupts */
	uint32_t int_ctrl_mem[64];
	/* [0x100] General configuration and status */
	struct al_sbm_gen gen;
	/* [0x200] General configuration and status */
	struct al_sbm_sbus sbus;
	/* [0x300] General configuration and status */
	struct al_sbm_rom rom;
	/* [0x320] */
	uint32_t rsrvd_0[24];
	/* [0x380] General configuration and status */
	struct al_sbm_twi twi;
	/* [0x3a0] */
	uint32_t rsrvd_1[24];
	/* [0x400] General configuration and status */
	struct al_sbm_spico spico;
	/* [0x440] */
	uint32_t rsrvd_2[48];
	/* [0x500] tpr_specific */
	struct al_sbm_sbm_mutex sbm_mutex[64];
	/* [0x600] */
	uint32_t rsrvd_3[640];
};


/*
 * Registers Fields
 */

/**** version register ****/
/* Revision number (Minor) */
#define SBM_GEN_VERSION_RELEASE_NUM_MINOR_MASK 0x000000FF
#define SBM_GEN_VERSION_RELEASE_NUM_MINOR_SHIFT 0
/* Revision number (Major) */
#define SBM_GEN_VERSION_RELEASE_NUM_MAJOR_MASK 0x0000FF00
#define SBM_GEN_VERSION_RELEASE_NUM_MAJOR_SHIFT 8
/* date of release */
#define SBM_GEN_VERSION_DATE_DAY_MASK    0x001F0000
#define SBM_GEN_VERSION_DATE_DAY_SHIFT   16
/* month of release */
#define SBM_GEN_VERSION_DATA_MONTH_MASK  0x01E00000
#define SBM_GEN_VERSION_DATA_MONTH_SHIFT 21
/* year of release (starting from 2000) */
#define SBM_GEN_VERSION_DATE_YEAR_MASK   0x3E000000
#define SBM_GEN_VERSION_DATE_YEAR_SHIFT  25
/* Reserved */
#define SBM_GEN_VERSION_RESERVED_MASK    0xC0000000
#define SBM_GEN_VERSION_RESERVED_SHIFT   30

/**** cfg register ****/
/* 0 -  level mode,  1- Toggle mode */
#define SBM_SBUS_CFG_CORE_RCV_DATA_VALID_SEL (1 << 0)
/* 0 -  level mode,  1- Toggle mode */
#define SBM_SBUS_CFG_SPARE_RCV_DATA_VALID_SEL (1 << 1)

#define SBM_SBUS_CFG_SPARE_ENABLE        (1 << 4)
/* Wait for receive valid to enable pready on core data write to a sbus receiver */
#define SBM_SBUS_CFG_CORE_WAIT_FOR_VALID (1 << 8)
/*
 * 0 - don't sample core data and result                                              1- sample data
 * and result after sync                                             2-sample core data and result
 * with extra cycle
 */
#define SBM_SBUS_CFG_CORE_RCV_DLY_SEL_MASK 0x00000600
#define SBM_SBUS_CFG_CORE_RCV_DLY_SEL_SHIFT 9

#define SBM_SBUS_CFG_TEMP_SENS_BYPASS    (1 << 12)

#define SBM_SBUS_CFG_DEF_REFCLK_MASK     0x00030000
#define SBM_SBUS_CFG_DEF_REFCLK_SHIFT    16

/**** ctl register ****/

#define SBM_SBUS_CTL_SBM_RESET           (1 << 0)

#define SBM_SBUS_CTL_SBUS_IN_RESET       (1 << 1)

/**** core_cmd register ****/

#define SBM_SBUS_CORE_CMD_RCV_ADDR_MASK  0x000000FF
#define SBM_SBUS_CORE_CMD_RCV_ADDR_SHIFT 0

#define SBM_SBUS_CORE_CMD_COMMAND_MASK   0x0000FF00
#define SBM_SBUS_CORE_CMD_COMMAND_SHIFT  8

/**** core_add register ****/

#define SBM_SBUS_CORE_ADD_VAL_MASK       0x000000FF
#define SBM_SBUS_CORE_ADD_VAL_SHIFT      0

/**** core_rcv register ****/

#define SBM_SBUS_CORE_RCV_RES_CODE_MASK  0x00000007
#define SBM_SBUS_CORE_RCV_RES_CODE_SHIFT 0

#define SBM_SBUS_CORE_RCV_VALID          (1 << 3)

#define SBM_SBUS_CORE_RCV_DONE           (1 << 4)

/**** spare_int_cmd register ****/

#define SBM_SBUS_SPARE_INT_CMD_RCV_ADDR_MASK 0x000000FF
#define SBM_SBUS_SPARE_INT_CMD_RCV_ADDR_SHIFT 0

#define SBM_SBUS_SPARE_INT_CMD_COMMAND_MASK 0x0000FF00
#define SBM_SBUS_SPARE_INT_CMD_COMMAND_SHIFT 8

#define SBM_SBUS_SPARE_INT_CMD_EXECUTE   (1 << 16)

/**** spare_add register ****/
/* inc by 1 */
#define SBM_SBUS_SPARE_ADD_VAL_MASK      0x000000FF
#define SBM_SBUS_SPARE_ADD_VAL_SHIFT     0

/**** spare_rcv_res register ****/

#define SBM_SBUS_SPARE_RCV_RES_CODE_MASK 0x00000007
#define SBM_SBUS_SPARE_RCV_RES_CODE_SHIFT 0

#define SBM_SBUS_SPARE_RCV_RES_VALID     (1 << 3)

#define SBM_SBUS_SPARE_RCV_RES_DONE      (1 << 4)

/**** core_mem register ****/

#define SBM_SBUS_CORE_MEM_PTRN_FILL      (1 << 0)

#define SBM_SBUS_CORE_MEM_RST            (1 << 1)

#define SBM_SBUS_CORE_MEM_BIST_RUN       (1 << 2)

/**** bist_done register ****/

#define SBM_SBUS_BIST_DONE_PASS          (1 << 0)

#define SBM_SBUS_BIST_DONE_FAIL          (1 << 1)

/**** reserved register ****/

#define SBM_SBUS_RESERVED_NEGATIVE_MASK  0x0000FFFF
#define SBM_SBUS_RESERVED_NEGATIVE_SHIFT 0

#define SBM_SBUS_RESERVED_POSITIVE_MASK  0xFFFF0000
#define SBM_SBUS_RESERVED_POSITIVE_SHIFT 16

/**** sticky register ****/

#define SBM_SBUS_STICKY_CORE_DONE        (1 << 0)

#define SBM_SBUS_STICKY_SPARE_DONE       (1 << 1)

#define SBM_SBUS_STICKY_CORE_RCV_HIGH    (1 << 2)

#define SBM_SBUS_STICKY_CORE_RCV_LOW     (1 << 3)

/**** rcv_sticky register ****/

#define SBM_SBUS_RCV_STICKY_VAL_MASK     0x00000007
#define SBM_SBUS_RCV_STICKY_VAL_SHIFT    0

/**** ctrl register ****/

#define SBM_ROM_CTRL_ENABLE              (1 << 0)

#define SBM_ROM_CTRL_OUT_EN              (1 << 1)

/**** data register ****/

#define SBM_TWI_DATA_OUT0_MASK           0x000000FF
#define SBM_TWI_DATA_OUT0_SHIFT          0

#define SBM_TWI_DATA_OUT1_MASK           0x0000FF00
#define SBM_TWI_DATA_OUT1_SHIFT          8

/**** wr register ****/

#define SBM_TWI_WR_IN0_MASK              0x000000FF
#define SBM_TWI_WR_IN0_SHIFT             0

#define SBM_TWI_WR_IN1_MASK              0x0000FF00
#define SBM_TWI_WR_IN1_SHIFT             8

/**** low_address register ****/

#define SBM_TWI_LOW_ADDRESS_BITS_MASK    0x0000000F
#define SBM_TWI_LOW_ADDRESS_BITS_SHIFT   0

/**** cntl register ****/

#define SBM_SPICO_CNTL_VAL_MASK          0x0000FFFF
#define SBM_SPICO_CNTL_VAL_SHIFT         0

#define SBM_SPICO_CNTL_INTERRUPT         (1 << 16)

/**** general_purpose register ****/

#define SBM_SPICO_GENERAL_PURPOSE_DATA_MASK 0x0000FFFF
#define SBM_SPICO_GENERAL_PURPOSE_DATA_SHIFT 0

/**** alert register ****/

#define SBM_SPICO_ALERT_SBE              (1 << 0)

#define SBM_SPICO_ALERT_DBE              (1 << 1)

/**** mem register ****/
/* Guardband value */
#define SBM_SPICO_MEM_ULP_TMG_MODE_MASK  0x000003FF
#define SBM_SPICO_MEM_ULP_TMG_MODE_SHIFT 0

#define SBM_SPICO_MEM_MEM_MSTR_CTRL_EN   (1 << 10)

#define SBM_SPICO_MEM_PBIST_MASK         0xFFFFF000
#define SBM_SPICO_MEM_PBIST_SHIFT        12

/**** temp register ****/
/* read temperature */
#define SBM_SPICO_TEMP_ADD_VAL_MASK      0x000000FF
#define SBM_SPICO_TEMP_ADD_VAL_SHIFT     0

#define SBM_SPICO_TEMP_RCV_ADDR_MASK     0x0000FF00
#define SBM_SPICO_TEMP_RCV_ADDR_SHIFT    8

#define SBM_SPICO_TEMP_COMMAND_MASK      0x00FF0000
#define SBM_SPICO_TEMP_COMMAND_SHIFT     16

#define SBM_SPICO_TEMP_ENABLE_FSM        (1 << 24)

#define SBM_SPICO_TEMP_FSM_RES_SEL       (1 << 25)

#define SBM_SPICO_TEMP_FSM_RES_VAL_MASK  0x1C000000
#define SBM_SPICO_TEMP_FSM_RES_VAL_SHIFT 26

#define SBM_SPICO_TEMP_FSM_RES_MASK_MASK 0xE0000000
#define SBM_SPICO_TEMP_FSM_RES_MASK_SHIFT 29

/**** mutex_lane register ****/

#define SBM_SBM_MUTEX_MUTEX_LANE_REQUEST (1 << 0)

#define SBM_SBM_MUTEX_MUTEX_LANE_DONE    (1 << 4)

#define SBM_SBM_MUTEX_MUTEX_LANE_GRANT   (1 << 8)

#ifdef __cplusplus
}
#endif

#endif

/** @} */