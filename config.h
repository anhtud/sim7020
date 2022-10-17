#ifndef _CONFIG_H
#define _CONFIG_H

#define DEBUG_MODE true

#define TINY_GSM_MODEM_SIM7020

#define debugSerial Serial
#define TINY_GSM_DEBUG debugSerial

/* Set serial for AT commands (to the module) */
//#define nbiotSerial Serial1

// Set reset pin
#define RESET_PIN D5

/* See all AT commands, if wanted */
// #define DUMP_AT_COMMANDS

/* ---nbiot config--- */
 #define APN "twm.nbiot"
 #define BAND 3
// #define APN "twm.nbiot"
// #define BAND 28
//#define APN "internet.iot"
//#define BAND 8

/* ---mqtt config--- */
#define BROKER "171.244.173.204"

#define TEST_TOPIC "labiot/esp8266"
#define MQTT_USERNAME "admin"
#define MQTT_PASSWORD "admin"
#define MQTT_PORT 1884
#endif /* _CONFIG_H */
