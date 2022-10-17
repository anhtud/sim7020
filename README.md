# Arduino Library for SIM7020

Base on: https://github.com/vshymanskyy/TinyGSM

## Hardware

-   SIM7020: Insert 4G sim (sufficient 4G data), and antenna
-   Any MCU
-   Require SIM7020 pin connection: Vin (3V3), GND, RST, TX, RX

## Library

-   PubSubClient
-   TinyGsmClient with TinyGsmClientSim7020

## In code configuration

-   Hardware: Debug serial, NBIoT serial, reset pin
-   NBIoT profile

```
#define APN "twm.nbiot"
#define BAND 3
//#define APN "internet.iot"
//#define BAND 8
```

APN: internet.iot for mainland china, twn.nbiot for the rest.

BAND: search for 4G and NBIoT band in your country (Viet Nam: B3)

-   MQTT Profile: IP, username, address, port,...
