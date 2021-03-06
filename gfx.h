// Character set (ASCII, but misses out first 31 non-printable characters as they're not needed by game)
const uint8_t charDef[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 0
0x18,0x3c,0x3c,0x3c,0x3c,0x3c,0x18,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00, // 1
0x66,0x66,0x66,0x24,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 2
0x66,0x66,0x66,0xff,0xff,0x66,0x66,0xff,0xff,0x66,0x66,0x66,0x00,0x00,0x18,0x18, // 3
0x3c,0x7e,0xe7,0x07,0x0e,0x1c,0x30,0x60,0xe0,0xe7,0x7e,0x3c,0x18,0x18,0x00,0x07, // 4
0x6d,0x6d,0x37,0x30,0x18,0x18,0x0c,0x0c,0xe6,0xb6,0xb3,0xe3,0x00,0x00,0x00,0x00, // 5
0x38,0x6c,0xc6,0x6c,0x38,0x0c,0xe6,0xc3,0x43,0x63,0xfe,0xbc,0x00,0x00,0x00,0x00, // 6
0x10,0x08,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 7
0x30,0x18,0x0c,0x04,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x06,0x04,0x0c,0x18,0x30, // 8
0x06,0x0c,0x18,0x10,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x10,0x18,0x0c,0x06, // 9
0x00,0x00,0x00,0xc3,0x66,0x3c,0xff,0x3c,0x66,0xc3,0x00,0x00,0x00,0x00,0x00,0x00, // 10
0x00,0x18,0x18,0x18,0xff,0xff,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 11
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x10,0x08,0x00,0x00, // 12
0x00,0x00,0x00,0x00,0x7e,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 13
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00, // 14
0xc0,0xc0,0x60,0x60,0x30,0x30,0x18,0x18,0x0c,0x0c,0x06,0x06,0x03,0x03,0x00,0x00, // 15
0x3c,0x7e,0xe7,0xc3,0xc3,0xdb,0xdb,0xc3,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 16
0x18,0x1e,0x1e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00, // 17
0x3c,0x7e,0xe7,0xc0,0xe0,0x70,0x38,0x1c,0x0e,0x07,0xff,0xff,0x00,0x00,0x00,0x00, // 18
0x3c,0x7e,0xe7,0xc0,0x60,0x38,0x78,0xe0,0xc0,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 19
0x06,0x66,0x66,0x66,0x66,0x63,0xff,0xff,0x60,0x60,0x60,0x60,0x00,0x00,0x00,0x00, // 20
0xff,0xff,0x03,0x03,0x3f,0x7f,0xe0,0xc0,0xc0,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 21
0x3c,0x7e,0xe7,0x03,0x03,0x3b,0x7f,0xe7,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 22
0xfe,0xfe,0xc0,0x60,0x30,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00, // 23
0x3c,0x7e,0xe7,0xc3,0x66,0x3c,0x7e,0xe7,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 24
0x3c,0x7e,0xe7,0xc3,0xe7,0xfe,0xdc,0xc0,0xc0,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 25
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00, // 26
0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x18,0x18,0x10,0x08,0x00,0x00, // 27
0x00,0x60,0x30,0x18,0x0c,0x06,0x03,0x06,0x0c,0x18,0x30,0x60,0x00,0x00,0x00,0x00, // 28
0x00,0x00,0x00,0x3e,0x3e,0x00,0x00,0x3e,0x3e,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 29
0x00,0x06,0x0c,0x18,0x30,0x60,0xc0,0x60,0x30,0x18,0x0c,0x06,0x00,0x00,0x00,0x00, // 30
0x3c,0x7e,0xe7,0xc3,0xe0,0x70,0x38,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00, // 31
0x3c,0x7e,0xc3,0xc3,0xf3,0xfb,0xcb,0xcb,0xfb,0xf3,0x03,0xfe,0xfc,0x00,0x00,0x00, // 32
0x18,0x3c,0x66,0xc3,0xc3,0xc3,0xc3,0xff,0xff,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 33
0x3f,0x7f,0xc3,0xc3,0xc3,0x7f,0x7f,0xc3,0xc3,0xc3,0x7f,0x3f,0x00,0x00,0x00,0x00, // 34
0x3c,0x7e,0xe7,0x03,0x03,0x03,0x03,0x03,0x03,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 35
0x3f,0x7f,0xe3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe3,0x7f,0x3f,0x00,0x00,0x00,0x00, // 36
0xff,0xff,0x03,0x03,0x03,0x3f,0x3f,0x03,0x03,0x03,0xff,0xff,0x00,0x00,0x00,0x00, // 37
0xff,0xff,0x03,0x03,0x03,0x3f,0x3f,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00, // 38
0x3c,0x7e,0xe7,0x03,0x03,0x03,0xf3,0xf3,0xc3,0xe7,0xfe,0xdc,0x00,0x00,0x00,0x00, // 39
0xc3,0xc3,0xc3,0xc3,0xc3,0xff,0xff,0xc3,0xc3,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 40
0x7e,0x7e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x7e,0x00,0x00,0x00,0x00, // 41
0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xc0,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 42
0x63,0x73,0x3b,0x1f,0x0f,0x07,0x0f,0x1f,0x3b,0x73,0xe3,0xc3,0x00,0x00,0x00,0x00, // 43
0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03,0xff,0xff,0x00,0x00,0x00,0x00, // 44
0xc3,0xc3,0xe7,0xe7,0xff,0xff,0xdb,0xdb,0xc3,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 45
0xc3,0xc7,0xc7,0xcf,0xcf,0xdb,0xdb,0xf3,0xf3,0xe3,0xe3,0xc3,0x00,0x00,0x00,0x00, // 46
0x3c,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 47
0x3f,0x7f,0xe3,0xc3,0xc3,0xe3,0x7f,0x3f,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00, // 48
0x3c,0x7e,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xf3,0xf7,0xfe,0xdc,0x00,0x00,0x00,0x00, // 49
0x3f,0x7f,0xe3,0xc3,0xc3,0xe3,0x7f,0x3f,0x63,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 50
0x3c,0x7e,0xe7,0x07,0x0e,0x1c,0x30,0x60,0xe0,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 51
0xff,0xff,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00, // 52
0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 53
0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0x66,0x3c,0x18,0x00,0x00,0x00,0x00, // 54
0xc3,0xc3,0xc3,0xc3,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xff,0x66,0x00,0x00,0x00,0x00, // 55
0xc3,0xc3,0x66,0x66,0x3c,0x18,0x18,0x3c,0x66,0x66,0xc3,0xc3,0x00,0x00,0x00,0x00, // 56
0xc3,0xc3,0xc3,0xc3,0xc3,0x66,0x3c,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00, // 57
0xff,0xff,0xc0,0xe0,0x70,0x38,0x1c,0x0e,0x07,0x03,0xff,0xff,0x00,0x00,0x00,0x00, // 58
0x3c,0x3c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x3c,0x3c,0x00, // 59
0x03,0x03,0x06,0x06,0x0c,0x0c,0x18,0x18,0x30,0x30,0x60,0x60,0xc0,0xc0,0x00,0x00, // 60
0x3c,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3c,0x3c,0x00, // 61
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 62
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x00, // 63
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, // 64
0x00,0x00,0x00,0x3e,0x7e,0xc0,0xfe,0xff,0xc3,0xc3,0xff,0xfe,0x00,0x00,0x00,0x00, // 65
0x03,0x03,0x03,0x3b,0x7f,0xe7,0xc3,0xc3,0xc3,0xe7,0x7f,0x3b,0x00,0x00,0x00,0x00, // 66
0x00,0x00,0x00,0x3c,0x7e,0xe7,0x03,0x03,0x03,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 67
0xc0,0xc0,0xc0,0xdc,0xfe,0xe7,0xc3,0xc3,0xc3,0xe7,0xfe,0xdc,0x00,0x00,0x00,0x00, // 68
0x00,0x00,0x00,0x3c,0x7e,0xe7,0xc3,0xff,0xff,0x07,0x7e,0x3c,0x00,0x00,0x00,0x00, // 69
0xf8,0xfc,0x0c,0x0c,0xff,0xff,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x00,0x00,0x00,0x00, // 70
0x00,0x00,0x00,0x3c,0x7e,0xe7,0xc3,0xc3,0xc3,0xe7,0xfe,0xdc,0xc0,0xe0,0x7e,0x3e, // 71
0x03,0x03,0x03,0x3b,0x7f,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 72
0x18,0x18,0x00,0x1e,0x1e,0x18,0x18,0x18,0x18,0x18,0x7e,0x7e,0x00,0x00,0x00,0x00, // 73
0x30,0x30,0x00,0x3c,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x38,0x1e,0x0e, // 74
0x03,0x03,0x03,0x63,0x33,0x1b,0x0f,0x07,0x1f,0x33,0x63,0xc3,0x00,0x00,0x00,0x00, // 75
0x1e,0x1e,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x7e,0x7e,0x00,0x00,0x00,0x00, // 76
0x00,0x00,0x00,0x5b,0xff,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0xdb,0x00,0x00,0x00,0x00, // 77
0x00,0x00,0x00,0x3b,0x7f,0xe7,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0x00,0x00,0x00,0x00, // 78
0x00,0x00,0x00,0x3c,0x7e,0xe7,0xc3,0xc3,0xc3,0xe7,0x7e,0x3c,0x00,0x00,0x00,0x00, // 79
0x00,0x00,0x00,0x3b,0x7f,0xe7,0xc3,0xc3,0xc3,0xe7,0x7f,0x3b,0x03,0x03,0x03,0x03, // 80
0x00,0x00,0x00,0xdc,0xfe,0xe7,0xc3,0xc3,0xc3,0xe7,0xfe,0xdc,0xc0,0xc0,0xc0,0xc0, // 81
0x00,0x00,0x00,0xfb,0xff,0x0f,0x07,0x03,0x03,0x03,0x03,0x03,0x00,0x00,0x00,0x00, // 82
0x00,0x00,0x00,0x3c,0x7e,0xc3,0x07,0x7e,0xe0,0xc3,0x7e,0x3c,0x00,0x00,0x00,0x00, // 83
0x0c,0x0c,0x0c,0x7e,0x7e,0x0c,0x0c,0x0c,0x0c,0x0c,0x7c,0x78,0x00,0x00,0x00,0x00, // 84
0x00,0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0xfe,0xdc,0x00,0x00,0x00,0x00, // 85
0x00,0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0x66,0x3c,0x18,0x00,0x00,0x00,0x00, // 86
0x00,0x00,0x00,0xc3,0xc3,0xc3,0xdb,0xdb,0xff,0xff,0xe7,0x42,0x00,0x00,0x00,0x00, // 87
0x00,0x00,0x00,0xc3,0xe7,0x7e,0x3c,0x18,0x3c,0x7e,0xe7,0xc3,0x00,0x00,0x00,0x00, // 88
0x00,0x00,0x00,0xc3,0xc3,0xc3,0xc3,0xc3,0xc3,0xe7,0xfe,0xdc,0xc0,0xc0,0x7e,0x3e, // 89
0x00,0x00,0x00,0xff,0xff,0x60,0x30,0x18,0x0c,0x06,0xff,0xff,0x00,0x00,0x00,0x00, // 90
0x70,0x18,0x0c,0x0c,0x0c,0x0c,0x0c,0x06,0x0c,0x0c,0x0c,0x0c,0x0c,0x18,0x70,0x00, // 91 {
0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x00,0x00,0x00, // 92 |
0x0e,0x18,0x30,0x30,0x30,0x30,0x30,0x60,0x30,0x30,0x30,0x30,0x30,0x18,0x0e,0x00, // 93 }
0x00,0x00,0xc0,0x80,0x00,0xfc,0xfc,0xfc,0xfc,0xfc,0xfc,0x00,0x80,0xc0,0x00,0x00, // 94 right arrow back
0x00,0x00,0x01,0x03,0x07,0x0f,0x1f,0x3f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0x00,0x00, // 95 right arrow front
0x00,0x00,0x03,0x01,0x00,0x3f,0x3f,0x3f,0x3f,0x3f,0x3f,0x00,0x01,0x03,0x00,0x00, // 96 left arrow back
0x00,0x00,0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfc,0xf8,0xf0,0xe0,0xc0,0x80,0x00,0x00, // 97 left arrow front
0x78,0x78,0x7b,0x79,0x78,0x7f,0x7f,0x7f,0x7f,0x7f,0x3f,0x00,0x01,0x03,0x00,0x00, // 98 return gfx bottom
0x30,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78,0x78, // 99 return gfx top
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff, // 100 block

};

