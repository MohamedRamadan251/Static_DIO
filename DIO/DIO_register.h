/*
 * GPIO_register.h
 *
 *  Created on: Aug 19, 2023
 *      Author: Mohammed Ramadan
 */

#ifndef MCAL_GPIO_GPIO_REGISTER_H_
#define MCAL_GPIO_GPIO_REGISTER_H_

/*define base address of SYSCTL*/
#define SYSCTL_BASE                     0x400FE000UL

/*define base address of GPIOA*/
#define GPIOA_AHB_BASE                  0x40058000UL
#define GPIOA_APB_BASE                  0x40004000UL

/*define base address of GPIOB*/
#define GPIOB_AHB_BASE                  0x40059000UL
#define GPIOB_APB_BASE                  0x40005000UL

/*define base address of GPIOC*/
#define GPIOC_AHB_BASE                  0x4005A000UL
#define GPIOC_APB_BASE                  0x40006000UL

/*define base address of GPIOD*/
#define GPIOD_AHB_BASE                  0x4005B000UL
#define GPIOD_APB_BASE                  0x40007000UL

/*define base address of GPIE*/
#define GPIOE_AHB_BASE                  0x4005C000UL
#define GPIOE_APB_BASE                  0x40024000UL

/*define base address of GPIOF*/
#define GPIOF_AHB_BASE                  0x4005D000UL
#define GPIOF_APB_BASE                  0x40025000UL

