# usb-serial

Simple Arduino Project for Vim.

## Prerequisites

- `arduino`: `sudo pacman -S arduino arduino-avr-core arduino-cli` (See Arch Wiki)
- `arduino-mk`: `yay -S arduino-mk` (See Arch Wiki)
- `compiledb`: generating `compile_commands.json`

## build

```sh
compiledb make
```

## upload

```sh
make raw_upload
```

If this command fails due to permission, try `sudo chmod 666 /dev/ttyACM0` (or `/dev/ttyUSB0`).
