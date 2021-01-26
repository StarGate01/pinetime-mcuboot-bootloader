#ifndef PINETIME_RUST_MYNEWT_VERSION_H
#define PINETIME_RUST_MYNEWT_VERSION_H

#define PINETIME_BOOTLOADER_VERSION_MAJOR 1u
#define PINETIME_BOOTLOADER_VERSION_MINOR 0u
#define PINETIME_BOOTLOADER_VERSION_PATCH 0u
#define PINETIME_BOOTLOADER_VERSION ((PINETIME_BOOTLOADER_VERSION_MAJOR << 16u) | (PINETIME_BOOTLOADER_VERSION_MINOR << 8u) | (PINETIME_BOOTLOADER_VERSION_PATCH))

void pinetime_set_version(void);

#endif