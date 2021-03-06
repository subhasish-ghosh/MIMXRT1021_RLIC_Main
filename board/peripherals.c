/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v9.0
processor: MIMXRT1021xxxxx
package_id: MIMXRT1021DAG5A
mcu_data: ksdk2_0
processor_version: 9.0.1
board: MIMXRT1020-EVK
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 6d394465-bc9b-47f2-9a1f-3ca61f76d27b
  called_from_default_init: true
  selectedCore: core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic_57b5eef3774cc60acaede6f5b8bddc67'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table:
      - 0: []
      - 1: []
      - 2: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * LPI2C4 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LPI2C4'
- type: 'lpi2c'
- mode: 'master'
- custom_name_enabled: 'false'
- type_id: 'lpi2c_db68d4f4f06a22e25ab51fe9bd6db4d2'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPI2C4'
- config_sets:
  - main:
    - clockSource: 'Lpi2cClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - interrupt:
      - IRQn: 'LPI2C4_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'qs_interrupt'
  - master:
    - mode: 'transfer'
    - config:
      - enableMaster: 'true'
      - enableDoze: 'true'
      - debugEnable: 'false'
      - ignoreAck: 'false'
      - pinConfig: 'kLPI2C_2PinOpenDrain'
      - baudRate_Hz: '100000'
      - busIdleTimeout_ns: '0'
      - pinLowTimeout_ns: '0'
      - sdaGlitchFilterWidth_ns: '0'
      - sclGlitchFilterWidth_ns: '0'
      - hostRequest:
        - enable: 'false'
        - source: 'kLPI2C_HostRequestExternalPin'
        - polarity: 'kLPI2C_HostRequestPinActiveHigh'
      - edmaRequestSources: ''
    - transfer:
      - blocking: 'false'
      - enable_custom_handle: 'false'
      - callback:
        - name: ''
        - userData: ''
      - flags: ''
      - slaveAddress: '0'
      - direction: 'kLPI2C_Write'
      - subaddress: '0'
      - subaddressSize: '1'
      - blocking_buffer: 'false'
      - enable_custom_buffer: 'false'
      - dataSize: '1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpi2c_master_config_t LPI2C4_masterConfig = {
  .enableMaster = true,
  .enableDoze = true,
  .debugEnable = false,
  .ignoreAck = false,
  .pinConfig = kLPI2C_2PinOpenDrain,
  .baudRate_Hz = 100000UL,
  .busIdleTimeout_ns = 0UL,
  .pinLowTimeout_ns = 0UL,
  .sdaGlitchFilterWidth_ns = 0U,
  .sclGlitchFilterWidth_ns = 0U,
  .hostRequest = {
    .enable = false,
    .source = kLPI2C_HostRequestExternalPin,
    .polarity = kLPI2C_HostRequestPinActiveHigh
  }
};
lpi2c_master_transfer_t LPI2C4_masterTransfer = {
  .flags = kLPI2C_TransferDefaultFlag,
  .slaveAddress = 0,
  .direction = kLPI2C_Write,
  .subaddress = 0,
  .subaddressSize = 1,
  .data = LPI2C4_masterBuffer,
  .dataSize = 1
};
lpi2c_master_handle_t LPI2C4_masterHandle;
uint8_t LPI2C4_masterBuffer[LPI2C4_MASTER_BUFFER_SIZE];

static void LPI2C4_init(void) {
  LPI2C_MasterInit(LPI2C4_PERIPHERAL, &LPI2C4_masterConfig, LPI2C4_CLOCK_FREQ);
  LPI2C_MasterTransferCreateHandle(LPI2C4_PERIPHERAL, &LPI2C4_masterHandle, NULL, NULL);
}

