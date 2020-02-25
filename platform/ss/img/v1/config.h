/*
** ###################################################################
**
**     Copyright (c) 2016 Freescale Semiconductor, Inc.
**     Copyright 2017-2019 NXP
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of the copyright holder nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**
** ###################################################################
*/

/*==========================================================================*/
/*!
 * @file
 *
 * Header file containing the entry points and debug resource strings
 * for the IMG subsystem.
 *
 * @addtogroup IMG_SS
 * @{
 */
/*==========================================================================*/

/* DO NOT EDIT - This file auto generated by bin/config_ss_h.pl */

#ifndef SC_SS_IMG_CONFIG_H
#define SC_SS_IMG_CONFIG_H

/*!
 * This define defines the number of resources.
 */
#define SS_NUM_RSRC_IMG 18U

/*! Define used to create subsystem function prototypes */
#define SS_FUNC_PROTO_IMG \
    sc_err_t ss_trans_power_mode_img(sc_sub_t ss, ss_idx_t ss_idx, \
        ss_ridx_t rsrc_idx, sc_pm_power_mode_t from_mode, \
        sc_pm_power_mode_t to_mode); \
    void ss_prepost_power_mode_img(sc_sub_t ss, dsc_pdom_t pd, ss_prepost_t \
        type, sc_pm_power_mode_t from_mode, sc_pm_power_mode_t to_mode, \
        sc_bool_t rom_boot); \


/*!
 * This define is used to override the default SS function entry points.
 * If this isn't defined, then the SS uses functions in base.
 */
#define SS_EP_INIT_IMG \
    { \
        ss_init_base, \
        ss_trans_power_mode_img, \
        ss_rsrc_reset_base, \
        ss_set_cpu_power_mode_base, \
        ss_set_cpu_resume_base, \
        ss_req_sys_if_power_mode_base, \
        ss_updown_base, \
        ss_prepost_power_mode_img, \
        ss_iso_disable_base, \
        ss_link_enable_base, \
        ss_ssi_power_base, \
        ss_ssi_bhole_mode_base, \
        ss_ssi_pause_mode_base, \
        ss_ssi_wait_idle_base, \
        ss_adb_enable_base, \
        ss_adb_wait_base, \
        ss_set_clock_rate_base, \
        ss_get_clock_rate_base, \
        ss_clock_enable_base, \
        ss_force_clock_enable_base, \
        ss_set_clock_parent_base, \
        ss_get_clock_parent_base, \
        ss_prepost_clock_mode_base, \
        ss_is_rsrc_accessible_base, \
        ss_mu_irq_base, \
        ss_cpu_start_base, \
        ss_rdc_enable_base, \
        ss_rdc_set_master_base, \
        ss_rdc_set_peripheral_base, \
        ss_rdc_set_memory_base, \
        ss_rdc_is_did_vld_base, \
        ss_set_control_base, \
        ss_get_control_base, \
        ss_irq_enable_base, \
        ss_irq_status_base, \
        ss_irq_trigger_base, \
        ss_dump_base, \
        ss_do_mem_repair_base, \
    }

#ifdef DEBUG
    /*!
     * This define is used to name resources for debug output.
     */
    #define RNAME_INIT_IMG_0 \
        "ISI_CH0", \
        "ISI_CH1", \
        "ISI_CH2", \
        "ISI_CH3", \
        "ISI_CH4", \
        "ISI_CH5", \
        "ISI_CH6", \
        "ISI_CH7", \
        "MJPEG_DEC_MP", \
        "MJPEG_DEC_S0", \
        "MJPEG_DEC_S1", \
        "MJPEG_DEC_S2", \
        "MJPEG_DEC_S3", \
        "MJPEG_ENC_MP", \
        "MJPEG_ENC_S0", \
        "MJPEG_ENC_S1", \
        "MJPEG_ENC_S2", \
        "MJPEG_ENC_S3", \

#endif

#endif /* SC_SS_IMG_CONFIG_H */

/**@}*/