const uint8_t titleGfx[] = {
0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0x7f,
0xff,0xff,0xff,0xff,0xff,0xc1,0xff,0xbf,0xff,0xff,0xff,0xff,0x1f,0x00,0x00,0xfe,
0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,
0xff,0xff,0xff,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xfe,0xff,0xff,
0xff,0xff,0xfc,0xff,0xff,0xff,0x3f,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,
0xff,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,
0xfc,0xff,0xff,0xff,0x1f,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0x7f,0xc0,
0xff,0xbf,0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,
0xff,0xff,0x1f,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0x3f,0xc0,0xff,0xbf,
0xff,0xff,0xff,0xff,0x07,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
0x0f,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0x3f,0xc0,0xff,0xbf,0xff,0xff,
0xff,0xff,0x03,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x0f,0xff,
0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,0x1f,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,
0x03,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x07,0xff,0xff,0xff,
0xff,0x7f,0xff,0xff,0xff,0xff,0x1f,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x01,0x00,
0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0x7f,
0xff,0xff,0xff,0xff,0x0f,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xfe,
0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,0x03,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,
0xff,0xff,0x0f,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x01,0x00,0x00,0xfe,0xff,0xff,
0xff,0xff,0xfc,0xff,0xff,0xff,0x01,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xff,0xff,
0x07,0xc0,0xff,0xbf,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,
0xfc,0xff,0xff,0xff,0x01,0xff,0xff,0xff,0xff,0x7f,0xff,0xff,0xc0,0xff,0x03,0xc0,
0xff,0xbf,0xff,0xff,0xff,0xff,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,
0xff,0xff,0x00,0xff,0xff,0xff,0xff,0x7f,0xff,0x7f,0xc0,0xff,0x03,0xc0,0xff,0xbf,
0xff,0xff,0xff,0x7f,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0xff,
0x00,0xff,0xff,0xff,0xff,0x7f,0xff,0x7f,0xe0,0xff,0x01,0xc0,0xff,0xbf,0xff,0xff,
0x00,0x70,0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfd,0xff,0xff,0x7f,0x00,0xff,
0xff,0xff,0xff,0x7f,0xff,0x7f,0xf0,0xff,0x01,0xc0,0xff,0xbf,0xff,0xff,0x00,0x20,
0x00,0x00,0x00,0xfe,0xff,0xff,0xff,0xff,0xfc,0xff,0xff,0x3f,0x00,0xff,0xff,0xff,
0xff,0x7f,0xff,0x7f,0xf0,0xff,0x00,0xc0,0xff,0x9f,0xff,0xff,0x01,0x20,0x00,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0xf8,0x7f,0x00,0x00,0x00,0x00,0xff,0xff,0x01,0x00,0x00,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,
0xf8,0x7f,0x00,0xc0,0xff,0x1f,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfc,0x3f,
0x00,0xc0,0xff,0x3f,0xfe,0xff,0x03,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfc,0x3f,0x00,0xc0,
0xff,0x3f,0xfe,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfe,0x1f,0x00,0xc0,0xff,0x3f,
0xfc,0xff,0x07,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x03,0x00,
0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfe,0x0f,0x00,0xc0,0xff,0x3f,0xfc,0xff,
0x0f,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0x00,0x00,
0xf8,0xff,0x07,0x00,0xff,0xff,0xff,0x0f,0x00,0xc0,0xff,0x3f,0xf8,0xff,0x0f,0x00,
0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x7f,0x00,0x00,0xf8,0xff,
0x07,0x00,0xff,0xff,0xff,0xff,0x03,0xc0,0xff,0x3f,0xf8,0xff,0x1f,0x00,0x00,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x7f,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0xff,0xff,0x07,0xc0,0xff,0x3f,0xf0,0xff,0x1f,0x00,0x00,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x3f,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,
0xfe,0xff,0x07,0xc0,0xff,0x3f,0xf0,0xff,0x3f,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0xff,0x3f,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfe,0xff,
0x0f,0xc0,0xff,0x3f,0xe0,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0xff,0x1f,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfc,0xff,0x0f,0xc0,
0xff,0x3f,0xe0,0xff,0x7f,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0xff,0x1f,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xfc,0xff,0x1f,0xc0,0xff,0x3f,
0xc0,0xff,0xff,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x0f,
0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xf8,0xff,0x1f,0xc0,0xff,0x3f,0xc0,0xff,
0xff,0x00,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x0f,0x00,0x00,
0xf8,0xff,0x07,0x00,0xff,0x7f,0xf8,0xff,0x3f,0xc0,0xff,0x3f,0x80,0xff,0xff,0x01,
0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x07,0x00,0x00,0xf8,0xff,
0x07,0x00,0xff,0x7f,0xf0,0xff,0x3f,0xc0,0xff,0x3f,0x80,0xff,0xff,0x01,0x00,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x07,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0xf0,0xff,0x7f,0xc0,0xff,0x3f,0x00,0xff,0xff,0x03,0x00,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0x03,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,
0xe0,0xff,0x7f,0xc0,0xff,0x3f,0x00,0xff,0xff,0x03,0x00,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0xff,0x03,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xc0,0xff,
0xff,0xc0,0xff,0x3f,0x00,0xfe,0xff,0x07,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0xc0,0xff,0xff,0xc0,
0xff,0x3f,0x00,0xfe,0xff,0x07,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x80,0xff,0xff,0xc1,0xff,0x3f,
0x00,0xfc,0xff,0x0f,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,
0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x80,0xff,0xff,0xc3,0xff,0x3f,0x00,0xfc,
0xff,0x0f,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,
0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xff,0xff,0xc3,0xff,0x3f,0x00,0xf8,0xff,0x1f,
0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,
0x07,0x00,0xff,0x7f,0x00,0xff,0xff,0xc7,0xff,0x3f,0x00,0xf8,0xff,0x1f,0x00,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0x00,0xfe,0xff,0xc7,0xff,0x3f,0x00,0xf0,0xff,0x3f,0x00,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,
0x00,0xfe,0xff,0xcf,0xff,0x3f,0x00,0xf0,0xff,0x3f,0x00,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xfc,
0xff,0xcf,0xff,0x3f,0x00,0xe0,0xff,0x7f,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xfc,0xff,0xdf,
0xff,0x3f,0x00,0xe0,0xff,0x7f,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xf8,0xff,0xdf,0xff,0x3f,
0x00,0xc0,0xff,0xff,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,
0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xf8,0xff,0xbf,0xff,0x3f,0x00,0xc0,
0xff,0xff,0x00,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,
0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xf0,0xff,0xbf,0xff,0x3f,0x00,0x80,0xff,0xff,
0x01,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,
0x07,0x00,0xff,0x7f,0x00,0xf0,0xff,0x7f,0xff,0x3f,0x00,0x80,0xff,0xff,0x01,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0x00,0xe0,0xff,0x7f,0xff,0x3f,0x00,0x00,0xff,0xff,0x03,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,
0x00,0xe0,0xff,0xff,0xfe,0x3f,0x00,0x00,0xff,0xff,0x03,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xc0,
0xff,0xff,0xfe,0x3f,0x00,0x00,0xfe,0xff,0x07,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0xc0,0xff,0xff,
0xfd,0x3f,0x00,0x00,0xfe,0xff,0x07,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x80,0xff,0xff,0xfd,0x3f,
0x00,0x00,0xfc,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,
0x00,0x00,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x80,0xff,0xff,0xfb,0x3f,0x00,0x00,
0xfc,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,
0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0xff,0xff,0xfb,0xbf,0x00,0x00,0xf8,0xff,
0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,
0x07,0x00,0xff,0x7f,0x00,0x00,0xff,0xff,0xf7,0xbf,0x03,0x00,0xf8,0xff,0x0f,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0x01,0x00,0x00,0x00,0xf8,0xff,0x07,0x00,
0xff,0x7f,0x00,0x00,0xfe,0xff,0xf7,0xbf,0x07,0x00,0xf0,0xff,0x0f,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x01,0xf8,0xff,0x07,0x00,0xff,0x7f,
0x00,0x00,0xfe,0xff,0xef,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x03,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,
0xfc,0xff,0xef,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0xff,0xff,0xff,0x03,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0xfc,0xff,
0xdf,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0xff,0xff,0xff,0x07,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0xf8,0xff,0xdf,0xbf,
0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,
0xff,0x07,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0xf0,0xff,0xbf,0xbf,0xff,0xff,
0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x0f,
0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0xf0,0xff,0xbf,0xbf,0xff,0xff,0xff,0xff,
0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x1f,0xf8,0xff,
0x07,0x00,0xff,0x7f,0x00,0x00,0xe0,0xff,0x7f,0xbf,0xff,0xff,0xff,0xff,0x0f,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x1f,0xf8,0xff,0x07,0x00,
0xff,0x7f,0x00,0x00,0xe0,0xff,0x7f,0xbe,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,
0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x3f,0xf8,0xff,0x07,0x00,0xff,0x7f,
0x00,0x00,0xc0,0xff,0xff,0xbe,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,
0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0x3f,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,
0xc0,0xff,0xff,0xbc,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,
0xfc,0xff,0xff,0xff,0xff,0x7f,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0x80,0xff,
0xff,0xbd,0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,
0xff,0xff,0xff,0x7f,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0x80,0xff,0xff,0xbb,
0xff,0xff,0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,
0xff,0xff,0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0x00,0xff,0xff,0xbb,0xff,0xff,
0xff,0xff,0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,
0xf8,0xff,0x07,0x00,0xff,0x7f,0x00,0x00,0x00,0xff,0xff,0xb7,0xff,0xff,0xff,0xff,
0x0f,0x00,0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,
0x07,0x00,0xff,0x7f,0x00,0x00,0x00,0xfe,0xff,0xb7,0xff,0xff,0xff,0xff,0x0f,0x00,
0x00,0x00,0xe0,0xff,0x1f,0x00,0xfc,0xff,0xff,0xff,0xff,0xff,0xf9,0xff,0x07,0x00,
0xff,0x7f,0x00,0x00,0x00,0xfe,0xff,0xa7,0xff,0xff,0xff,0xff,0x0f,0x00,
};

