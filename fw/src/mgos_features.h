/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

#ifndef CS_FW_SRC_MGOS_FEATURES_H_
#define CS_FW_SRC_MGOS_FEATURES_H_

#ifndef MGOS_ENABLE_BITBANG
#define MGOS_ENABLE_BITBANG 0
#endif

#ifndef MGOS_ENABLE_DEBUG_UDP
#define MGOS_ENABLE_DEBUG_UDP 0
#endif

#ifndef MGOS_ENABLE_I2C
#define MGOS_ENABLE_I2C 0
#endif

#ifndef MGOS_ENABLE_I2C_GPIO
#define MGOS_ENABLE_I2C_GPIO 0
#endif

#ifndef MGOS_ENABLE_SPI
#define MGOS_ENABLE_SPI 0
#endif

#ifndef MGOS_ENABLE_SPI_GPIO
#define MGOS_ENABLE_SPI_GPIO 0
#endif

#ifndef MGOS_ENABLE_SYS_SERVICE
#define MGOS_ENABLE_SYS_SERVICE 0
#endif

#ifndef MGOS_ENABLE_FILE_UPLOAD
#define MGOS_ENABLE_FILE_UPLOAD 0
#endif

#ifndef MGOS_ENABLE_MDNS
#define MGOS_ENABLE_MDNS 0
#endif

#ifndef MGOS_ENABLE_ONEWIRE
#define MGOS_ENABLE_ONEWIRE 0
#endif

#ifndef MGOS_ENABLE_SNTP
#define MGOS_ENABLE_SNTP 0
#endif

#ifndef MGOS_ENABLE_UPDATER
#define MGOS_ENABLE_UPDATER 0
#endif

#ifndef MGOS_ENABLE_WEB_CONFIG
#define MGOS_ENABLE_WEB_CONFIG 0
#endif

#ifndef MGOS_ENABLE_WIFI
#define MGOS_ENABLE_WIFI 0
#endif

#ifndef MGOS_PROMPT_DISABLE_ECHO
#define MGOS_PROMPT_DISABLE_ECHO 0
#endif

#ifndef MGOS_ENABLE_HTTP_SERVER
#define MGOS_ENABLE_HTTP_SERVER 1
#endif

#ifndef MGOS_ENABLE_TUNNEL
#define MGOS_ENABLE_TUNNEL 0
#endif

#endif /* CS_FW_SRC_MGOS_FEATURES_H_ */
