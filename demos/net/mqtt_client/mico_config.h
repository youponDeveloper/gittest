/**
******************************************************************************
* @file    mico_config.h 
* @author  Eshen Wang
* @version V1.0.0
* @date    16-Nov-2015
* @brief   This file provide constant definition and type declaration for MICO
*          system running.
******************************************************************************
*
*  The MIT License
*  Copyright (c) 2015 MXCHIP Inc.
*
*  Permission is hereby granted, free of charge, to any person obtaining a copy 
*  of this software and associated documentation files (the "Software"), to deal
*  in the Software without restriction, including without limitation the rights 
*  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
*  copies of the Software, and to permit persons to whom the Software is furnished
*  to do so, subject to the following conditions:
*
*  The above copyright notice and this permission notice shall be included in
*  all copies or substantial portions of the Software.
*
*  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
*  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
*  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
*  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
*  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR 
*  IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
******************************************************************************
*/

#pragma once

#define APP_INFO   "MQTT client Demo based on MICO OS"

#define FIRMWARE_REVISION   "MICO_MQTT_Client_1"
#define MANUFACTURER        "MXCHIP Inc."
#define SERIAL_NUMBER       "20151116"
#define PROTOCOL            "com.mxchip.mqtt"

/************************************************************************
 * Application thread stack size */
#define MICO_DEFAULT_APPLICATION_STACK_SIZE         (2048)

/************************************************************************
 * Enable wlan connection, start easylink configuration if no wlan settings are existed */
#define MICO_WLAN_CONNECTION_ENABLE

#define MICO_CONFIG_MODE CONFIG_MODE_EASYLINK

#define EasyLink_TimeOut                60000 /**< EasyLink timeout 60 seconds. */

#define EasyLink_ConnectWlan_Timeout    20000 /**< Connect to wlan after configured by easylink.
                                                   Restart easylink after timeout: 20 seconds. */

/************************************************************************
 * Device enter MFG mode if MICO settings are erased. */
//#define MFG_MODE_AUTO 

/************************************************************************
 * Command line interface */
#define MICO_CLI_ENABLE  

/************************************************************************
 * Add service _easylink._tcp._local. for discovery */
#define MICO_SYSTEM_DISCOVERY_ENABLE

/************************************************************************
 * Start a system monitor daemon, application can register some monitor  
 * points, If one of these points is not excuted in a predefined period, 
 * a watchdog reset will occur. */
#define MICO_SYSTEM_MONITOR_ENABLE

/************************************************************************
 * MiCO TCP server used for configuration and ota. */
#define MICO_CONFIG_SERVER_ENABLE
#define MICO_CONFIG_SERVER_PORT    8000