/***********************************************************************************************************************
 * LPUART1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LPUART1'
- type: 'lpuart'
- mode: 'polling'
- custom_name_enabled: 'false'
- type_id: 'lpuart_54a65a580e3462acdbacefd5299e0cac'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPUART1'
- config_sets:
  - lpuartConfig_t:
    - lpuartConfig:
      - clockSource: 'LpuartClock'
      - lpuartSrcClkFreq: 'BOARD_BootClockRUN'
      - baudRate_Bps: '115200'
      - parityMode: 'kLPUART_ParityDisabled'
      - dataBitsCount: 'kLPUART_EightDataBits'
      - isMsb: 'false'
      - stopBitCount: 'kLPUART_OneStopBit'
      - txFifoWatermark: '0'
      - rxFifoWatermark: '1'
      - enableRxRTS: 'false'
      - enableTxCTS: 'false'
      - txCtsSource: 'kLPUART_CtsSourcePin'
      - txCtsConfig: 'kLPUART_CtsSampleAtStart'
      - rxIdleType: 'kLPUART_IdleTypeStartBit'
      - rxIdleConfig: 'kLPUART_IdleCharacter1'
      - enableTx: 'true'
      - enableRx: 'true'
    - quick_selection: 'QuickSelection1'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpuart_config_t LPUART1_config = {
  .baudRate_Bps = 115200UL,
  .parityMode = kLPUART_ParityDisabled,
  .dataBitsCount = kLPUART_EightDataBits,
  .isMsb = false,
  .stopBitCount = kLPUART_OneStopBit,
  .txFifoWatermark = 0U,
  .rxFifoWatermark = 1U,
  .enableRxRTS = false,
  .enableTxCTS = false,
  .txCtsSource = kLPUART_CtsSourcePin,
  .txCtsConfig = kLPUART_CtsSampleAtStart,
  .rxIdleType = kLPUART_IdleTypeStartBit,
  .rxIdleConfig = kLPUART_IdleCharacter1,
  .enableTx = true,
  .enableRx = true
};

static void LPUART1_init(void) {
  LPUART_Init(LPUART1_PERIPHERAL, &LPUART1_config, LPUART1_CLOCK_SOURCE);
}

/***********************************************************************************************************************
 * SEMC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'SEMC'
- type: 'semc'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'semc_84a769c198c91c527e11dcec2f5b4b81'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'SEMC'
- config_sets:
  - fsl_semc:
    - enableDCD: 'false'
    - clockConfig:
      - clockSource: 'kSEMC_ClkSrcPeri'
      - clockSourceFreq: 'BOARD_BootClockRUN'
    - semc_config_t:
      - dqsMode: 'kSEMC_Loopbackdqspad'
      - cmdTimeoutCycles: '0'
      - busTimeoutCycles: '0'
      - queueWeight:
        - queueaEnable: 'false'
        - queueaWeight:
          - structORvalue: 'structure'
          - queueaConfig:
            - qos: '0'
            - aging: '0'
            - slaveHitSwith: '0'
            - slaveHitNoswitch: '0'
        - queuebEnable: 'false'
        - queuebWeight:
          - structORvalue: 'structure'
          - queuebConfig:
            - qos: '0'
            - aging: '0'
            - slaveHitSwith: '0'
            - weightPagehit: '0'
            - bankRotation: '0'
    - semc_sdram_config_t:
      - csxPinMux: 'kSEMC_MUXCSX0'
      - semcSdramCs: 'kSEMC_SDRAM_CS0'
      - address: '0x80000000'
      - memsize_input: '32KB'
      - portSize: 'kSEMC_PortSize16Bit'
      - burstLen: 'kSEMC_Sdram_BurstLen1'
      - columnAddrBitNum: 'kSEMC_SdramColunm_9bit'
      - casLatency: 'kSEMC_LatencyThree'
      - tPrecharge2Act_Ns: '18'
      - tAct2ReadWrite_Ns: '18'
      - tRefreshRecovery_Ns: '127'
      - tWriteRecovery_Ns: '12'
      - tCkeOff_Ns: '42'
      - tAct2Prechage_Ns: '42'
      - tSelfRefRecovery_Ns: '67'
      - tRefresh2Refresh_Ns: '60'
      - tAct2Act_Ns: '60'
      - tPrescalePeriod_Ns: '160'
      - tIdleTimeout_Ns: '0'
      - refreshPeriod_nsPerRow: '64'
      - refreshUrgThreshold: '64'
      - refreshBurstLen: '1'
    - sdramArray: []
    - quick_selection: 'SEMC_Type'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
semc_config_t SEMC_config = {
  .dqsMode = kSEMC_Loopbackdqspad,
  .cmdTimeoutCycles = 0U,
  .busTimeoutCycles = 0U,
  .queueWeight = {
    .queueaEnable = false,
    .queueaWeight = {
      .queueaConfig = {
        .qos = 0UL,
        .aging = 0UL,
        .slaveHitSwith = 0UL,
        .slaveHitNoswitch = 0UL
      },
    },
    .queuebEnable = false,
    .queuebWeight = {
      .queuebConfig = {
        .qos = 0UL,
        .aging = 0UL,
        .slaveHitSwith = 0UL,
        .weightPagehit = 0UL,
        .bankRotation = 0UL
      },
    }
  }
};
semc_sdram_config_t SEMC_sdram_struct = {
  .csxPinMux = kSEMC_MUXCSX0,
  .address = 0x80000000UL,
  .memsize_kbytes = 32,
  .portSize = kSEMC_PortSize16Bit,
  .burstLen = kSEMC_Sdram_BurstLen1,
  .columnAddrBitNum = kSEMC_SdramColunm_9bit,
  .casLatency = kSEMC_LatencyThree,
  .tPrecharge2Act_Ns = 18U,
  .tAct2ReadWrite_Ns = 18U,
  .tRefreshRecovery_Ns = 127U,
  .tWriteRecovery_Ns = 12U,
  .tCkeOff_Ns = 42U,
  .tAct2Prechage_Ns = 42U,
  .tSelfRefRecovery_Ns = 67U,
  .tRefresh2Refresh_Ns = 60U,
  .tAct2Act_Ns = 60U,
  .tPrescalePeriod_Ns = 160UL,
  .tIdleTimeout_Ns = 0UL,
  .refreshPeriod_nsPerRow = 64UL,
  .refreshUrgThreshold = 64UL,
  .refreshBurstLen = 1U,
};

static void SEMC_init(void) {
  /* Initialize SEMC peripheral. */
  SEMC_Init(SEMC_PERIPHERAL, &SEMC_config);
  /* Initialize SEMC SDRAM. */
  SEMC_ConfigureSDRAM(SEMC_PERIPHERAL, kSEMC_SDRAM_CS0, &SEMC_sdram_struct, 62500000);
}

