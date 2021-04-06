
/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : tcpip_middleware.c
**     Project     : lwip_mpc5748g
**     Processor   : MPC5748G_176
**     Component   : tcpip
**     Version     : Component SDK_S32_PA_15, Driver 01.00, CPU db: 3.00.000
**     Repository  : SDK_S32_PA_15
**     Compiler    : GNU C Compiler
**     Date/Time   : 2020-11-11, 13:02, # CodeGen: 0
**
**     Copyright 1997 - 2015 Freescale Semiconductor, Inc. 
**     Copyright 2016-2017 NXP 
**     All Rights Reserved.
**     
**     THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
**     IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
**     OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
**     IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
**     INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
**     SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
**     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
**     STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
**     IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
**     THE POSSIBILITY OF SUCH DAMAGE.
** ###################################################################*/
/*!
** @file tcpip_middleware.c
** @version 01.00
*/         
/*!
**  @addtogroup tcpip_middleware_module tcpip_middleware module documentation
**  @{
*/         

#include "netifcfg.h"

#ifndef LWIP_MAC_ADDR_BASE_0
#define LWIP_MAC_ADDR_BASE_0              0x22,0x33,0x44,0x55,0x66,0x77
#endif /* LWIP_MAC_ADDR_BASE_0 */

#ifndef LWIP_NETIF_HOSTNAME_TEXT_0
#define LWIP_NETIF_HOSTNAME_TEXT_0        ("tcpipBoard1")
#endif /* LWIP_NETIF_HOSTNAME_TEXT_0 */

#ifndef IF_NAME_0
#define IF_NAME_0                         'i','1'
#endif /* IF_NAME_0 */


/* Each netif configuration */
netif_custom_t netifCfg_0 = {
    .num = 0,
    .hwaddr = { LWIP_MAC_ADDR_BASE_0 },
    .has_dhcp = true,
    .has_auto_ip = false,
    .ip_addr = { 192,168,0,200 },
    .netmask = { 255,255,255,0 },
    .gw = { 192,168,0,1 },
    .hostname = LWIP_NETIF_HOSTNAME_TEXT_0,
    .name = { IF_NAME_0 },
    .has_IPv6 = true
};


/* Array of netif configurations */
netif_custom_t *netif_cfg[] = {
        &netifCfg_0,
};

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.1 [05.21]
**     for the NXP C55 series of microcontrollers.
**
** ###################################################################
*/


