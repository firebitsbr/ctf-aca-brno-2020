#define mem_width 110
#define mem_height 50
static unsigned char mem_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
   0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff,
   0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00,
   0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc,
   0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f,
   0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07,
   0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00,
   0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0,
   0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff,
   0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00,
   0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc,
   0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f,
   0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07,
   0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00,
   0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0,
   0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff,
   0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00,
   0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc,
   0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f,
   0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00, 0xfc, 0x07,
   0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0, 0x7f, 0x00,
   0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0xe0, 0xff, 0x03, 0xe0,
   0x7f, 0x00, 0xfc, 0x07, 0xc0, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfe,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0x07, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0x07, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x07, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xe0, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
   0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00,
   0xe0, 0x00, 0xe0, 0x00, 0x11, 0x42, 0x8c, 0x10, 0x21, 0xf8, 0x10, 0x42,
   0x84, 0x10, 0xe0, 0x00, 0xe0, 0x80, 0x31, 0x62, 0x8c, 0x18, 0x23, 0xf8,
   0x30, 0x46, 0x8c, 0x10, 0xe0, 0x00, 0xe0, 0x80, 0x31, 0x62, 0x8c, 0x18,
   0x23, 0xf8, 0x30, 0x46, 0x8c, 0x10, 0xe0, 0x00, 0xe0, 0x80, 0x31, 0x62,
   0x8c, 0x18, 0x23, 0xf8, 0x30, 0x46, 0x8c, 0x10, 0xe0, 0x00, 0xe0, 0x80,
   0x31, 0x62, 0x8c, 0x18, 0x23, 0xf8, 0x30, 0x66, 0x8c, 0x19, 0xe0, 0x00,
   0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0x00, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00 };