/***********************************************************************************************************************
 * GPIO1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO1'
- type: 'igpio'
- mode: 'GPIO'
- custom_name_enabled: 'false'
- type_id: 'igpio_b1c1fa279aa7069dca167502b8589cb7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIO1'
- config_sets:
  - fsl_gpio:
    - enable_irq_comb_0_15: 'true'
    - gpio_interrupt_comb_0_15:
      - IRQn: 'GPIO1_Combined_0_15_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_comb_16_31: 'true'
    - gpio_interrupt_comb_16_31:
      - IRQn: 'GPIO1_Combined_16_31_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int0: 'false'
    - gpio_interrupt_int0:
      - IRQn: 'GPIO1_INT0_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int1: 'false'
    - gpio_interrupt_int1:
      - IRQn: 'GPIO1_INT1_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int2: 'false'
    - gpio_interrupt_int2:
      - IRQn: 'GPIO1_INT2_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int3: 'false'
    - gpio_interrupt_int3:
      - IRQn: 'GPIO1_INT3_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int4: 'false'
    - gpio_interrupt_int4:
      - IRQn: 'GPIO1_INT4_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int5: 'false'
    - gpio_interrupt_int5:
      - IRQn: 'GPIO1_INT5_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int6: 'false'
    - gpio_interrupt_int6:
      - IRQn: 'GPIO1_INT6_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_int7: 'false'
    - gpio_interrupt_int7:
      - IRQn: 'GPIO1_INT7_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void GPIO1_init(void) {
  /* Make sure, the clock gate for GPIO1 is enabled (e. g. in pin_mux.c) */
  /* Enable interrupt GPIO1_Combined_0_15_IRQn request in the NVIC. */
  EnableIRQ(GPIO1_GPIO_COMB_0_15_IRQN);
  /* Enable interrupt GPIO1_Combined_16_31_IRQn request in the NVIC. */
  EnableIRQ(GPIO1_GPIO_COMB_16_31_IRQN);
}