typedef struct {                                    /*!< SYSCTL Structure                                                      */
  volatile uint32  DID0;                              /*!< Device Identification 0                                               */
  volatile uint32  DID1;                              /*!< Device Identification 1                                               */
  volatile uint32  DC0;                               /*!< Device Capabilities 0                                                 */
  volatile uint32  RESERVED0;
  volatile uint32  DC1;                               /*!< Device Capabilities 1                                                 */
  volatile uint32  DC2;                               /*!< Device Capabilities 2                                                 */
  volatile uint32  DC3;                               /*!< Device Capabilities 3                                                 */
  volatile uint32  DC4;                               /*!< Device Capabilities 4                                                 */
  volatile uint32  DC5;                               /*!< Device Capabilities 5                                                 */
  volatile uint32  DC6;                               /*!< Device Capabilities 6                                                 */
  volatile uint32  DC7;                               /*!< Device Capabilities 7                                                 */
  volatile uint32  DC8;                               /*!< Device Capabilities 8 ADC Channels                                    */
  volatile uint32  PBORCTL;                           /*!< Brown-Out Reset Control                                               */
  volatile uint32  RESERVED1[3];
  volatile uint32  SRCR0;                             /*!< Software Reset Control 0                                              */
  volatile uint32  SRCR1;                             /*!< Software Reset Control 1                                              */
  volatile uint32  SRCR2;                             /*!< Software Reset Control 2                                              */
  volatile uint32  RESERVED2;
  volatile uint32  RIS;                               /*!< Raw Interrupt Status                                                  */
  volatile uint32  IMC;                               /*!< Interrupt Mask Control                                                */
  volatile uint32  MISC;                              /*!< Masked Interrupt Status and Clear                                     */
  volatile uint32  RESC;                              /*!< Reset Cause                                                           */
  volatile uint32  RCC;                               /*!< Run-Mode Clock Configuration                                          */
  volatile uint32  RESERVED3[2];
  volatile uint32  GPIOHBCTL;                         /*!< GPIO High-Performance Bus Control                                     */
  volatile uint32  RCC2;                              /*!< Run-Mode Clock Configuration 2                                        */
  volatile uint32  RESERVED4[2];
  volatile uint32  MOSCCTL;                           /*!< Main Oscillator Control                                               */
  volatile uint32  RESERVED5[32];
  volatile uint32  RCGC0;                             /*!< Run Mode Clock Gating Control Register 0                              */
  volatile uint32  RCGC1;                             /*!< Run Mode Clock Gating Control Register 1                              */
  volatile uint32  RCGC2;                             /*!< Run Mode Clock Gating Control Register 2                              */
  volatile uint32  RESERVED6;
  volatile uint32  SCGC0;                             /*!< Sleep Mode Clock Gating Control Register 0                            */
  volatile uint32  SCGC1;                             /*!< Sleep Mode Clock Gating Control Register 1                            */
  volatile uint32  SCGC2;                             /*!< Sleep Mode Clock Gating Control Register 2                            */
  volatile uint32  RESERVED7;
  volatile uint32  DCGC0;                             /*!< Deep Sleep Mode Clock Gating Control Register 0                       */
  volatile uint32  DCGC1;                             /*!< Deep-Sleep Mode Clock Gating Control Register 1                       */
  volatile uint32  DCGC2;                             /*!< Deep Sleep Mode Clock Gating Control Register 2                       */
  volatile uint32  RESERVED8[6];
  volatile uint32  DSLPCLKCFG;                        /*!< Deep Sleep Clock Configuration                                        */
  volatile uint32  RESERVED9;
  volatile uint32  SYSPROP;                           /*!< System Properties                                                     */
  volatile uint32  PIOSCCAL;                          /*!< Precision Internal Oscillator Calibration                             */
  volatile uint32  PIOSCSTAT;                         /*!< Precision Internal Oscillator Statistics                              */
  volatile uint32  RESERVED10[2];
  volatile uint32  PLLFREQ0;                          /*!< PLL Frequency 0                                                       */
  volatile uint32  PLLFREQ1;                          /*!< PLL Frequency 1                                                       */
  volatile uint32  PLLSTAT;                           /*!< PLL Status                                                            */
  volatile uint32  RESERVED11[9];
  volatile uint32  DC9;                               /*!< Device Capabilities 9 ADC Digital Comparators                         */
  volatile uint32  RESERVED12[3];
  volatile uint32  NVMSTAT;                           /*!< Non-Volatile Memory Information                                       */
  volatile uint32  RESERVED13[87];
  volatile uint32  PPWD;                              /*!< Watchdog Timer Peripheral Present                                     */
  volatile uint32  PPTIMER;                           /*!< Timer Peripheral Present                                              */
  volatile uint32  PPGPIO;                            /*!< General-Purpose Input/Output Peripheral Present                       */
  volatile uint32  PPDMA;                             /*!< Micro Direct Memory Access Peripheral Present                         */
  volatile uint32  RESERVED14;
  volatile uint32  PPHIB;                             /*!< Hibernation Peripheral Present                                        */
  volatile uint32  PPUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Present        */
  volatile uint32  PPSSI;                             /*!< Synchronous Serial Interface Peripheral Present                       */
  volatile uint32  PPI2C;                             /*!< Inter-Integrated Circuit Peripheral Present                           */
  volatile uint32  RESERVED15;
  volatile uint32  PPUSB;                             /*!< Universal Serial Bus Peripheral Present                               */
  volatile uint32  RESERVED16[2];
  volatile uint32  PPCAN;                             /*!< Controller Area Network Peripheral Present                            */
  volatile uint32  PPADC;                             /*!< Analog-to-Digital Converter Peripheral Present                        */
  volatile uint32  PPACMP;                            /*!< Analog Comparator Peripheral Present                                  */
  volatile uint32  PPPWM;                             /*!< Pulse Width Modulator Peripheral Present                              */
  volatile uint32  PPQEI;                             /*!< Quadrature Encoder Interface Peripheral Present                       */
  volatile uint32  RESERVED17[4];
  volatile uint32  PPEEPROM;                          /*!< EEPROM Peripheral Present                                             */
  volatile uint32  PPWTIMER;                          /*!< Wide Timer Peripheral Present                                         */
  volatile uint32  RESERVED18[104];
  volatile uint32  SRWD;                              /*!< Watchdog Timer Software Reset                                         */
  volatile uint32  SRTIMER;                           /*!< Timer Software Reset                                                  */
  volatile uint32  SRGPIO;                            /*!< General-Purpose Input/Output Software Reset                           */
  volatile uint32  SRDMA;                             /*!< Micro Direct Memory Access Software Reset                             */
  volatile uint32  RESERVED19;
  volatile uint32  SRHIB;                             /*!< Hibernation Software Reset                                            */
  volatile uint32  SRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Software Reset            */
  volatile uint32  SRSSI;                             /*!< Synchronous Serial Interface Software Reset                           */
  volatile uint32  SRI2C;                             /*!< Inter-Integrated Circuit Software Reset                               */
  volatile uint32  RESERVED20;
  volatile uint32  SRUSB;                             /*!< Universal Serial Bus Software Reset                                   */
  volatile uint32  RESERVED21[2];
  volatile uint32  SRCAN;                             /*!< Controller Area Network Software Reset                                */
  volatile uint32  SRADC;                             /*!< Analog-to-Digital Converter Software Reset                            */
  volatile uint32  SRACMP;                            /*!< Analog Comparator Software Reset                                      */
  volatile uint32  SRPWM;                             /*!< Pulse Width Modulator Software Reset                                  */
  volatile uint32  SRQEI;                             /*!< Quadrature Encoder Interface Software Reset                           */
  volatile uint32  RESERVED22[4];
  volatile uint32  SREEPROM;                          /*!< EEPROM Software Reset                                                 */
  volatile uint32  SRWTIMER;                          /*!< Wide Timer Software Reset                                             */
  volatile uint32  RESERVED23[40];
  volatile uint32  RCGCWD;                            /*!< Watchdog Timer Run Mode Clock Gating Control                          */
  volatile uint32  RCGCTIMER;                         /*!< Timer Run Mode Clock Gating Control                                   */
  volatile uint32  RCGCGPIO;                          /*!< General-Purpose Input/Output Run Mode Clock Gating Control            */
  volatile uint32  RCGCDMA;                           /*!< Micro Direct Memory Access Run Mode Clock Gating Control              */
  volatile uint32  RESERVED24;
  volatile uint32  RCGCHIB;                           /*!< Hibernation Run Mode Clock Gating Control                             */
  volatile uint32  RCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Run Mode Clock Gating
                                                         Control                                                               */
  volatile uint32  RCGCSSI;                           /*!< Synchronous Serial Interface Run Mode Clock Gating Control            */
  volatile uint32  RCGCI2C;                           /*!< Inter-Integrated Circuit Run Mode Clock Gating Control                */
  volatile uint32  RESERVED25;
  volatile uint32  RCGCUSB;                           /*!< Universal Serial Bus Run Mode Clock Gating Control                    */
  volatile uint32  RESERVED26[2];
  volatile uint32  RCGCCAN;                           /*!< Controller Area Network Run Mode Clock Gating Control                 */
  volatile uint32  RCGCADC;                           /*!< Analog-to-Digital Converter Run Mode Clock Gating Control             */
  volatile uint32  RCGCACMP;                          /*!< Analog Comparator Run Mode Clock Gating Control                       */
  volatile uint32  RCGCPWM;                           /*!< Pulse Width Modulator Run Mode Clock Gating Control                   */
  volatile uint32  RCGCQEI;                           /*!< Quadrature Encoder Interface Run Mode Clock Gating Control            */
  volatile uint32  RESERVED27[4];
  volatile uint32  RCGCEEPROM;                        /*!< EEPROM Run Mode Clock Gating Control                                  */
  volatile uint32  RCGCWTIMER;                        /*!< Wide Timer Run Mode Clock Gating Control                              */
  volatile uint32  RESERVED28[40];
  volatile uint32  SCGCWD;                            /*!< Watchdog Timer Sleep Mode Clock Gating Control                        */
  volatile uint32  SCGCTIMER;                         /*!< Timer Sleep Mode Clock Gating Control                                 */
  volatile uint32  SCGCGPIO;                          /*!< General-Purpose Input/Output Sleep Mode Clock Gating Control          */
  volatile uint32  SCGCDMA;                           /*!< Micro Direct Memory Access Sleep Mode Clock Gating Control            */
  volatile uint32  RESERVED29;
  volatile uint32  SCGCHIB;                           /*!< Hibernation Sleep Mode Clock Gating Control                           */
  volatile uint32  SCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Sleep Mode Clock
                                                         Gating Control                                                        */
  volatile uint32  SCGCSSI;                           /*!< Synchronous Serial Interface Sleep Mode Clock Gating Control          */
  volatile uint32  SCGCI2C;                           /*!< Inter-Integrated Circuit Sleep Mode Clock Gating Control              */
  volatile uint32  RESERVED30;
  volatile uint32  SCGCUSB;                           /*!< Universal Serial Bus Sleep Mode Clock Gating Control                  */
  volatile uint32  RESERVED31[2];
  volatile uint32  SCGCCAN;                           /*!< Controller Area Network Sleep Mode Clock Gating Control               */
  volatile uint32  SCGCADC;                           /*!< Analog-to-Digital Converter Sleep Mode Clock Gating Control           */
  volatile uint32  SCGCACMP;                          /*!< Analog Comparator Sleep Mode Clock Gating Control                     */
  volatile uint32  SCGCPWM;                           /*!< Pulse Width Modulator Sleep Mode Clock Gating Control                 */
  volatile uint32  SCGCQEI;                           /*!< Quadrature Encoder Interface Sleep Mode Clock Gating Control          */
  volatile uint32  RESERVED32[4];
  volatile uint32  SCGCEEPROM;                        /*!< EEPROM Sleep Mode Clock Gating Control                                */
  volatile uint32  SCGCWTIMER;                        /*!< Wide Timer Sleep Mode Clock Gating Control                            */
  volatile uint32  RESERVED33[40];
  volatile uint32  DCGCWD;                            /*!< Watchdog Timer Deep-Sleep Mode Clock Gating Control                   */
  volatile uint32  DCGCTIMER;                         /*!< Timer Deep-Sleep Mode Clock Gating Control                            */
  volatile uint32  DCGCGPIO;                          /*!< General-Purpose Input/Output Deep-Sleep Mode Clock Gating Control     */
  volatile uint32  DCGCDMA;                           /*!< Micro Direct Memory Access Deep-Sleep Mode Clock Gating Control       */
  volatile uint32  RESERVED34;
  volatile uint32  DCGCHIB;                           /*!< Hibernation Deep-Sleep Mode Clock Gating Control                      */
  volatile uint32  DCGCUART;                          /*!< Universal Asynchronous Receiver/Transmitter Deep-Sleep Mode
                                                         Clock Gating Control                                                  */
  volatile uint32  DCGCSSI;                           /*!< Synchronous Serial Interface Deep-Sleep Mode Clock Gating Control     */
  volatile uint32  DCGCI2C;                           /*!< Inter-Integrated Circuit Deep-Sleep Mode Clock Gating Control         */
  volatile uint32  RESERVED35;
  volatile uint32  DCGCUSB;                           /*!< Universal Serial Bus Deep-Sleep Mode Clock Gating Control             */
  volatile uint32  RESERVED36[2];
  volatile uint32  DCGCCAN;                           /*!< Controller Area Network Deep-Sleep Mode Clock Gating Control          */
  volatile uint32  DCGCADC;                           /*!< Analog-to-Digital Converter Deep-Sleep Mode Clock Gating Control      */
  volatile uint32  DCGCACMP;                          /*!< Analog Comparator Deep-Sleep Mode Clock Gating Control                */
  volatile uint32  DCGCPWM;                           /*!< Pulse Width Modulator Deep-Sleep Mode Clock Gating Control            */
  volatile uint32  DCGCQEI;                           /*!< Quadrature Encoder Interface Deep-Sleep Mode Clock Gating Control     */
  volatile uint32  RESERVED37[4];
  volatile uint32  DCGCEEPROM;                        /*!< EEPROM Deep-Sleep Mode Clock Gating Control                           */
  volatile uint32  DCGCWTIMER;                        /*!< Wide Timer Deep-Sleep Mode Clock Gating Control                       */
  volatile uint32  RESERVED38[104];
  volatile uint32  PRWD;                              /*!< Watchdog Timer Peripheral Ready                                       */
  volatile uint32  PRTIMER;                           /*!< Timer Peripheral Ready                                                */
  volatile uint32  PRGPIO;                            /*!< General-Purpose Input/Output Peripheral Ready                         */
  volatile uint32  PRDMA;                             /*!< Micro Direct Memory Access Peripheral Ready                           */
  volatile uint32  RESERVED39;
  volatile uint32  PRHIB;                             /*!< Hibernation Peripheral Ready                                          */
  volatile uint32  PRUART;                            /*!< Universal Asynchronous Receiver/Transmitter Peripheral Ready          */
  volatile uint32  PRSSI;                             /*!< Synchronous Serial Interface Peripheral Ready                         */
  volatile uint32  PRI2C;                             /*!< Inter-Integrated Circuit Peripheral Ready                             */
  volatile uint32  RESERVED40;
  volatile uint32  PRUSB;                             /*!< Universal Serial Bus Peripheral Ready                                 */
  volatile uint32  RESERVED41[2];
  volatile uint32  PRCAN;                             /*!< Controller Area Network Peripheral Ready                              */
  volatile uint32  PRADC;                             /*!< Analog-to-Digital Converter Peripheral Ready                          */
  volatile uint32  PRACMP;                            /*!< Analog Comparator Peripheral Ready                                    */
  volatile uint32  PRPWM;                             /*!< Pulse Width Modulator Peripheral Ready                                */
  volatile uint32  PRQEI;                             /*!< Quadrature Encoder Interface Peripheral Ready                         */
  volatile uint32  RESERVED42[4];
  volatile uint32  PREEPROM;                          /*!< EEPROM Peripheral Ready                                               */
  volatile uint32  PRWTIMER;                          /*!< Wide Timer Peripheral Ready                                           */
} SYSCTL_MemoryMapType;

