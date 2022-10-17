# Arduino Library for SIM7020x

Simplify, specialize TinyGSM for SIM7020 (NB-IoT)

Base on: https://github.com/vshymanskyy/TinyGSM

## Hardware

**Module SIM7020x** from SIMCOM. Make sure you insert 4G sim correctly and the sim has sufficient 4G data, then connect these pin to the MCU: Vin, GND, RST, TX, RX, and also the antenna.

Any **microcontroller** that Arduino supports.

## Library

**PubSubClient**: Download from Arduino IDE Library manager.

**TinyGsmClient**: Download from Arduino IDE Library manager, make sure the library version support SIM7020x, if not, you can use .zip library in this repo.

## In code configuration

For simplest program, you only need to work with _configure.h_

Firstly, configure hardware profile, include debug serial, nbiot serial and reset pin. If your board doesn't have enough serial for debug and nbiot, you can use software serial in _SoftwareSerial.h_

Secondly (most important), configure NB-IoT profile.

```
#define APN "twm.nbiot" //outside mainland China
#define BAND 3
//#define APN "internet.iot" //for mainland China
//#define BAND 8
```

BAND: search for 4G and NB-IoT band in your country ([Viet Nam](https://pivietnam.com.vn/gioi-thieu-ve-narowband-iotnb-iot-giai-phap-iot-cho-mang-dien-rong-cong-suat-thap-lpwan-dang-duoc-thu-nghiem-va-trien-khai-tren-the-gioi-pivietnam-com-vn.html): B3 for NB-IoT)

Finally, settings for MQTT connection: broker address, port, username, password, topic,...
