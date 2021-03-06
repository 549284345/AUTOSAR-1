/*-------------------------------- Arctic Core ------------------------------
 * Copyright (C) 2013, ArcCore AB, Sweden, www.arccore.com.
 * Contact: <contact@arccore.com>
 *
 * You may ONLY use this file:
 * 1)if you have a valid commercial ArcCore license and then in accordance with
 * the terms contained in the written license agreement between you and ArcCore,
 * or alternatively
 * 2)if you follow the terms found in GNU General Public License version 2 as
 * published by the Free Software Foundation and appearing in the file
 * LICENSE.GPL included in the packaging of this file or here
 * <http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt>
 *-------------------------------- Arctic Core -----------------------------*/


#warning "This default file may only be used as an example!"

#include "EcuM.h"


#if defined(USE_CANSM)
extern const CanSM_ConfigType CanSM_Config;
#endif
#if defined(USE_NM)
extern const Nm_ConfigType Nm_Config;
#endif
#if defined(USE_CANNM)
extern const CanNm_ConfigType CanNm_Config;
#endif
#if defined(USE_UDPNM)
extern const UdpNm_ConfigType UdpNm_Config;
#endif
#if defined(USE_COMM)
extern const ComM_ConfigType ComM_Config;
#endif

#if defined(USE_J1939TP)
extern const J1939Tp_ConfigType J1939Tp_Config;
#endif


EcuM_ConfigType EcuMConfig =
{
    .EcuMDefaultShutdownTarget = ECUM_STATE_RESET,
    .EcuMDefaultSleepMode = 0, // Don't care
    .EcuMDefaultAppMode = OSDEFAULTAPPMODE,
    .EcuMNvramReadAllTimeout = ECUM_NVRAM_READALL_TIMEOUT,
    .EcuMNvramWriteAllTimeout = ECUM_NVRAM_WRITEALL_TIMEOUT,
    .EcuMRunMinimumDuration = ECUM_NVRAM_MIN_RUN_DURATION,

#if defined(USE_MCU)
        .McuConfig = McuConfigData,
#endif
#if defined(USE_PORT)
        .PortConfig = &PortConfigData,
#endif
#if defined(USE_CAN)
        .CanConfig = &CanConfigData,
#endif
#if defined(USE_CANIF)
        .CanIfConfig = &CanIf_Config,
#endif
#if defined(USE_CANSM)
        .CanSMConfig = &CanSM_Config,
#endif
#if defined(USE_CANNM)
        .CanNmConfig = &CanNm_Config,
#endif
#if defined(USE_UDPNM)
        .UdpNmConfig = &UdpNm_Config,
#endif
#if defined(USE_COM)
        .ComConfig = &ComConfiguration,
#endif
#if defined(USE_COMM)
        .ComMConfig = &ComM_Config,
#endif
#if defined(USE_J1939TP)
        .J1939TpConfig = &J1939Tp_Config,
#endif
#if defined(USE_NM)
        .NmConfig = &Nm_Config,
#endif
#if defined(USE_PDUR)
        .PduRConfig = &PduR_Config,
#endif
#if defined(USE_J1939TP)
        .J1939TpConfig = &J1939Tp_Config,
#endif
#if defined(USE_DMA)
        .DmaConfig = DmaConfig,
#endif
#if defined(USE_ADC)
        .AdcConfig = AdcConfig,
#endif
#if defined(USE_PWM)
        .PwmConfig = &PwmConfig,
#endif
#if defined(USE_WDG)
    .WdgConfig = &WdgConfig,
#endif
#if defined(USE_WDGM)
    .WdgMConfig = &WdgMConfig,
#endif
#if defined(USE_WDGIF)
    .WdgIfConfig = &WdgIfConfig,
#endif
#if defined(USE_GPT)
        .GptConfig = GptConfigData,
#endif
#if defined(USE_FLS)
    .FlashConfig = FlsConfigSet,
#endif
#if defined(USE_EEP)
    .EepConfig = EepConfigData,
#endif
#if defined(USE_SPI)
    .SpiConfig = &SpiConfigData,
#endif
};