/*registers of GPIOx*/
typedef struct
{
    volatile uint32  RESERVED0[255];
    volatile uint32  DATA;                              /*!< GPIO Data                     */
    volatile uint32  DIR;                               /*!< GPIO Direction                */
    volatile uint32  IS;                                /*!< GPIO Interrupt Sense          */
    volatile uint32  IBE;                               /*!< GPIO Interrupt Both Edges     */
    volatile uint32  IEV;                               /*!< GPIO Interrupt Event          */
    volatile uint32  IM;                                /*!< GPIO Interrupt Mask           */
    volatile uint32  RIS;                               /*!< GPIO Raw Interrupt Status     */
    volatile uint32  MIS;                               /*!< GPIO Masked Interrupt Status  */
    volatile uint32  ICR;                               /*!< GPIO Interrupt Clear          */
    volatile uint32  AFSEL;                             /*!< GPIO Alternate Function Select*/
    volatile uint32  RESERVED1[55];
    volatile uint32  DR2R;                              /*!< GPIO 2-mA Drive Select        */
    volatile uint32  DR4R;                              /*!< GPIO 4-mA Drive Select        */
    volatile uint32  DR8R;                              /*!< GPIO 8-mA Drive Select        */
    volatile uint32  ODR;                               /*!< GPIO Open Drain Select        */
    volatile uint32  PUR;                               /*!< GPIO Pull-Up Select           */
    volatile uint32  PDR;                               /*!< GPIO Pull-Down Select         */
    volatile uint32  SLR;                               /*!< GPIO Slew Rate Control Select */
    volatile uint32  DEN;                               /*!< GPIO Digital Enable           */
    volatile uint32  LOCK;                              /*!< GPIO Lock                     */
    volatile uint32  CR;                                /*!< GPIO Commit                   */
    volatile uint32  AMSEL;                             /*!< GPIO Analog Mode Select       */
    volatile uint32  PCTL;                              /*!< GPIO Port Control             */
    volatile uint32  ADCCTL;                            /*!< GPIO ADC Control              */
    volatile uint32  DMACTL;                            /*!< GPIO DMA Control              */
}GPIO_MemoryMapType;