const uint8_t wifiLogo[] = {
0x00,0x00,0xe0,0x07,0x38,0x1c,0x0e,0x70,0xc3,0xc3,0x79,0x9e,0x0c,0x30,0xc0,0x03,
0x70,0x0e,0x18,0x18,0x80,0x01,0xc0,0x03,0xc0,0x03,0x80,0x01,0,0,0,0
};

static const uint16_t block[] = {

// Background block at index 12x12x0
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,

// Blue block at index 12x12x1
0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,0xff05,
0xff05,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f02,0x1f00,
0xff05,0x1f02,0x1f02,0x1f02,0x5f0a,0x7f12,0x9f12,0x7f12,0x5f0a,0x1f02,0x1f02,0x1f00,
0xff05,0x1f02,0x1f02,0x7f12,0xdf22,0x1f2b,0x1f2b,0x1f2b,0xdf22,0x7f12,0x1f02,0x1f00,
0xff05,0x1f02,0x5f0a,0xdf22,0x3f33,0x9f43,0xbf43,0x9f43,0x3f33,0xdf22,0x5f0a,0x1f00,
0xff05,0x1f02,0x7f12,0x1f2b,0x9f43,0xff53,0x3f5c,0xff53,0x9f43,0x1f2b,0x7f12,0x1f00,
0xff05,0x1f02,0x9f12,0x1f2b,0xbf43,0x3f5c,0xbf74,0x3f5c,0xbf43,0x1f2b,0x9f12,0x1f00,
0xff05,0x1f02,0x7f12,0x1f2b,0x9f43,0xff53,0x3f5c,0xff53,0x9f43,0x1f2b,0x7f12,0x1f00,
0xff05,0x1f02,0x5f0a,0xdf22,0x3f33,0x9f43,0xbf43,0x9f43,0x3f33,0xdf22,0x5f0a,0x1f00,
0xff05,0x1f02,0x1f02,0x7f12,0xdf22,0x1f2b,0x1f2b,0x1f2b,0xdf22,0x7f12,0x1f02,0x1f00,
0xff05,0x1f02,0x1f02,0x1f02,0x5f0a,0x7f12,0x9f12,0x7f12,0x5f0a,0x1f02,0x1f02,0x1f00,
0xff05,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,0x1f00,

// Red block at index 12x12x2
0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,0x69fa,
0x69fa,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x00d8,0x0060,
0x69fa,0x00d8,0x00d8,0x00d8,0x82d8,0x03e1,0x23e1,0x03e1,0x82d8,0x00d8,0x00d8,0x0060,
0x69fa,0x00d8,0x00d8,0xc2d8,0x85e1,0x07e2,0x47ea,0x07e2,0x85e1,0xc2d8,0x00d8,0x0060,
0x69fa,0x00d8,0x82d8,0x85e1,0x68ea,0x2aeb,0x4bf3,0x2aeb,0x68ea,0x85e1,0x82d8,0x0060,
0x69fa,0x00d8,0x03e1,0x07e2,0x2aeb,0x0df4,0x6ff4,0x0df4,0x2aeb,0x07e2,0x03e1,0x0060,
0x69fa,0x00d8,0x23e1,0x47ea,0x4bf3,0x6ff4,0x93fd,0x6ff4,0x4bf3,0x47ea,0x23e1,0x0060,
0x69fa,0x00d8,0x03e1,0x07e2,0x2aeb,0x0df4,0x6ff4,0x0df4,0x2aeb,0x07e2,0x03e1,0x0060,
0x69fa,0x00d8,0x82d8,0x85e1,0x68ea,0x2aeb,0x4bf3,0x2aeb,0x68ea,0x85e1,0x82d8,0x0060,
0x69fa,0x00d8,0x00d8,0xc2d8,0x85e1,0x07e2,0x47ea,0x07e2,0x85e1,0xc2d8,0x00d8,0x0060,
0x69fa,0x00d8,0x00d8,0x00d8,0x82d8,0x03e1,0x23e1,0x03e1,0x82d8,0x00d8,0x00d8,0x0060,
0x69fa,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,0x0060,

// Green block at index 12x12x3
0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,0xe427,
0xe427,0x6404,0x6404,0x6404,0x6404,0x6404,0x6404,0x6404,0x6404,0x6404,0x6404,0x0002,
0xe427,0x6404,0x6404,0x6404,0xc514,0x061d,0x061d,0x061d,0xc514,0x6404,0x6404,0x0002,
0xe427,0x6404,0x6404,0xe514,0x672d,0xa835,0xc83d,0xa835,0x672d,0xe514,0x6404,0x0002,
0xe427,0x6404,0xc514,0x672d,0xe845,0x6a56,0x8a5e,0x6a56,0xe845,0x672d,0xc514,0x0002,
0xe427,0x6404,0x061d,0xa835,0x6a56,0xeb6e,0x4c7f,0xeb6e,0x6a56,0xa835,0x061d,0x0002,
0xe427,0x6404,0x061d,0xc83d,0x8a5e,0x4c7f,0xee97,0x4c7f,0x8a5e,0xc83d,0x061d,0x0002,
0xe427,0x6404,0x061d,0xa835,0x6a56,0xeb6e,0x4c7f,0xeb6e,0x6a56,0xa835,0x061d,0x0002,
0xe427,0x6404,0xc514,0x672d,0xe845,0x6a56,0x8a5e,0x6a56,0xe845,0x672d,0xc514,0x0002,
0xe427,0x6404,0x6404,0xe514,0x672d,0xa835,0xc83d,0xa835,0x672d,0xe514,0x6404,0x0002,
0xe427,0x6404,0x6404,0x6404,0xc514,0x061d,0x061d,0x061d,0xc514,0x6404,0x6404,0x0002,
0xe427,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,0x0002,

// Purple block at index 12x12x4
0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,0x7ffa,
0x7ffa,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x16b0,0x0840,
0x7ffa,0x16b0,0x16b0,0x16b0,0x97b8,0xd8c0,0xf8c0,0xd8c0,0x97b8,0x16b0,0x16b0,0x0840,
0x7ffa,0x16b0,0x16b0,0xb7b8,0x59c9,0xd9c9,0xfad1,0xd9c9,0x59c9,0xb7b8,0x16b0,0x0840,
0x7ffa,0x16b0,0x97b8,0x59c9,0x1ad2,0xbbda,0xfce2,0xbbda,0x1ad2,0x59c9,0x97b8,0x0840,
0x7ffa,0x16b0,0xd8c0,0xd9c9,0xbbda,0x7deb,0xdef3,0x7deb,0xbbda,0xd9c9,0xd8c0,0x0840,
0x7ffa,0x16b0,0xf8c0,0xfad1,0xfce2,0xdef3,0xdffc,0xdef3,0xfce2,0xfad1,0xf8c0,0x0840,
0x7ffa,0x16b0,0xd8c0,0xd9c9,0xbbda,0x7deb,0xdef3,0x7deb,0xbbda,0xd9c9,0xd8c0,0x0840,
0x7ffa,0x16b0,0x97b8,0x59c9,0x1ad2,0xbbda,0xfce2,0xbbda,0x1ad2,0x59c9,0x97b8,0x0840,
0x7ffa,0x16b0,0x16b0,0xb7b8,0x59c9,0xd9c9,0xfad1,0xd9c9,0x59c9,0xb7b8,0x16b0,0x0840,
0x7ffa,0x16b0,0x16b0,0x16b0,0x97b8,0xd8c0,0xf8c0,0xd8c0,0x97b8,0x16b0,0x16b0,0x0840,
0x7ffa,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,0x0840,

// Cyan block at index 12x12x5
0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,0xff77,
0xff77,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0xdb06,0x8801,
0xff77,0xdb06,0xdb06,0xdb06,0xfb16,0x1c1f,0x1c1f,0x1c1f,0xfb16,0xdb06,0xdb06,0x8801,
0xff77,0xdb06,0xdb06,0xfb16,0x3c2f,0x3c3f,0x5d3f,0x3c3f,0x3c2f,0xfb16,0xdb06,0x8801,
0xff77,0xdb06,0xfb16,0x3c2f,0x5d47,0x7d57,0x9e5f,0x7d57,0x5d47,0x3c2f,0xfb16,0x8801,
0xff77,0xdb06,0x1c1f,0x3c3f,0x7d57,0xbe6f,0xbe7f,0xbe6f,0x7d57,0x3c3f,0x1c1f,0x8801,
0xff77,0xdb06,0x1c1f,0x5d3f,0x9e5f,0xbe7f,0xff9f,0xbe7f,0x9e5f,0x5d3f,0x1c1f,0x8801,
0xff77,0xdb06,0x1c1f,0x3c3f,0x7d57,0xbe6f,0xbe7f,0xbe6f,0x7d57,0x3c3f,0x1c1f,0x8801,
0xff77,0xdb06,0xfb16,0x3c2f,0x5d47,0x7d57,0x9e5f,0x7d57,0x5d47,0x3c2f,0xfb16,0x8801,
0xff77,0xdb06,0xdb06,0xfb16,0x3c2f,0x3c3f,0x5d3f,0x3c3f,0x3c2f,0xfb16,0xdb06,0x8801,
0xff77,0xdb06,0xdb06,0xdb06,0xfb16,0x1c1f,0x1c1f,0x1c1f,0xfb16,0xdb06,0xdb06,0x8801,
0xff77,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,0x8801,

// Yellow block at index 12x12x6
0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,0xe9ff,
0xe9ff,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x44fe,0x60b1,
0xe9ff,0x44fe,0x44fe,0x44fe,0x66fe,0x87fe,0xa7fe,0x87fe,0x66fe,0x44fe,0x44fe,0x60b1,
0xe9ff,0x44fe,0x44fe,0x87fe,0xc8fe,0xeafe,0xeafe,0xeafe,0xc8fe,0x87fe,0x44fe,0x60b1,
0xe9ff,0x44fe,0x66fe,0xc8fe,0x0bff,0x2cff,0x4dff,0x2cff,0x0bff,0xc8fe,0x66fe,0x60b1,
0xe9ff,0x44fe,0x87fe,0xeafe,0x2cff,0x8fff,0xb0ff,0x8fff,0x2cff,0xeafe,0x87fe,0x60b1,
0xe9ff,0x44fe,0xa7fe,0xeafe,0x4dff,0xb0ff,0xf3ff,0xb0ff,0x4dff,0xeafe,0xa7fe,0x60b1,
0xe9ff,0x44fe,0x87fe,0xeafe,0x2cff,0x8fff,0xb0ff,0x8fff,0x2cff,0xeafe,0x87fe,0x60b1,
0xe9ff,0x44fe,0x66fe,0xc8fe,0x0bff,0x2cff,0x4dff,0x2cff,0x0bff,0xc8fe,0x66fe,0x60b1,
0xe9ff,0x44fe,0x44fe,0x87fe,0xc8fe,0xeafe,0xeafe,0xeafe,0xc8fe,0x87fe,0x44fe,0x60b1,
0xe9ff,0x44fe,0x44fe,0x44fe,0x66fe,0x87fe,0xa7fe,0x87fe,0x66fe,0x44fe,0x44fe,0x60b1,
0xe9ff,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,0x60b1,

// White  block at index 12x12x7
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0xd39c,0x8631,
0xffff,0xd39c,0xd39c,0xd39c,0xf39c,0x14a5,0x14a5,0x14a5,0xf39c,0xd39c,0xd39c,0x8631,
0xffff,0xd39c,0xd39c,0x14a5,0x34a5,0x75ad,0x75ad,0x75ad,0x34a5,0x14a5,0xd39c,0x8631,
0xffff,0xd39c,0xf39c,0x34a5,0x75ad,0xb6b5,0xd7bd,0xb6b5,0x75ad,0x34a5,0xf39c,0x8631,
0xffff,0xd39c,0x14a5,0x75ad,0xb6b5,0xf7bd,0x18c6,0xf7bd,0xb6b5,0x75ad,0x14a5,0x8631,
0xffff,0xd39c,0x14a5,0x75ad,0xd7bd,0x18c6,0x79ce,0x18c6,0xd7bd,0x75ad,0x14a5,0x8631,
0xffff,0xd39c,0x14a5,0x75ad,0xb6b5,0xf7bd,0x18c6,0xf7bd,0xb6b5,0x75ad,0x14a5,0x8631,
0xffff,0xd39c,0xf39c,0x34a5,0x75ad,0xb6b5,0xd7bd,0xb6b5,0x75ad,0x34a5,0xf39c,0x8631,
0xffff,0xd39c,0xd39c,0x14a5,0x34a5,0x75ad,0x75ad,0x75ad,0x34a5,0x14a5,0xd39c,0x8631,
0xffff,0xd39c,0xd39c,0xd39c,0xf39c,0x14a5,0x14a5,0x14a5,0xf39c,0xd39c,0xd39c,0x8631,
0xffff,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,

// Checkered block at index 12x12x8
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x8631,
0xffff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x8631,
0xffff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x8631,
0xffff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x8631,
0xffff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x8631,
0xffff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0x8631,
0xffff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0x8631,
0xffff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0x8631,
0xffff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0x8631,
0xffff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0xe0ff,0x00f8,0x00f8,0x00f8,0x00f8,0x00f8,0x8631,
0xffff,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,0x8631,

// Ghost piece at index 12x12x9
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xffff,
0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,0xffff,

};