/***********************************************************************************************************************
 * GPT1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPT1'
- type: 'gpt'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'gpt_e92a0cbd07e389b82a1d19b05eb9fdda'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPT1'
- config_sets:
  - fsl_gpt:
    - gpt_config:
      - clockSource: 'kGPT_ClockSource_Periph'
      - clockSourceFreq: 'BOARD_BootClockRUN'
      - oscDivider: '1'
      - divider: '1'
      - enableFreeRun: 'false'
      - enableRunInWait: 'true'
      - enableRunInStop: 'true'
      - enableRunInDoze: 'false'
      - enableRunInDbg: 'false'
      - enableMode: 'true'
    - input_capture_channels: []
    - output_compare_channels:
      - 0:
        - channel: 'kGPT_OutputCompare_Channel1'
        - mode: 'kGPT_OutputOperation_Disconnected'
        - compare_value_str: '255'
    - interrupt_requests: ''
    - isInterruptEnabled: 'false'
    - interrupt:
      - IRQn: 'GPT1_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - EnableTimerInInit: 'false'
    - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const gpt_config_t GPT1_config = {
  .clockSource = kGPT_ClockSource_Periph,
  .divider = 1UL,
  .enableFreeRun = false,
  .enableRunInWait = true,
  .enableRunInStop = true,
  .enableRunInDoze = false,
  .enableRunInDbg = false,
  .enableMode = true
};

static void GPT1_init(void) {
  /* GPT device and channels initialization */
  GPT_Init(GPT1_PERIPHERAL, &GPT1_config);
  GPT_SetOscClockDivider(GPT1_PERIPHERAL, 1);
  GPT_SetOutputCompareValue(GPT1_PERIPHERAL, kGPT_OutputCompare_Channel1, 255);
  GPT_SetOutputOperationMode(GPT1_PERIPHERAL, kGPT_OutputCompare_Channel1, kGPT_OutputOperation_Disconnected);
  /* Enable GPT interrupt sources */
  GPT_EnableInterrupts(GPT1_PERIPHERAL, 0);
}

