# rp2040-devcontainer-template

Dev container for Raspberry Pi Pico development

Complete preconfigured Raspberry Pi Pico RP2040 development evnironment.

Installed tools and source code:

- Pico C/C++ SDK
- pico-examples
- arm-none-eabi ARM GNU toolchain
- picotool
- openocd

Just add your project files and you can start building and debugging right away.

For exact building procedures please refer to 
[Getting started with Raspberry Pi Pico](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)
document.

## Automatic devcontainer build and start

Just open this folder in VSCode and click "Reopen in Container".

The first start will take a while as the container needs to be built.

## Manual container management

Install [pyinvoke](www.pyinvoke.org): `pip install invoke`

### Build

```bash
invoke pico-dev-build
```

### Run

```bash
invoke pico-dev-run
```

## Troubleshooting

Seems that Docker Desktop may interfere with correct USB and serial port mapping into Docker container. 
**Please make sure that Docker Desktop is not running prior to using Pico dev container.**
