### Library to control an E-Paper [Waveshare 1.54 inch V2](https://www.waveshare.com/wiki/1.54inch_e-Paper_Module)  through the ESP-IDF build pipeline
This library is based on the work of [Martin](https://github.com/martinberlin) in
[cale-idf](https://github.com/martinberlin/cale-idf).
It represents a specific restructure of the base repository that is solely aimed to be working with the specific E-Paper 
model, to be used in one of my larger ESP-32 projects (link will follow).

Successfully tested with the [az-delivery-devkit-v4 board](https://www.az-delivery.de/en/products/esp32-developmentboard),
[pio link](https://docs.platformio.org/en/latest/boards/espressif32/az-delivery-devkit-v4.html#board-espressif32-az-delivery-devkit-v4)

### Example platformio.ini
```bash
[env:az-delivery-devkit-v4]
platform = espressif32
board = az-delivery-devkit-v4
framework = espidf
monitor_speed = 115200
upload_speed = 115200
upload_port = /dev/ttyUSB0
monitor_port = /dev/ttyUSB0
lib_deps = git@github.com:SimonKufeld/epaper.git
build_flags = -Wno-missing-field-initializers
              -Wno-error=unused-const-variable
              -Wno-unused-const-variable
```
### Build binary and flash onto controller (and monitor logging)
With platformio installed, copy **examples/ball.cpp** into **src/** folder and run command:

```bash
pio run -t upload -t monitor -e "az-delivery-devkit-v4"
```