/***********************************************************************************************************************
 * LPI2C1 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'LPI2C1'
- type: 'lpi2c'
- mode: 'master'
- custom_name_enabled: 'false'
- type_id: 'lpi2c_db68d4f4f06a22e25ab51fe9bd6db4d2'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'LPI2C1'
- config_sets:
  - main:
    - clockSource: 'Lpi2cClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - interrupt:
      - IRQn: 'LPI2C1_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - quick_selection: 'qs_interrupt'
  - master:
    - mode: 'transfer'
    - config:
      - enableMaster: 'true'
      - enableDoze: 'true'
      - debugEnable: 'false'
      - ignoreAck: 'false'
      - pinConfig: 'kLPI2C_2PinOpenDrain'
      - baudRate_Hz: '100000'
      - busIdleTimeout_ns: '0'
      - pinLowTimeout_ns: '0'
      - sdaGlitchFilterWidth_ns: '0'
      - sclGlitchFilterWidth_ns: '0'
      - hostRequest:
        - enable: 'false'
        - source: 'kLPI2C_HostRequestExternalPin'
        - polarity: 'kLPI2C_HostRequestPinActiveHigh'
      - edmaRequestSources: ''
    - transfer:
      - blocking: 'false'
      - enable_custom_handle: 'false'
      - callback:
        - name: ''
        - userData: ''
      - flags: ''
      - slaveAddress: '0'
      - direction: 'kLPI2C_Write'
      - subaddress: '0'
      - subaddressSize: '1'
      - blocking_buffer: 'false'
      - enable_custom_buffer: 'false'
      - dataSize: '1'
    - quick_selection: 'qs_master_transfer'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const lpi2c_master_config_t LPI2C1_masterConfig = {
  .enableMaster = true,
  .enableDoze = true,
  .debugEnable = false,
  .ignoreAck = false,
  .pinConfig = kLPI2C_2PinOpenDrain,
  .baudRate_Hz = 100000UL,
  .busIdleTimeout_ns = 0UL,
  .pinLowTimeout_ns = 0UL,
  .sdaGlitchFilterWidth_ns = 0U,
  .sclGlitchFilterWidth_ns = 0U,
  .hostRequest = {
    .enable = false,
    .source = kLPI2C_HostRequestExternalPin,
    .polarity = kLPI2C_HostRequestPinActiveHigh
  }
};
lpi2c_master_transfer_t LPI2C1_masterTransfer = {
  .flags = kLPI2C_TransferDefaultFlag,
  .slaveAddress = 0,
  .direction = kLPI2C_Write,
  .subaddress = 0,
  .subaddressSize = 1,
  .data = LPI2C1_masterBuffer,
  .dataSize = 1
};
lpi2c_master_handle_t LPI2C1_masterHandle;
uint8_t LPI2C1_masterBuffer[LPI2C1_MASTER_BUFFER_SIZE];

static void LPI2C1_init(void) {
  LPI2C_MasterInit(LPI2C1_PERIPHERAL, &LPI2C1_masterConfig, LPI2C1_CLOCK_FREQ);
  LPI2C_MasterTransferCreateHandle(LPI2C1_PERIPHERAL, &LPI2C1_masterHandle, NULL, NULL);
}

/***********************************************************************************************************************
 * TMR2 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'TMR2'
- type: 'qtmr'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'qtmr_460dd7aa3f3371843c2548acd54252b0'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'TMR2'
- config_sets:
  - fsl_qtmr:
    - clockSource: 'BusInterfaceClock'
    - clockSourceFreq: 'BOARD_BootClockRUN'
    - qtmr_channels:
      - 0:
        - channel_prefix_id: 'Channel_0'
        - channel: 'kQTMR_Channel_0'
        - primarySource: 'kQTMR_ClockDivide_128'
        - secondarySource: 'kQTMR_Counter0InputPin'
        - countingMode: 'kQTMR_PriSrcRiseEdge'
        - enableMasterMode: 'true'
        - enableExternalForce: 'false'
        - faultFilterCount: '3'
        - faultFilterPeriod: '0'
        - debugMode: 'kQTMR_RunNormalInDebug'
        - timerModeInit: 'timer'
        - timerMode:
          - freq_value_str: '65535'
        - dmaIntMode: 'interrupt'
        - interrupts: ''
      - 1:
        - channel_prefix_id: 'Channel_1'
        - channel: 'kQTMR_Channel_1'
        - primarySource: 'kQTMR_ClockCounter0Output'
        - primarySourceFreq: '15'
        - secondarySource: 'kQTMR_Counter0InputPin'
        - countingMode: 'kQTMR_CascadeCount'
        - enableMasterMode: 'false'
        - enableExternalForce: 'false'
        - faultFilterCount: '3'
        - faultFilterPeriod: '0'
        - debugMode: 'kQTMR_RunNormalInDebug'
        - timerModeInit: 'timer'
        - timerMode:
          - freq_value_str: '15'
        - dmaIntMode: 'interrupt'
        - interrupts: 'kQTMR_CompareInterruptEnable'
    - interruptVector:
      - enable_irq: 'true'
      - interrupt:
        - IRQn: 'TMR2_IRQn'
        - enable_interrrupt: 'noInit'
        - enable_priority: 'false'
        - priority: '0'
        - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const qtmr_config_t TMR2_Channel_0_config = {
  .primarySource = kQTMR_ClockDivide_128,
  .secondarySource = kQTMR_Counter0InputPin,
  .enableMasterMode = true,
  .enableExternalForce = false,
  .faultFilterCount = 0,
  .faultFilterPeriod = 0,
  .debugMode = kQTMR_RunNormalInDebug
};
const qtmr_config_t TMR2_Channel_1_config = {
  .primarySource = kQTMR_ClockCounter0Output,
  .secondarySource = kQTMR_Counter0InputPin,
  .enableMasterMode = false,
  .enableExternalForce = false,
  .faultFilterCount = 0,
  .faultFilterPeriod = 0,
  .debugMode = kQTMR_RunNormalInDebug
};

static void TMR2_init(void) {
  /* Quad timer channel Channel_0 peripheral initialization */
  QTMR_Init(TMR2_PERIPHERAL, TMR2_CHANNEL_0_CHANNEL, &TMR2_Channel_0_config);
  /* Setup the timer period of the channel */
  QTMR_SetTimerPeriod(TMR2_PERIPHERAL, TMR2_CHANNEL_0_CHANNEL, 65535U);
  /* Quad timer channel Channel_1 peripheral initialization */
  QTMR_Init(TMR2_PERIPHERAL, TMR2_CHANNEL_1_CHANNEL, &TMR2_Channel_1_config);
  /* Setup the timer period of the channel */
  QTMR_SetTimerPeriod(TMR2_PERIPHERAL, TMR2_CHANNEL_1_CHANNEL, 15U);
  /* Enable interrupt requests of the timer channel */
  QTMR_EnableInterrupts(TMR2_PERIPHERAL, TMR2_CHANNEL_1_CHANNEL, kQTMR_CompareInterruptEnable);
  /* Interrupt TMR2_IRQn request in the NVIC is not initialized (disabled by default). */
  /* It can be enabled later by EnableIRQ(TMR2_IRQN);  function call. */
  /* Start the timer - select the timer counting mode */
  QTMR_StartTimer(TMR2_PERIPHERAL, TMR2_CHANNEL_0_CHANNEL, kQTMR_PriSrcRiseEdge);
  /* Start the timer - select the timer counting mode */
  QTMR_StartTimer(TMR2_PERIPHERAL, TMR2_CHANNEL_1_CHANNEL, kQTMR_CascadeCount);
}

