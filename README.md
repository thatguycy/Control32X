# Control32X
This is a basic UI System build on SquareLine Studio with LVGL for the ESP32-S2, more specifically my WT-86-32-3ZW1. It should work with ESP32 or ESP32-S2 however you'll need to compile it yourself and change the target chip in platformio.ini

## How to Compile
To compile you will need [PlatformIO Core (CLI)](https://docs.platformio.org/en/stable/core/index.html#piocore) and you need PIO added to your path. If you are porting to another chip, change the chip type in platformio.ini. At the current time, if you want network functionality you need to edit src/main.cpp and find the lines on wireless login information and change them accordingly. This is a temporary fix as seen there will be options in the settings to do it.

1. Clone the Repo by using `git clone https://github.com/thatguycy/Control32X.git`
2. Path into the root of the installed directory
3. With your ESP32 plugged in (USB or UART) and in flash mode, run `pio run --target upload --environment WT_86_32_3ZW1`
4. Restart your chip.
