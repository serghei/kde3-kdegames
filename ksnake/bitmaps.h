#define zero_width 7
#define zero_height 9
static unsigned char zero_bits[] = {
   0x1e, 0x33, 0x3b, 0x3b, 0x33, 0x37, 0x37, 0x33, 0x1e};

#define one_width 7
#define one_height 9
static unsigned char one_bits[] = {
   0x18, 0x1c, 0x1f, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18};

#define two_width 7
#define two_height 9
static unsigned char two_bits[] = {
   0x1e, 0x3f, 0x33, 0x30, 0x18, 0x0c, 0x06, 0x03, 0x3f};

#define three_width 7
#define three_height 9
static unsigned char three_bits[] = {
   0x1e, 0x3f, 0x33, 0x30, 0x1c, 0x30, 0x33, 0x33, 0x1e};

#define four_width 7
#define four_height 9
static unsigned char four_bits[] = {
   0x06, 0x06, 0x36, 0x36, 0x36, 0x33, 0x7f, 0x30, 0x30};

#define five_width 7
#define five_height 9
static unsigned char five_bits[] = {
   0x3f, 0x03, 0x03, 0x03, 0x1f, 0x30, 0x30, 0x18, 0x0f};

#define six_width 7
#define six_height 9
static unsigned char six_bits[] = {
   0x1c, 0x0c, 0x06, 0x1f, 0x33, 0x33, 0x33, 0x33, 0x1e};

#define seven_width 7
#define seven_height 9
static unsigned char seven_bits[] = {
   0x7f, 0x60, 0x30, 0x30, 0x18, 0x18, 0x0c, 0x0c, 0x0c};

#define eight_width 7
#define eight_height 9
static unsigned char eight_bits[] = {
   0x1e, 0x33, 0x33, 0x37, 0x1e, 0x3b, 0x33, 0x33, 0x1e};

#define nine_width 7
#define nine_height 9
static unsigned char nine_bits[] = {
   0x1e, 0x33, 0x33, 0x33, 0x33, 0x3e, 0x18, 0x0c, 0x0e};

#define intro_width 35
#define intro_height 35
static unsigned char intro_bits[] = {
   0xff, 0xff, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00,
   0x00, 0x00, 0x04, 0x71, 0x00, 0x00, 0x00, 0x04, 0xf9, 0x00, 0xc0, 0x00,
   0x04, 0x8d, 0x01, 0xc0, 0x00, 0x04, 0x8d, 0x01, 0xc0, 0xe4, 0x04, 0x8d,
   0x0d, 0xce, 0xf2, 0x05, 0x0d, 0x7c, 0xdb, 0x9a, 0x05, 0x19, 0x6c, 0xdb,
   0x99, 0x05, 0x31, 0x6c, 0xd8, 0x98, 0x05, 0x61, 0x6c, 0xde, 0xf9, 0x05,
   0xc1, 0x6c, 0xdb, 0x12, 0x04, 0x8d, 0x6d, 0xdf, 0xe6, 0x05, 0xf9, 0x00,
   0xd8, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0xf9,
   0x00, 0x00, 0x00, 0x04, 0x19, 0x03, 0x00, 0x00, 0x04, 0x19, 0x02, 0x00,
   0x00, 0x04, 0x19, 0x06, 0x00, 0x38, 0x04, 0x19, 0x06, 0x00, 0x7c, 0x04,
   0x19, 0xe3, 0x70, 0x66, 0x04, 0x99, 0xb1, 0xd9, 0x66, 0x04, 0xf9, 0xb0,
   0xd9, 0x66, 0x04, 0x99, 0x81, 0xd9, 0x7e, 0x04, 0x19, 0xe1, 0x19, 0x04,
   0x04, 0x19, 0xb2, 0x99, 0x78, 0x04, 0x19, 0xf0, 0x71, 0x00, 0x04, 0x01,
   0x80, 0x01, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00,
   0x00, 0x04, 0xff, 0xff, 0xff, 0xff, 0x07};

#define level_width 35
#define level_height 35
static unsigned char level_bits[] = {
   0xff, 0xff, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00,
   0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x0d, 0x00, 0x00, 0xf0,
   0x04, 0x0d, 0x00, 0x00, 0xc0, 0x04, 0x0d, 0x00, 0x00, 0xc0, 0x04, 0x0d,
   0x9e, 0x99, 0xc7, 0x04, 0x0d, 0xb3, 0xd9, 0xcc, 0x04, 0x0d, 0xb3, 0xd9,
   0xcc, 0x04, 0x0d, 0xbf, 0xd9, 0xcf, 0x04, 0x0d, 0x83, 0xd9, 0xc0, 0x04,
   0x0d, 0x03, 0xcf, 0xc0, 0x04, 0x7d, 0x1e, 0x86, 0xf7, 0x05, 0x01, 0x00,
   0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01,
   0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00,
   0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04,
   0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00,
   0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01,
   0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00,
   0x00, 0x04, 0xff, 0xff, 0xff, 0xff, 0x07};

#define gameover_width 35
#define gameover_height 35
static unsigned char gameover_bits[] = {
   0xff, 0xff, 0xff, 0xff, 0x07, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00,
   0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x79, 0x00, 0x00, 0x00, 0x04, 0xcd,
   0x00, 0x00, 0x00, 0x04, 0xcd, 0x78, 0xfc, 0x78, 0x04, 0x0d, 0xc0, 0xac,
   0xcd, 0x04, 0x0d, 0xc0, 0xac, 0xcd, 0x04, 0xed, 0xf8, 0xac, 0xfd, 0x04,
   0xcd, 0xcc, 0xac, 0x0d, 0x04, 0xcd, 0xcc, 0xac, 0x0d, 0x04, 0xf9, 0xf8,
   0x8c, 0x79, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0xf1,
   0x00, 0x00, 0x00, 0x04, 0x99, 0x01, 0x00, 0x00, 0x04, 0x99, 0x99, 0xf1,
   0x98, 0x05, 0x99, 0x99, 0x99, 0xd9, 0x05, 0x99, 0x99, 0x99, 0x39, 0x04,
   0x99, 0x99, 0xf9, 0x19, 0x04, 0x99, 0x99, 0x19, 0x18, 0x04, 0x99, 0xf1,
   0x18, 0x18, 0x04, 0xf1, 0x60, 0xf0, 0x18, 0x04, 0x01, 0x00, 0x00, 0x00,
   0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01,
   0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00,
   0x00, 0x04, 0xff, 0xff, 0xff, 0xff, 0x07};
