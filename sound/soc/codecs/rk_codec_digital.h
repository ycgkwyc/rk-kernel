/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Rockchip Audio Codec Digital driver
 *
 * Copyright (C) 2020 Rockchip Electronics Co., Ltd
 *
 */

#ifndef _RK_CODEC_DIGITAL_H
#define _RK_CODEC_DIGITAL_H

#define SYSCTRL0		0x0000
#define ADCVUCTL		0x0040
#define ADCVUCTIME		0x0044
#define ADCDIGEN		0x0048
#define ADCCLKCTRL		0x004C
#define ADCINT_DIV		0x0054
#define ADCSCLKTXINT_DIV	0x006C
#define ADCCFG1			0x0084
#define ADCVOLL0		0x0088
#define ADCVOLL1		0x008C
#define ADCVOLR0		0x0098
#define ADCVOGP			0x00A8
#define ADCRVOLL0		0x00AC
#define ADCRVOLL1		0x00B0
#define ADCRVOLR0		0x00BC
#define ADCALC0			0x00CC
#define ADCALC1			0x00D0
#define ADCALC2			0x00D4
#define ADCNG			0x00D8
#define ADCNGST			0x00DC
#define ADCHPFEN		0x00E0
#define ADCHPFCF		0x00E4
#define ADCPGL0			0x00EC
#define ADCPGL1			0x00F0
#define ADCPGR0			0x00FC
#define ADCLILMT0		0x010C
#define ADCLILMT1		0x0110
#define ADCDMICNG0		0x0114
#define ADCDMICNG1		0x0118
#define DACVUCTL		0x0140
#define DACVUCTIME		0x0144
#define DACDIGEN		0x0148
#define DACCLKCTRL		0x014C
#define DACINT_DIV		0x0154
#define DACSCLKRXINT_DIV	0x0160
#define DACPWM_DIV		0x0164
#define DACPWM_CTRL		0x0168
#define DACCFG1			0x0184
#define DACMUTE			0x0188
#define DACMUTEST		0x018C
#define DACVOLL0		0x0190
#define DACVOLR0		0x01A0
#define DACVOGP			0x01B0
#define DACRVOLL0		0x01B4
#define DACRVOLR0		0x01C4
#define DACLMT0			0x01D4
#define DACLMT1			0x01D8
#define DACLMT2			0x01DC
#define DACMIXCTRLL		0x01E0
#define DACMIXCTRLR		0x01E4
#define DACHPF			0x01E8
#define I2S_TXCR0		0x0300
#define I2S_TXCR1		0x0304
#define I2S_TXCR2		0x0308
#define I2S_RXCR0		0x030C
#define I2S_RXCR1		0x0310
#define I2S_CKR0		0x0314
#define I2S_CKR1		0x0318
#define I2S_XFER		0x031C
#define I2S_CLR			0x0320
#define VERSION			0x0380