/***********************************************************************************************************************
 * GPIO5 initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO5'
- type: 'igpio'
- mode: 'GPIO'
- custom_name_enabled: 'false'
- type_id: 'igpio_b1c1fa279aa7069dca167502b8589cb7'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIO5'
- config_sets:
  - fsl_gpio:
    - enable_irq_comb_0_15: 'false'
    - gpio_interrupt_comb_0_15:
      - IRQn: 'GPIO5_Combined_0_15_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
    - enable_irq_comb_16_31: 'false'
    - gpio_interrupt_comb_16_31:
      - IRQn: 'GPIO5_Combined_16_31_IRQn'
      - enable_interrrupt: 'enabled'
      - enable_priority: 'false'
      - priority: '0'
      - enable_custom_name: 'false'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void GPIO5_init(void) {
  /* Make sure, the clock gate for GPIO5 is enabled (e. g. in pin_mux.c) */
}

/***********************************************************************************************************************
 * TRNG initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'TRNG'
- type: 'TRNG'
- mode: 'General'
- custom_name_enabled: 'false'
- type_id: 'trng_dd5b2a6f14d45ca091cf6c9a38560d5e'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'TRNG'
- config_sets:
  - fsl_trng:
    - settings_trng_config_t:
      - clockMode: 'kTRNG_ClockModeRingOscillator'
      - clockSource: 'BusInterfaceClock'
      - struct_ring_oscillator:
        - ringOscDiv: 'kTRNG_RingOscDiv0'
        - sampleMode: 'kTRNG_SampleModeRaw'
      - entropyDelay: '3200'
      - sampleSize: '2500'
      - sparseBitLimit: '63'
      - retryCount: '1'
      - lock: 'false'
      - struct_statistical_checks:
        - longRunMaxLimit: '34'
        - monobitLimit:
          - maximum: '1384'
          - minimum: '1116'
        - runBit1Limit:
          - maximum: '405'
          - minimum: '227'
        - runBit2Limit:
          - maximum: '220'
          - minimum: '98'
        - runBit3Limit:
          - maximum: '125'
          - minimum: '37'
        - runBit4Limit:
          - maximum: '75'
          - minimum: '11'
        - runBit5Limit:
          - maximum: '47'
          - minimum: '1'
        - runBit6PlusLimit:
          - maximum: '47'
          - minimum: '1'
        - pokerLimit:
          - maximum: '26912'
          - minimum: '24445'
        - frequencyCountLimit:
          - maximum: '25600'
          - minimum: '1600'
    - quick_selection: 'Default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */
const trng_config_t TRNG_config = {
  .lock = false,
  .clockMode = kTRNG_ClockModeRingOscillator,
  .ringOscDiv = kTRNG_RingOscDiv0,
  .sampleMode = kTRNG_SampleModeRaw,
  .entropyDelay = 3200,
  .sampleSize = 2500,
  .sparseBitLimit = 63,
  .retryCount = 1,
  .longRunMaxLimit = 34U,
  .monobitLimit = {
    .maximum = 1384UL,
    .minimum = 1116UL
  },
  .runBit1Limit = {
    .maximum = 405UL,
    .minimum = 227UL
  },
  .runBit2Limit = {
    .maximum = 220UL,
    .minimum = 98UL
  },
  .runBit3Limit = {
    .maximum = 125UL,
    .minimum = 37UL
  },
  .runBit4Limit = {
    .maximum = 75UL,
    .minimum = 11UL
  },
  .runBit5Limit = {
    .maximum = 47UL,
    .minimum = 1UL
  },
  .runBit6PlusLimit = {
    .maximum = 47UL,
    .minimum = 1UL
  },
  .pokerLimit = {
    .maximum = 26912UL,
    .minimum = 24445UL
  },
  .frequencyCountLimit = {
    .maximum = 25600UL,
    .minimum = 1600UL
  }
};

static void TRNG_init(void) {
  /* Initialize TRNG. */
  TRNG_Init(TRNG_PERIPHERAL, &TRNG_config);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  LPI2C4_init();
  LPUART1_init();
  SEMC_init();
  GPIO1_init();
  GPT1_init();
  LPI2C1_init();
  TMR2_init();
  GPIO5_init();
  TRNG_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
