#ifndef __GRAPHIC_H__
#define __GRAPHIC_H__

#include <stdint.h>
struct imgInfo {
  uint8_t width;
  uint8_t height;
  uint16_t dataSize;
  const uint8_t* data;
};

static const uint8_t bootLogoRle[] = {
        0x78, 0x1, 0xee, 0x3, 0xec, 0x5, 0xea, 0x7, 0xe8, 0x9, 0xe6, 0xb,
        0xe5, 0xc, 0xe3, 0xe, 0xe1, 0x10, 0xdf, 0x12, 0xdd, 0x14, 0xdb, 0x16,
        0xd9, 0x18, 0xd7, 0x19, 0xd6, 0x1b, 0xd4, 0x1d, 0xd2, 0x1f, 0xd0, 0x21,
        0xce, 0x23, 0xcc, 0x25, 0xca, 0x27, 0xc8, 0x29, 0xc6, 0x2b, 0xc4, 0x2d,
        0xc2, 0x2f, 0xc0, 0x31, 0xbf, 0x32, 0xbd, 0x34, 0xbb, 0x36, 0xb9, 0x38,
        0xb7, 0x39, 0xba, 0x34, 0xbe, 0x2f, 0xc3, 0x2b, 0xc8, 0x25, 0xa7, 0x2,
        0x24, 0x21, 0x23, 0x1, 0x85, 0x4, 0x25, 0x1c, 0x22, 0x4, 0x85, 0x6,
        0x25, 0x17, 0x23, 0x7, 0x83, 0x9, 0x26, 0x12, 0x23, 0x9, 0x83, 0xc,
        0x25, 0xd, 0x24, 0xb, 0x83, 0xe, 0x26, 0x8, 0x24, 0xe, 0x81, 0x11,
        0x26, 0x3, 0x24, 0x11, 0x81, 0x13, 0x49, 0x13, 0x81, 0x16, 0x44, 0x16,
        0x7f, 0x19, 0x40, 0x18, 0x7f, 0x1b, 0x3b, 0x1b, 0x7f, 0x1d, 0x37, 0x1e,
        0x7d, 0x20, 0x33, 0x20, 0x7d, 0x23, 0x2e, 0x23, 0x7b, 0x26, 0x29, 0x26,
        0x7b, 0x25, 0x2c, 0x24, 0x7b, 0x23, 0x30, 0x23, 0x79, 0x22, 0x34, 0x21,
        0x79, 0x1f, 0x39, 0x1f, 0x79, 0x1d, 0x3d, 0x1e, 0x77, 0x1c, 0x1f, 0x2,
        0x20, 0x1c, 0x77, 0x1a, 0x1f, 0x6, 0x20, 0x1a, 0x77, 0x18, 0x1f, 0xa,
        0x21, 0x18, 0x75, 0x16, 0x20, 0xf, 0x20, 0x16, 0x75, 0x14, 0x20, 0x13,
        0x20, 0x14, 0x75, 0x12, 0x20, 0x17, 0x20, 0x13, 0x73, 0x11, 0x1f, 0x1c,
        0x20, 0x11, 0x73, 0xf, 0x1f, 0x20, 0x21, 0xe, 0x73, 0xd, 0x1f, 0x25,
        0x20, 0xd, 0x71, 0xc, 0x1f, 0x29, 0x20, 0xb, 0x71, 0x9, 0x1f, 0x2e,
        0x20, 0x9, 0x71, 0x7, 0x1f, 0x32, 0x20, 0x8, 0x6f, 0x6, 0x1f, 0x36,
        0x20, 0x6, 0x6f, 0x4, 0x1f, 0x3b, 0x1f, 0x4, 0x6f, 0x2, 0x1f, 0x3f,
        0x20, 0x2, 0x6d, 0x1, 0x1e, 0x44, 0xaa, 0x48, 0xa6, 0x4c, 0xa2, 0x51,
        0x9d, 0x55, 0x99, 0x59, 0x94, 0x5e, 0x90, 0x62, 0x8c, 0x67, 0x87, 0x6b,
        0x83, 0x6f, 0x7e, 0x74, 0x7a, 0x78, 0x76, 0x7d, 0x71, 0x81, 0x6d, 0x85,
        0x6b, 0x85, 0x6d, 0x81, 0x50, 0x2, 0x1f, 0x7c, 0x21, 0x1, 0x31, 0x4,
        0x1f, 0x78, 0x21, 0x3, 0x31, 0x6, 0x20, 0x73, 0x21, 0x5, 0x31, 0x9,
        0x1f, 0x6f, 0x20, 0x8, 0x31, 0xb, 0x1f, 0x6b, 0x20, 0xa, 0x31, 0xd,
        0x1f, 0x66, 0x21, 0xc, 0x31, 0xf, 0x1f, 0x62, 0x21, 0xe, 0x31, 0x12,
        0x1e, 0x5e, 0x20, 0x11, 0x31, 0x14, 0x1f, 0x59, 0x20, 0x13, 0x31, 0x16,
        0x1f, 0x55, 0x20, 0x15, 0x31, 0x18, 0x1f, 0x50, 0x20, 0x18, 0x31, 0x1b,
        0x1e, 0x4c, 0x20, 0x1a, 0x31, 0x1d, 0x1f, 0x47, 0x20, 0x1c, 0x31, 0x1f,
        0x1f, 0x43, 0x20, 0x1e, 0x31, 0x22, 0x1e, 0x3f, 0x1f, 0x21, 0x31, 0x24,
        0x1e, 0x3a, 0x20, 0x23, 0x31, 0x26, 0x1e, 0x36, 0x20, 0x25, 0x31, 0x28,
        0x1f, 0x31, 0x20, 0x27, 0x31, 0x2b, 0x1e, 0x2d, 0x1f, 0x2a, 0x31, 0x2d,
        0x1e, 0x29, 0x1f, 0x2c, 0x31, 0x2f, 0x1e, 0x24, 0x20, 0x2e, 0x31, 0x31,
        0x1e, 0x20, 0x1f, 0x31, 0x31, 0x34, 0x1d, 0x1c, 0x1f, 0x33, 0x31, 0x36,
        0x1e, 0x17, 0x1f, 0x35, 0x31, 0x38, 0x1e, 0x13, 0x1f, 0x37, 0x31, 0x3b,
        0x1d, 0xe, 0x1f, 0x3a, 0x31, 0x3d, 0x1d, 0xa, 0x1f, 0x3c, 0x31, 0x3f,
        0x1d, 0x6, 0x1f, 0x3e, 0x31, 0x41, 0x1e, 0x1, 0x1f, 0x40, 0x31, 0x44,
        0x38, 0x43, 0x31, 0x46, 0x34, 0x45, 0x31, 0x48, 0x30, 0x47, 0x31, 0x4a,
        0x2b, 0x4a, 0x31, 0x4c, 0x28, 0x4b, 0x31, 0x4a, 0x2c, 0x49, 0x31, 0x48,
        0x30, 0x47, 0x31, 0x45, 0x36, 0x44, 0x31, 0x43, 0x3a, 0x42, 0x31, 0x41,
        0x3e, 0x40, 0x31, 0x3f, 0x20, 0x1, 0x21, 0x3e, 0x31, 0x3c, 0x20, 0x7,
        0x21, 0x3b, 0x31, 0x3a, 0x20, 0xb, 0x21, 0x39, 0x31, 0x38, 0x20, 0xf,
        0x21, 0x37, 0x31, 0x35, 0x21, 0x13, 0x21, 0x35, 0x31, 0x33, 0x21, 0x17,
        0x22, 0x32, 0x31, 0x31, 0x20, 0x1d, 0x21, 0x30, 0x31, 0x2f, 0x20, 0x21,
        0x21, 0x2e, 0x31, 0x2c, 0x21, 0x25, 0x22, 0x2b, 0x31, 0x2a, 0x21, 0x29,
        0x22, 0x29, 0x31, 0x28, 0x21, 0x2d, 0x22, 0x27, 0x31, 0x26, 0x20, 0x33,
        0x21, 0x25, 0x31, 0x23, 0x21, 0x37, 0x22, 0x22, 0x31, 0x21, 0x21, 0x3b,
        0x22, 0x20, 0x31, 0x1f, 0x21, 0x3f, 0x22, 0x1e, 0x31, 0x1c, 0x22, 0x43,
        0x22, 0x1c, 0x31, 0x1a, 0x22, 0x48, 0x22, 0x19, 0x31, 0x18, 0x21, 0x4d,
        0x22, 0x17, 0x31, 0x16, 0x21, 0x51, 0x22, 0x15, 0x31, 0x13, 0x22, 0x55,
        0x23, 0x12, 0x31, 0x11, 0x22, 0x59, 0x23, 0x10, 0x31, 0xf, 0x22, 0x5e,
        0x22, 0xe, 0x31, 0xd, 0x21, 0x63, 0x22, 0xc, 0x31, 0xa, 0x22, 0x67,
        0x23, 0x9, 0x31, 0x8, 0x22, 0x6b, 0x23, 0x7, 0x31, 0x6, 0x22, 0x6f,
        0x23, 0x5, 0x31, 0x4, 0x22, 0x74, 0x22, 0x3, 0x31, 0x1, 0x22, 0x79,
        0x75, 0x7d, 0x71, 0x81, 0x6d, 0x85, 0x69, 0x8a, 0x63, 0x8f, 0x5f, 0x93,
        0x5b, 0x97, 0x58, 0x99, 0x5a, 0x93, 0x26, 0x1, 0x11, 0x3, 0x24, 0x8f,
        0x25, 0x3, 0x12, 0x5, 0x24, 0x8b, 0x25, 0x5, 0x13, 0x6, 0x24, 0x87,
        0x25, 0x6, 0x14, 0x9, 0x23, 0x83, 0x24, 0x9, 0x15, 0xa, 0x24, 0x7d,
        0x25, 0xa, 0x16, 0xd, 0x23, 0x79, 0x24, 0xd, 0x17, 0xe, 0x23, 0x75,
        0x24, 0xe, 0x18, 0x10, 0x23, 0x71, 0x24, 0x10, 0x18, 0x13, 0x22, 0x6d,
        0x23, 0x13, 0x19, 0x14, 0x23, 0x68, 0x23, 0x14, 0x1a, 0x17, 0x22, 0x63,
        0x23, 0x17, 0x1b, 0x18, 0x22, 0x5f, 0x23, 0x18, 0x1c, 0x1a, 0x22, 0x5b,
        0x23, 0x1a, 0x1d, 0x1c, 0x21, 0x57, 0x22, 0x1c, 0x1e, 0x1e, 0x22, 0x51,
        0x23, 0x1e, 0x1e, 0x20, 0x22, 0x4d, 0x23, 0x20, 0x1f, 0x22, 0x21, 0x49,
        0x22, 0x22, 0x20, 0x24, 0x21, 0x45, 0x22, 0x24, 0x21, 0x26, 0x20, 0x41,
        0x21, 0x26, 0x22, 0x28, 0x21, 0x3c, 0x21, 0x28, 0x23, 0x29, 0x21, 0x37,
        0x22, 0x29, 0x24, 0x2c, 0x20, 0x33, 0x21, 0x2c, 0x25, 0x2d, 0x20, 0x2f,
        0x21, 0x2d, 0x26, 0x30, 0x1f, 0x2b, 0x21, 0x2f, 0x26, 0x32, 0x1f, 0x27,
        0x20, 0x32, 0x27, 0x33, 0x20, 0x21, 0x21, 0x33, 0x28, 0x36, 0x1f, 0x1d,
        0x20, 0x36, 0x29, 0x37, 0x1f, 0x19, 0x20, 0x37, 0x2a, 0x39, 0x1f, 0x15,
        0x20, 0x39, 0x2b, 0x3b, 0x1f, 0x10, 0x1f, 0x3b, 0x2c, 0x3d, 0x1f, 0xb,
        0x20, 0x3d, 0x2c, 0x40, 0x1e, 0x7, 0x1f, 0x40, 0x2d, 0x41, 0x1e, 0x3,
        0x1f, 0x41, 0x2e, 0x43, 0x3c, 0x43, 0x2f, 0x45, 0x36, 0x45, 0x30, 0x47,
        0x32, 0x47, 0x31, 0x48, 0x2e, 0x48, 0x32, 0x4b, 0x28, 0x4b, 0x33, 0x49,
        0x2a, 0x49, 0x34, 0x47, 0x2e, 0x47, 0x34, 0x45, 0x33, 0x44, 0x35, 0x41,
        0x38, 0x41, 0x36, 0x3f, 0x3c, 0x3f, 0x37, 0x3c, 0x40, 0x3c, 0x38, 0x3a,
        0x20, 0x2, 0x22, 0x3a, 0x39, 0x36, 0x21, 0x6, 0x23, 0x36, 0x3a, 0x34,
        0x21, 0xb, 0x22, 0x34, 0x3b, 0x31, 0x21, 0xf, 0x22, 0x31, 0x3c, 0x2f,
        0x21, 0x13, 0x22, 0x2f, 0x3c, 0x2c, 0x21, 0x18, 0x23, 0x2c, 0x3d, 0x29,
        0x21, 0x1c, 0x23, 0x29, 0x3e, 0x27, 0x21, 0x21, 0x22, 0x27, 0x3f, 0x24,
        0x21, 0x25, 0x22, 0x24, 0x40, 0x21, 0x22, 0x29, 0x23, 0x21, 0x41, 0x1e,
        0x21, 0x2e, 0x23, 0x1e, 0x42, 0x1c, 0x21, 0x32, 0x23, 0x1c, 0x42, 0x1a,
        0x21, 0x36, 0x23, 0x1a, 0x43, 0x16, 0x22, 0x3b, 0x23, 0x16, 0x44, 0x14,
        0x22, 0x3f, 0x23, 0x14, 0x45, 0x11, 0x22, 0x43, 0x23, 0x11, 0x46, 0xf,
        0x21, 0x48, 0x23, 0xf, 0x47, 0xb, 0x22, 0x4c, 0x24, 0xb, 0x48, 0x9,
        0x22, 0x51, 0x23, 0x9, 0x49, 0x6, 0x22, 0x55, 0x23, 0x6, 0x4a, 0x4,
        0x22, 0x59, 0x23, 0x4, 0x4a, 0x1, 0x22, 0x5e, 0x24, 0x1, 0x6b, 0x63,
        0x8b, 0x67, 0x87, 0x6b, 0x82, 0x70, 0x7e, 0x74, 0x7a, 0x78, 0x76, 0x7d,
        0x71, 0x81, 0x6c, 0x86, 0x6b, 0x84, 0x37,
};