/* SYSCTRL0 */
#define ACDCDIG_SYSCTRL0_SYNC_SEL_MASK		BIT(1)
#define ACDCDIG_SYSCTRL0_SYNC_SEL_DAC		BIT(1)
#define ACDCDIG_SYSCTRL0_SYNC_SEL_ADC		0
#define ACDCDIG_SYSCTRL0_GLB_CKE_MASK		BIT(3)
#define ACDCDIG_SYSCTRL0_GLB_CKE_EN		BIT(3)
#define ACDCDIG_SYSCTRL0_GLB_CKE_DIS		0
#define ACDCDIG_SYSCTRL0_CLK_COM_SEL_MASK	BIT(4)
#define ACDCDIG_SYSCTRL0_CLK_COM_SEL_DAC	BIT(4)
#define ACDCDIG_SYSCTRL0_CLK_COM_SEL_ADC	0
#define ACDCDIG_SYSCTRL0_SYNC_MODE_MASK		BIT(5)
#define ACDCDIG_SYSCTRL0_SYNC_MODE_SYNC		BIT(5)
#define ACDCDIG_SYSCTRL0_SYNC_MODE_ASYNC	0
/* ADCVUCTL */
#define ACDCDIG_ADCVUCTL_ADC_BYPS_MASK		BIT(2)
#define ACDCDIG_ADCVUCTL_ADC_BYPS		BIT(2)
/* ADCDIGEN */
#define ACDCDIG_ADCDIGEN_ADCEN_L0R1_MASK	BIT(0)
#define ACDCDIG_ADCDIGEN_ADCEN_L0R1_EN		BIT(0)
#define ACDCDIG_ADCDIGEN_ADCEN_L0R1_DIS		0
#define ACDCDIG_ADCDIGEN_ADCEN_L2_MASK		BIT(1)
#define ACDCDIG_ADCDIGEN_ADCEN_L2_EN		BIT(1)
#define ACDCDIG_ADCDIGEN_ADCEN_L2_DIS		0
#define ACDCDIG_ADCDIGEN_ADC_GLBEN_MASK		BIT(4)
#define ACDCDIG_ADCDIGEN_ADC_GLBEN_EN		BIT(4)
#define ACDCDIG_ADCDIGEN_ADC_GLBEN_DIS		0
/* ADCCLKCTRL */
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_STATUS_MASK	BIT(0)
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_MASK	BIT(1)
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_EN	BIT(1)
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_DIS	0
#define ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN_MASK	BIT(2)
#define ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN	BIT(2)
#define ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_MASK	BIT(3)
#define ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_EN	BIT(3)
#define ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_DIS	0
#define ACDCDIG_ADCCLKCTRL_I2STX_CKE_MASK	BIT(4)
#define ACDCDIG_ADCCLKCTRL_I2STX_CKE_EN		BIT(4)
#define ACDCDIG_ADCCLKCTRL_I2STX_CKE_DIS	0
#define ACDCDIG_ADCCLKCTRL_ADC_CKE_MASK		BIT(5)
#define ACDCDIG_ADCCLKCTRL_ADC_CKE_EN		BIT(5)
#define ACDCDIG_ADCCLKCTRL_ADC_CKE_DIS		0
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_MASK	GENMASK(7, 6)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_16	(0x0 << 6)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_8	(0x1 << 6)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_4	(0x2 << 6)
/* ADCINT_DIV */
#define ACDCDIG_ADCINT_DIV_INT_DIV_CON_MASK	GENMASK(7, 0)
#define ACDCDIG_ADCINT_DIV_INT_DIV_CON(x)	((x) - 1)
/* ADCSCLKTXINT_DIV */
#define ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV_MASK	GENMASK(7, 0)
#define ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV(x)	((x) - 1)
/* ADCCFG1 */
#define ACDCDIG_ADCCFG1_FIR_COM_BPS_MASK	BIT(0)
#define ACDCDIG_ADCCFG1_FIR_COM_BPS_EN		BIT(0)
#define ACDCDIG_ADCCFG1_SIG_SCALE_MODE_MASK	BIT(1)
#define ACDCDIG_ADCCFG1_SIG_SCALE_MODE_HALF	BIT(1)
#define ACDCDIG_ADCCFG1_ADCSRT_MASK		GENMASK(4, 2)
#define ACDCDIG_ADCCFG1_ADCSRT(x)		(((x) & 0x7) << 2)
/* ADCVOLL0 */
#define ACDCDIG_ADCVOLL0_ADCLV0_MASK		GENMASK(7, 0)
#define ACDCDIG_ADCVOLL0_ADCLV0(x)		(x)
/* ADCVOLL1 */
#define ACDCDIG_ADCVOLL1_ADCLV1_MASK		GENMASK(7, 0)
#define ACDCDIG_ADCVOLL1_ADCLV1(x)		(x)
/* ADCVOLR0 */
#define ACDCDIG_ADCVOLR0_ADCRV0_MASK		GENMASK(7, 0)
#define ACDCDIG_ADCVOLR0_ADCRV0(x)		(x)
/* ADCVOGP */
#define ACDCDIG_ADCVOGP_VOLGPL0_MASK		BIT(0)
#define ACDCDIG_ADCVOGP_VOLGPL0_POS		BIT(0)
#define ACDCDIG_ADCVOGP_VOLGPL0_NEG		0
#define ACDCDIG_ADCVOGP_VOLGPR0_MASK		BIT(1)
#define ACDCDIG_ADCVOGP_VOLGPR0_POS		BIT(1)
#define ACDCDIG_ADCVOGP_VOLGPR0_NEG		0
#define ACDCDIG_ADCVOGP_VOLGPL1_MASK		BIT(2)
#define ACDCDIG_ADCVOGP_VOLGPL1_POS		BIT(2)
#define ACDCDIG_ADCVOGP_VOLGPL1_NEG		0
/* ADCALC0 */
#define ACDCDIG_ADCALC0_ALCL0_MASK		BIT(0)
#define ACDCDIG_ADCALC0_ALCL0_EN		BIT(0)
#define ACDCDIG_ADCALC0_ALCR0_MASK		BIT(1)
#define ACDCDIG_ADCALC0_ALCR0_EN		BIT(1)
#define ACDCDIG_ADCALC0_ALCL1_MASK		BIT(2)
#define ACDCDIG_ADCALC0_ALCL1_EN		BIT(2)
/* ADCALC1 */
#define ACDCDIG_ADCALC1_ALCRRATE_MASK		GENMASK(3, 0)
#define ACDCDIG_ADCALC1_ALCRRATE(x)		((x) & 0xf)
#define ACDCDIG_ADCALC1_ALCARATE_MASK		GENMASK(7, 4)
#define ACDCDIG_ADCALC1_ALCARATE(x)		(((x) & 0xf) << 4)
/* ADCALC2 */
#define ACDCDIG_ADCALC2_ALCMIN_MASK		GENMASK(2, 0)
#define ACDCDIG_ADCALC2_ALCMIN(x)		((x) & 0x7)
#define ACDCDIG_ADCALC2_ALCMAX_MASK		GENMASK(6, 4)
#define ACDCDIG_ADCALC2_ALCMAX(x)		(((x) & 0x7) << 4)
/* ADCHPFEN */
#define ACDCDIG_ADCHPFEN_HPFEN_L0_MASK		BIT(0)
#define ACDCDIG_ADCHPFEN_HPFEN_L0_EN		BIT(0)
#define ACDCDIG_ADCHPFEN_HPFEN_R0_MASK		BIT(1)
#define ACDCDIG_ADCHPFEN_HPFEN_R0_EN		BIT(1)
#define ACDCDIG_ADCHPFEN_HPFEN_L1_MASK		BIT(2)
#define ACDCDIG_ADCHPFEN_HPFEN_L1_EN		BIT(2)
/* ADCHPFCF */
#define ACDCDIG_ADCHPFCF_HPFCF_MASK		GENMASK(1, 0)
#define ACDCDIG_ADCHPFCF_HPFCF_493HZ		3
#define ACDCDIG_ADCHPFCF_HPFCF_243HZ		2
#define ACDCDIG_ADCHPFCF_HPFCF_60HZ		1
#define ACDCDIG_ADCHPFCF_HPFCF_3P79HZ		0
/* ADCPGL0 */
#define ACDCDIG_ADCPGL0_PGA_L0_MASK		GENMASK(3, 0)
/* ADCPGL1 */
#define ACDCDIG_ADCPGL1_PGA_L1_MASK		GENMASK(3, 0)
/* ADCPGR0 */
#define ACDCDIG_ADCPGR0_PGA_R0_MASK		GENMASK(3, 0)
/* DACDIGEN */
#define ACDCDIG_DACDIGEN_DACEN_L0R1_MASK	BIT(0)
#define ACDCDIG_DACDIGEN_DACEN_L0R1_EN		BIT(0)
#define ACDCDIG_DACDIGEN_DACEN_L0R1_DIS		0
#define ACDCDIG_DACDIGEN_DAC_GLBEN_MASK		BIT(4)
#define ACDCDIG_DACDIGEN_DAC_GLBEN_EN		BIT(4)
#define ACDCDIG_DACDIGEN_DAC_GLBEN_DIS		0
/* DACCLKCTRL */
#define ACDCDIG_DACCLKCTRL_DAC_MODE_ATTENU_MASK	BIT(0)
#define ACDCDIG_DACCLKCTRL_DAC_MODE_ATTENU_EN	BIT(0)
#define ACDCDIG_DACCLKCTRL_DAC_MODE_ATTENU_DIS	0
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_STATUS_MASK	BIT(1)
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_STATUS_DONE	0
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_MASK	BIT(2)
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_EN	BIT(2)
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_DIS	0
#define ACDCDIG_DACCLKCTRL_CKE_BCLKRX_MASK	BIT(3)
#define ACDCDIG_DACCLKCTRL_CKE_BCLKRX_EN	BIT(3)
#define ACDCDIG_DACCLKCTRL_CKE_BCLKRX_DIS	0
#define ACDCDIG_DACCLKCTRL_I2SRX_CKE_MASK	BIT(4)
#define ACDCDIG_DACCLKCTRL_I2SRX_CKE_EN		BIT(4)
#define ACDCDIG_DACCLKCTRL_I2SRX_CKE_DIS	0
#define ACDCDIG_DACCLKCTRL_DAC_CKE_MASK		BIT(5)
#define ACDCDIG_DACCLKCTRL_DAC_CKE_EN		BIT(5)
#define ACDCDIG_DACCLKCTRL_DAC_CKE_DIS		0
/* DACINT_DIV */
#define ACDCDIG_DACINT_DIV_INT_DIV_CON_MASK	GENMASK(7, 0)
#define ACDCDIG_DACINT_DIV_INT_DIV_CON(x)	((x) - 1)
/* DACSCLKRXINT_DIV */
#define ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV_MASK	GENMASK(7, 0)
#define ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV(x)	((x) - 1)
/* DACPWM_DIV */
#define ACDCDIG_DACPWM_DIV_AUDIO_PWM_DIV_MASK	GENMASK(7, 0)
#define ACDCDIG_DACPWM_DIV_AUDIO_PWM_DIV(x)	((x) - 1)
/* DACPWM_CTRL */
#define ACDCDIG_DACPWM_CTRL_DITH_SEL_MASK	GENMASK(2, 0)
#define ACDCDIG_DACPWM_CTRL_DITH_SEL(x)		(x)
#define ACDCDIG_DACPWM_CTRL_PWM_EN_MASK		BIT(3)
#define ACDCDIG_DACPWM_CTRL_PWM_EN		BIT(3)
#define ACDCDIG_DACPWM_CTRL_PWM_DIS		0
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_MASK	GENMASK(5, 4)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_1		(0x2 << 4)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_0		(0x1 << 4)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_DAC	(0x0 << 4)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_CKE_MASK	BIT(6)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_CKE_EN	BIT(6)
#define ACDCDIG_DACPWM_CTRL_PWM_MODE_CKE_DIS	0
/* DACCFG1 */
#define ACDCDIG_DACCFG1_DACSRT_MASK		GENMASK(4, 2)
#define ACDCDIG_DACCFG1_DACSRT(x)		((x) << 2)
/* DACMUTE */
#define ACDCDIG_DACMUTE_DACMT_MASK		BIT(0)
#define ACDCDIG_DACMUTE_DACUNMT_MASK		BIT(1)
/* DACVOLL0 */
#define ACDCDIG_DACVOLL0_DACLV0_MASK		GENMASK(7, 0)
#define ACDCDIG_DACVOLL0_DACLV0(x)		(x)
/* DACVOLR0 */
#define ACDCDIG_DACVOLR0_DACRV0_MASK		GENMASK(7, 0)
#define ACDCDIG_DACVOLR0_DACRV0(x)		(x)
/* DACVOGP */
#define ACDCDIG_DACVOGP_VOLGPL0_MASK		BIT(0)
#define ACDCDIG_DACVOGP_VOLGPL0_POS		BIT(0)
#define ACDCDIG_DACVOGP_VOLGPL0_NEG		0
#define ACDCDIG_DACVOGP_VOLGPR0_MASK		BIT(1)
#define ACDCDIG_DACVOGP_VOLGPR0_POS		BIT(1)
#define ACDCDIG_DACVOGP_VOLGPR0_NEG		0
/* DACMIXCTRLL */
#define ACDCDIG_DACMIXCTRLL_MIXMODE_L0_MASK	GENMASK(1, 0)
#define ACDCDIG_DACMIXCTRLL_MIXMODE_L0_LR	2
#define ACDCDIG_DACMIXCTRLL_MIXMODE_L0_R	1
#define ACDCDIG_DACMIXCTRLL_MIXMODE_L0_L	0
/* DACMIXCTRLR */
#define ACDCDIG_DACMIXCTRLR_MIXMODE_R0_MASK	GENMASK(1, 0)
#define ACDCDIG_DACMIXCTRLR_MIXMODE_R0_LR	2
#define ACDCDIG_DACMIXCTRLR_MIXMODE_R0_L	1
#define ACDCDIG_DACMIXCTRLR_MIXMODE_R0_R	0
/* DACHPF */
#define ACDCDIG_DACHPF_HPFEN_L0R0_MASK		BIT(0)
#define ACDCDIG_DACHPF_HPFEN_L0R0_EN		BIT(0)
#define ACDCDIG_DACHPF_HPFCF_MASK		GENMASK(5, 4)
#define ACDCDIG_DACHPF_HPFCF_140HZ		(0x3 << 4)
#define ACDCDIG_DACHPF_HPFCF_120HZ		(0x2 << 4)
#define ACDCDIG_DACHPF_HPFCF_100HZ		(0x1 << 4)
#define ACDCDIG_DACHPF_HPFCF_80HZ		(0x0 << 4)
/* I2S_TXCR0 */
#define ACDCDIG_I2S_TXCR0_VDW_MASK		GENMASK(4, 0)
#define ACDCDIG_I2S_TXCR0_VDW(x)		((x) - 1)
/* I2S_TXCR1 */
#define ACDCDIG_I2S_TXCR1_CEX_MASK		BIT(4)
#define ACDCDIG_I2S_TXCR1_CEX_EXCHANGE		BIT(4)
#define ACDCDIG_I2S_TXCR1_TCSR_MASK		GENMASK(7, 6)
#define ACDCDIG_I2S_TXCR1_TCSR_4CH		(0x1 << 6)
#define ACDCDIG_I2S_TXCR1_TCSR_2CH		(0x0 << 6)
/* I2S_RXCR0 */
#define ACDCDIG_I2S_RXCR0_VDW_MASK		GENMASK(4, 0)
#define ACDCDIG_I2S_RXCR0_VDW(x)		((x) - 1)
/* I2S_RXCR1 */
#define ACDCDIG_I2S_RXCR1_CEX_MASK		BIT(4)
#define ACDCDIG_I2S_RXCR1_CEX_EXCHANGE		BIT(4)
#define ACDCDIG_I2S_RXCR1_RCSR_MASK		GENMASK(7, 6)
#define ACDCDIG_I2S_RXCR1_RCSR_2CH		(0x0 << 6)
/* I2S_CKR0 */
#define ACDCDIG_I2S_CKR0_TSD_MASK		GENMASK(1, 0)
#define ACDCDIG_I2S_CKR0_TSD(x)			((x) << 0)
#define ACDCDIG_I2S_CKR0_RSD_MASK		GENMASK(3, 2)
#define ACDCDIG_I2S_CKR0_RSD(x)			((x) << 2)
/* I2S_CKR1 */
#define ACDCDIG_I2S_CKR1_TLP_MASK		BIT(0)
#define ACDCDIG_I2S_CKR1_TLP_INVERTED		BIT(0)
#define ACDCDIG_I2S_CKR1_TLP_NORMAL		0
#define ACDCDIG_I2S_CKR1_RLP_MASK		BIT(1)
#define ACDCDIG_I2S_CKR1_RLP_INVERTED		BIT(1)
#define ACDCDIG_I2S_CKR1_RLP_NORMAL		0
#define ACDCDIG_I2S_CKR1_CKP_MASK		BIT(2)
#define ACDCDIG_I2S_CKR1_CKP_INVERTED		BIT(2)
#define ACDCDIG_I2S_CKR1_CKP_NORMAL		0
#define ACDCDIG_I2S_CKR1_MSS_MASK		BIT(3)
#define ACDCDIG_I2S_CKR1_MSS_MASTER		0
/* I2S_XFER */
#define ACDCDIG_I2S_XFER_TXS_MASK		BIT(0)
#define ACDCDIG_I2S_XFER_TXS_START		BIT(0)
#define ACDCDIG_I2S_XFER_TXS_STOP		0
#define ACDCDIG_I2S_XFER_RXS_MASK		BIT(1)
#define ACDCDIG_I2S_XFER_RXS_START		BIT(1)
#define ACDCDIG_I2S_XFER_RXS_STOP		0
/* I2S_CLR */
#define ACDCDIG_I2S_CLR_TXC_MASK		BIT(0)
#define ACDCDIG_I2S_CLR_TXC_CLR			BIT(0)
#define ACDCDIG_I2S_CLR_RXC_MASK		BIT(1)
#define ACDCDIG_I2S_CLR_RXC_CLR			BIT(1)

#endif
