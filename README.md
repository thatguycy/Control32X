# Control32X
This is a basic UI System build on SquareLine Studio with LVGL for the ESP32-S2, more specifically my WT-86-32-3ZW1. It should work with ESP32 or ESP32-S2 however you'll need to compile it yourself and change the target chip in platformio.ini

## How to Compile
To compile you will need [PlatformIO Core (CLI)](https://docs.platformio.org/en/stable/core/index.html#piocore) and you need PIO added to your path. If you are porting to another chip, change the chip type in platformio.ini. At the current time, if you want network functionality you need to edit src/main.cpp and find the lines on wireless login information and change them accordingly. This is a temporary fix as seen there will be options in the settings to do it.

1. Clone the Repo by using `git clone https://github.com/thatguycy/Control32X.git`
2. Path into the root of the installed directory
3. With your ESP32 plugged in (USB or UART) and in flash mode, run `pio run --target upload --environment WT_86_32_3ZW1`
4. Restart your chip.

## Fastest Way to Install
The fastest way to install, however is not recommended as it will be with stock settings, and with no customization, is to flash the .bin with [ESPTools](https://github.com/espressif/esptool). To do this, install ESPTools and the latest WT_86_32_3ZW1-X.X.X-ESP32-S2.bin file (or extract firmware.bin from WT_86_32_3ZW1-X.X.X-ESP32-S2.zip (not recommended) and flash it using `esptool.py --port <COM PORT> erase_flash` then `esptool.py --port <COM PORT> write_flash 0x0 WT_86_32_3ZW1-X.X.X-ESP32-S2.bin --verify> making sure that X.X.X is replaced with your version (includes -beta).

## Functionality
Currently, this is more of a proof of concept, however it will become fully functional as progression occurs. The only functional piece of UI is the reboot button, WiFi Features and One Output, which is labelled as "Main Light" and operates pin 6, which is GPIO41 on the WT-86-32-3ZW1, which links the the backbox relay. This is all customizable if you compile the source yourself.

## Screenshots
![image](https://user-images.githubusercontent.com/33783071/225415165-20ed01f3-18ef-40f7-a462-c514cadb3698.png)
![image](https://user-images.githubusercontent.com/33783071/225415203-59e2b0fc-9349-472d-abb1-9f6ab34873d7.png)
![image](https://user-images.githubusercontent.com/33783071/225415247-6dccb85b-6361-44a7-babc-619f1f6afea1.png)