struct imgInfo bootLogoInfo = {
  240,
  214,
  1086,
  bootLogoRle
};

// /home/jf/nrf52/Pinetime/tools/rle_encode.py  /home/jf/nrf52/pinetime-rust-mynewt/libs/pinetime_boot/src/version-1.2.3.png --c
static const uint8_t versionRle[] = {
        0x59, 0x56, 0x2, 0x1, 0x3, 0xc, 0x3, 0xa, 0x1, 0x38, 0x2, 0x1,
        0x3, 0xc, 0x3, 0x9, 0x2, 0x14, 0x6, 0x13, 0x6, 0x5, 0x2, 0x2,
        0x3, 0xb, 0x2, 0xa, 0x2, 0x13, 0x9, 0xf, 0xa, 0x3, 0x2, 0x2,
        0x3, 0xa, 0x3, 0x9, 0x3, 0x12, 0x4, 0x3, 0x4, 0xd, 0x5, 0x2,
        0x5, 0x2, 0x2, 0x2, 0x3, 0xa, 0x3, 0x6, 0x6, 0x11, 0x3, 0x6,
        0x4, 0xc, 0x3, 0x6, 0x3, 0x2, 0x2, 0x3, 0x3, 0x9, 0x2, 0x6,
        0x7, 0x11, 0x3, 0x7, 0x3, 0xc, 0x2, 0x8, 0x2, 0x2, 0x2, 0x3,
        0x3, 0x8, 0x3, 0x6, 0x7, 0x11, 0x2, 0x9, 0x2, 0xb, 0x3, 0x8,
        0x3, 0x1, 0x2, 0x4, 0x2, 0x8, 0x3, 0xb, 0x2, 0x11, 0x2, 0x9,
        0x2, 0xb, 0x3, 0x8, 0x2, 0x2, 0x2, 0x4, 0x3, 0x7, 0x2, 0xc,
        0x2, 0x1b, 0x3, 0x15, 0x3, 0x2, 0x2, 0x4, 0x3, 0x6, 0x3, 0xc,
        0x2, 0x1b, 0x3, 0x14, 0x4, 0x2, 0x2, 0x5, 0x3, 0x5, 0x3, 0xc,
        0x2, 0x1a, 0x3, 0x12, 0x5, 0x4, 0x2, 0x5, 0x3, 0x5, 0x2, 0xd,
        0x2, 0x19, 0x4, 0x12, 0x6, 0x3, 0x2, 0x5, 0x3, 0x4, 0x3, 0xd,
        0x2, 0x17, 0x4, 0x18, 0x3, 0x2, 0x2, 0x6, 0x3, 0x3, 0x3, 0xd,
        0x2, 0x15, 0x5, 0x1a, 0x3, 0x1, 0x2, 0x6, 0x3, 0x3, 0x2, 0xe,
        0x2, 0x13, 0x5, 0x1c, 0x3, 0x1, 0x2, 0x6, 0x3, 0x2, 0x3, 0xe,
        0x2, 0x12, 0x4, 0x13, 0x3, 0x8, 0x3, 0x1, 0x2, 0x7, 0x3, 0x1,
        0x3, 0xe, 0x2, 0x12, 0x3, 0x14, 0x3, 0x8, 0x3, 0x1, 0x2, 0x7,
        0x3, 0x1, 0x2, 0xf, 0x2, 0x11, 0x3, 0x15, 0x3, 0x8, 0x3, 0x1,
        0x2, 0x7, 0x6, 0xf, 0x2, 0x11, 0x2, 0x17, 0x3, 0x6, 0x4, 0x1,
        0x2, 0x8, 0x5, 0xf, 0x2, 0xa, 0x3, 0x3, 0xe, 0x5, 0x3, 0x4,
        0x5, 0x2, 0x5, 0x2, 0x2, 0x8, 0x4, 0x10, 0x2, 0xa, 0x3, 0x3,
        0xe, 0x5, 0x3, 0x5, 0xa, 0x3, 0x2, 0x9, 0x3, 0x10, 0x2, 0xa,
        0x3, 0x3, 0xe, 0x5, 0x3, 0x7, 0x6, 0x5, 0x2, 0x56, 0x59,

};

struct imgInfo versionInfo = {
  88,
  26,
  299,
  versionRle
};

#endif