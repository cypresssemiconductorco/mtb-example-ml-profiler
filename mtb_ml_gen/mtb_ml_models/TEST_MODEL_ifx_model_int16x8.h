/***************************************************************************//**
* \file TEST_MODEL_ifx_model_int16x8.h
*
* \brief
* Autogenerated with ml-coretools, this file contains TEST_MODEL model data.
* Date: 2022-09-29 08:03:30.960378
*******************************************************************************
* \copyright
* Copyright 2022, Cypress Semiconductor Corporation (an Infineon company).
* All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
******************************************************************************/


#ifndef TEST_MODEL_IFX_MODEL_INT16X8_H
#define TEST_MODEL_IFX_MODEL_INT16X8_H

#include <stdint.h>


extern const uint8_t TEST_MODEL_model_prms_bin[];
#define TEST_MODEL_MODEL_PRMS_BIN_LEN 128

#ifdef CY_ML_MODEL_MEM
extern const uint8_t TEST_MODEL_model_bin[];
#else
extern uint8_t TEST_MODEL_model_bin[];
#endif // CY_ML_MODEL_MEM
#define TEST_MODEL_MODEL_BIN_LEN 13054


#define TEST_MODEL_MODEL_NUM_OF_LAYERS        3
#define TEST_MODEL_MODEL_NUM_OF_RESIDUAL_CONN 0
#define TEST_MODEL_MODEL_INPUT_DATA_SIZE      784
#define TEST_MODEL_MODEL_OUTPUT_DATA_SIZE     10


#define TEST_MODEL_MODEL_SIZE_OF_STATE_OUT   0
#define TEST_MODEL_MODEL_SCRATCH_MEM_SIZE    148


#endif // TEST_MODEL_IFX_MODEL_INT16X8_H
