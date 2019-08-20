#pragma once

namespace Images {

  #ifndef DEBUG
  const uint8_t PROGMEM Dealer[] = {
  45, 42,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x04, 0x02, 0x82, 0xc2, 0x82, 0x82, 0x02, 0x02, 0x02, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x12, 0xa4, 0x08, 0x50, 0xa0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x40, 0x80, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0x7b, 0x3f, 0x3f, 0x3b, 0x3b, 0x7b, 0xfb, 0xfb, 0xfb, 0x7b, 0x3b, 0x3b, 0x3f, 0x3f, 0x7f, 0xfb, 0xfe, 0xfc, 0x00, 0x3f, 0x80, 0x55, 0x2a, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 0xf9, 0x5a, 0x81, 0xfc, 0xfd, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xfc, 0xfd, 0x82, 0x59, 0xf8, 0x03, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x05, 0x09, 0x90, 0xa7, 0xdf, 0x3e, 0x7e, 0xfe, 0xfe, 0xfe, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xfe, 0xfe, 0x7e, 0x3e, 0xdf, 0xa7, 0x90, 0x09, 0x05, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc0, 0x20, 0xd0, 0xe8, 0xf4, 0xfa, 0x79, 0xb9, 0x52, 0x04, 0x02, 0x2c, 0x5a, 0xbc, 0x79, 0xf9, 0x78, 0xb8, 0x18, 0x40, 0xb0, 0x70, 0x70, 0xb0, 0x40, 0x18, 0xb8, 0x78, 0xf9, 0x79, 0xbc, 0x5a, 0x2c, 0x4a, 0xa4, 0x7b, 0xf1, 0xfa, 0xf4, 0xe8, 0xd0, 0x20, 0xc0, 0x00, 
  0x00, 0x00, 0x03, 0x03, 0x03, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x01, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 
  };
  #else
  const uint8_t PROGMEM Dealer[] = {
  0x01, 0x01, 0x01
  };
  #endif 

  #ifndef DEBUG
  const uint8_t PROGMEM Dealer_Mask[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x07, 0x0f, 0x8f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x9f, 0x8f, 0x0f, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
  };
  #else
  const uint8_t PROGMEM Dealer_Mask[] = {
  0x01, 0x01
  };
  #endif 

  const uint8_t PROGMEM Dealer_Mouth[] = {
  12, 8,
  0x3b, 0x3b, 0x3b, 0x6b, 0x6b, 0x4b, 0x4b, 0x6b, 0x6b, 0x3b, 0x3b, 0xbb, // Normal

  0x3d, 0x3b, 0x3b, 0x6b, 0x6b, 0x4b, 0x4b, 0x6b, 0x6b, 0x3b, 0x3b, 0xbd, // Happy 

  0x37, 0x3b, 0x3b, 0x6b, 0x6b, 0x4b, 0x4b, 0x6b, 0x6b, 0x3b, 0x3b, 0xb7, // Sad 

  0x3d, 0x39, 0x35, 0x75, 0x75, 0x55, 0x55, 0x75, 0x75, 0x35, 0x39, 0xbd, // Mouth open 01
  0x3d, 0x39, 0x35, 0x75, 0x75, 0x55, 0x55, 0x79, 0x79, 0x39, 0x39, 0xbd, // Mouth open 02
  0x3d, 0x39, 0x39, 0x79, 0x79, 0x59, 0x55, 0x75, 0x75, 0x35, 0x39, 0xbd, // Mouth open 03

  };

  const uint8_t PROGMEM Dealer_Eyes[] = {
  21, 8,
  0xd0, 0xd6, 0xf4, 0xf6, 0xf4, 0xf4, 0xf6, 0xf4, 0x96, 0x70, 0x7b, 0x70, 0x76, 0xf4, 0xf6, 0xf4, 0xf4, 0xf6, 0xf4, 0xd6, 0xd0,  // Open

  0xd0, 0xd6, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0x96, 0x70, 0x7b, 0x70, 0x76, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xf4, 0xd6, 0xd0,  // Closed
  };


};