/*define SYSCTL*/
#define SYSCTL    ((volatile SYSCTL_MemoryMapType *) SYSCTL_BASE)

/*define GPIOA*/
#define GPIOA_AHB ((volatile GPIO_MemoryMapType   *)(GPIOA_AHB_BASE))
#define GPIOA_APB ((volatile GPIO_MemoryMapType   *)(GPIOA_APB_BASE))

/*define GPIOB*/
#define GPIOB_AHB ((volatile GPIO_MemoryMapType   *)(GPIOB_AHB_BASE))
#define GPIOB_APB ((volatile GPIO_MemoryMapType   *)(GPIOB_APB_BASE))

/*define GPIOC*/
#define GPIOC_AHB ((volatile GPIO_MemoryMapType   *)(GPIOC_AHB_BASE))
#define GPIOC_APB ((volatile GPIO_MemoryMapType   *)(GPIOC_APB_BASE))

/*define GPIOD*/
#define GPIOD_AHB ((volatile GPIO_MemoryMapType   *)(GPIOD_AHB_BASE))
#define GPIOD_APB ((volatile GPIO_MemoryMapType   *)(GPIOD_APB_BASE))

/*define GPIOE*/
#define GPIOE_AHB ((volatile GPIO_MemoryMapType   *)(GPIOE_AHB_BASE))
#define GPIOE_APB ((volatile GPIO_MemoryMapType   *)(GPIOE_APB_BASE))

/*define GPIOF*/
#define GPIOF_AHB ((volatile GPIO_MemoryMapType   *)(GPIOF_AHB_BASE))
#define GPIOF_APB ((volatile GPIO_MemoryMapType   *)(GPIOF_APB_BASE))
#endif /* MCAL_GPIO_GPIO_REGISTER_H_ */