const uint8_t bigNum[]={
  // 3
  B01111110,
  B11111111,
  B11000111,
  B00000111,
  B00001110,
  B00011100,
  B00001110,
  B00000111,
  B11000111,
  B11111111,
  B01111110,

  // 2
  B01111110,
  B11111111,
  B11000111,
  B00000111,
  B00000111,
  B00001110,
  B00011100,
  B00111000,
  B01110000,
  B11111111,
  B11111111,

  // 1
  B00011000,
  B00111000,
  B01111000,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B00111000,
  B11111110,
  B11111110,
};

const uint8_t bigChars[]={
  B11000011,  // W
  B11000011,
  B11011011,
  B11111111,
  B11111111,
  B11100111,
  B11000011,
  B10000001,
  
  B00000000,
  
  B00111100,  // I
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00111100,

  B00000000,

  B01000110,  // N
  B01100110,
  B01110110,
  B01111110,
  B01111110,
  B01101110,
  B01100110,
  B01100010,

  B00000000,
  
  B01000110,  // N
  B01100110,
  B01110110,
  B01111110,
  B01111110,
  B01101110,
  B01100110,
  B01100010,

  B00000000,

  B01111110,  // E
  B01111110,
  B01100000,
  B01111110,
  B01111110,
  B01100000,
  B01111110,
  B01111110,

  B00000000,

  B01111100,  // R
  B01111110,
  B01100110,
  B01101100,
  B01111000,
  B01111100,
  B01101110,
  B01100110,

  B00000000,

  B01100000,  // L
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01100000,
  B01111110,
  B01111110,

  B00000000,

  B00111100,  // O
  B01111110,
  B01100110,
  B01100110,
  B01100110,
  B01100110,
  B01111110,
  B00111100,

  B00000000,

  B00111100,  // S
  B01111110,
  B01100000,
  B01111100,
  B00111110,
  B00000110,
  B01111110,
  B00111100,

  B00000000,

  B01111110,  // E
  B01111110,
  B01100000,
  B01111110,
  B01111110,
  B01100000,
  B01111110,
  B01111110,

  B00000000,

  B01111100,  // R
  B01111110,
  B01100110,
  B01101100,
  B01111000,
  B01111100,
  B01101110,
  B01100110,

  B00000000,
  
};
