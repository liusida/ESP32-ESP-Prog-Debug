# ESP32-ESP-Prog-Debug

## Hardware

![Connection Overview](./images/Connection-overview.jpg)
*Fig. 1 Connection Overview*

![USB-Computer](./images/Connection-USB-Computer.jpg)
*Fig. 2 Connect USB cable to the Computer.*

![USB-ESP-Prog-JTAG](./images/Connection-USB-ESP-Prog-JTAG.jpg)
*Fig. 3 Connect the other end of the USB cable to ESP-Prog board, and use wires to connect the JTAG interface.*

![ESP-Prog JTAG](./images/ESP_Prog_JTAG_pins.png)
*Fig. 4 JTAG pins on ESP-Prog.*

Fig. 4 is from the ESP-Prog Guide:
https://docs.espressif.com/projects/esp-iot-solution/en/latest/hw-reference/ESP-Prog_guide.html

![JTAG-ESP32](./images/Connection-JTAG-ESP32.jpg)
*Fig. 5 JTAG wires connected to the ESP32 dev board.*

![JTAG-ESP32-back](./images/Connection-JTAG-ESP32-back.jpg)
*Fig. 6 JTAG wires connected to the ESP32 dev board. (Back view)*

Connections:

| JTAG Signal | Default ESP32 GPIO Pin |
|-------------|---------------|
| TMS         | GPIO14        |
| TDI         | GPIO12        |
| TCK         | GPIO13        |
| TDO         | GPIO15        |

This pin map is from: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/jtag-debugging/configure-ft2232h-jtag.html

![ESP32-board](./images/ESP32-board.png)
*Fig. 7 ESP32 dev board pins.*

My ESP32 board is a third-party dev board. I bought it from a Taobao store called TOUGLESY. The pin description in Fig.7 is from the Taobao page.

## Serial Print and Monitor

### Option A: another USB cable

If you also want Serial printing (which I assume you do), connect another USB cable from computer directly to ESP32 dev board.
![USB-ESP32](./images/Connection-Serial-Monitor-USB.jpg)
*Fig. 8.1 Overview after adding another USB cable (yellow) for Serial Monitor and Uploading.*

### Option B: Connect TX,RX between ESP32-Prog and ESP32

![Connect TX/RX between ESP32-Prog and ESP32](./images/Connection-TXRX.jpg)
*Fig 8.2 TX/RX UART connections between ESP32-Prog and ESP32.*

![Program Interface on ESP32-Prog](./images/ESP_Prog_Program.png)
*Fig 8.3 TX/RX UART on ESP32-Prog Program Interface.*

Note: Here `ESP_TXD` means you should connect this pin to `TXD` on ESP32. Don't connect it to `RXD`, or you'll get errors like:

```
Polling target esp32.cpu0 failed, trying to reexamine
Error: Unexpected OCD_ID = ffffffff
Examination failed, GDB will be halted. Polling again in 100ms
```

## Software

### USB driver

![Zadig](./images/jtag-usb-configuration-zadig.jpg)
*Fig. 9 For Windows, use Zadig to change Driver of "Dual RS232-HS (Interface 0)" to WinUSB.*

Fig. 9 is from: https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/jtag-debugging/configure-ft2232h-jtag.html

Zadig can be downloaded from: https://zadig.akeo.ie/

### VS Code + PlatformIO

Two main files:
```
./platform.ini
./src/main.cpp
```

If you want to find out which COM port your USB cable is using, look at the plug icon with the text `Auto` in VS Code's bottom status bar`. Clicking it will give you a list of COM ports, and you can easily guess the right one if there's only one USB cable plugged into the computer.

### Serial UART port
`monitor_port` and `upload_port` in `platformio.ini` should be modified accordingly.

In Option A (Fig. 8.1), I am using COM10 for the yellow cable both for Serial printing and uploading.

In Option B (Fig. 8.2), I am using COM16 for the white cable.

## Debugging Screenshot

F5 to start debugging.

![Debugging Screenshot](./images/debug.png)
*Fig. 10 Debugging Screenshot.*