#define WIFI_WIDTH  30
#define WIFI_HEIGHT 30

const unsigned char WIFI_ON[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00,
   0x00, 0x7f, 0xf8, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x07, 0xc0, 0x0f, 0x80, 0x0f, 0x00, 0x03, 0xc0,
   0x1c, 0x07, 0x80, 0xe0, 0x18, 0x3f, 0xf0, 0x60, 0x00, 0xff, 0xfc, 0x00, 0x01, 0xe0, 0x1e, 0x00,
   0x03, 0x80, 0x07, 0x00, 0x01, 0x0f, 0xc2, 0x00, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x78, 0x78, 0x00,
   0x00, 0x60, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x07, 0x80, 0x00,
   0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char WIFI_OFF[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x80,
   0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x07, 0x00, 0x00, 0x0f, 0xce, 0x00, 0x00, 0x7f, 0xfc, 0x00,
   0x01, 0xff, 0xfb, 0x00, 0x07, 0xc0, 0x3b, 0x80, 0x0f, 0x00, 0x71, 0xe0, 0x1c, 0x07, 0xe0, 0xf0,
   0x38, 0x3f, 0xd0, 0x70, 0x00, 0xff, 0xbc, 0x00, 0x01, 0xe7, 0x1e, 0x00, 0x03, 0x87, 0x07, 0x00,
   0x03, 0x0e, 0xc3, 0x00, 0x00, 0x1d, 0xf0, 0x00, 0x00, 0x78, 0xf8, 0x00, 0x00, 0x70, 0x18, 0x00,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0xe3, 0x80, 0x00, 0x01, 0xc7, 0x80, 0x00, 0x03, 0x87, 0x80, 0x00,
   0x07, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};