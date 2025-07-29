# ESP32-ESP-Prog-Debug

## Hardware

![Connection Overview](./images/Connection-overview.jpg)
*Fig. 1 Connection Overview*

![USB-Computer](./images/Connection-USB-Computer.jpg)
*Fig. 2 Connect USB cable to the Computer.*

![USB-ESP-Prog-JTAG](./images/Connection-USB-ESP-Prog-JTAG.jpg)
*Fig. 2 Connect the other end of USB cable to ESP Prog board, use wires to connect JTAG interface.*

![ESP-Prog JTAG](./images/ESP_Prog_JTAG_pins.png)
*Fig. 3 JTAG pins on ESP-Prog*

Fig. 3 is from ESP-Prog Guide:
https://docs.espressif.com/projects/esp-iot-solution/en/latest/hw-reference/ESP-Prog_guide.html

![JTAG-ESP32](./images/Connection-JTAG-ESP32.jpg)
*Fig. 4 JTAG wires connect to ESP32 dev board.*

![JTAG-ESP32-back](./images/Connection-JTAG-ESP32-back.jpg)
*Fig. 5 JTAG wires connect to ESP32 dev board. (Back)*

![ESP32-board](./images/ESP32-board.png)
*Fig. 6 ESP32 dev board pins.*

My ESP32 board is a third-party dev board. The brand is TOUGLESY. I bought it from Taobao, and Fig. 6, the pin description, is from the Taobao page.

## Software

VS Code + PlatformIO

Two main files:
```
./platform.ini
./src/main.cpp
```

## Debugging Screenshot

F5 to start debugging.

![Debugging Screenshot](./images/debug.png)
