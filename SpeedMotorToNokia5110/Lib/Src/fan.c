
#include "../Inc/fan.h"

const uint8_t fan_0[] flash={
/* Image width: 16 pixels */
0x10, 0x00,
/* Image height: 16 pixels */
0x10, 0x00,
#ifndef _GLCD_DATA_BYTEY_
/* Image data for monochrome displays organized
   as horizontal rows of bytes */
0x00, 0x00, 0x80, 0x03, 0x40, 0x04, 0x40, 0x04, 
0x40, 0x02, 0xCC, 0x01, 0x9E, 0x3D, 0xFE, 0x7F, 
0xFE, 0x7F, 0xBC, 0x79, 0x80, 0x33, 0xC0, 0x03, 
0xE0, 0x03, 0xE0, 0x03, 0xC0, 0x01, 0x00, 0x00, 
#else
/* Image data for monochrome displays organized
   as rows of vertical bytes */
0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0x80, 0xBC, 0xE2, 
0xE2, 0x92, 0xCC, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 
0x00, 0x01, 0x03, 0x03, 0x03, 0x33, 0x79, 0x7F, 
0x7F, 0x3D, 0x01, 0x03, 0x07, 0x07, 0x03, 0x00, 
#endif
};

const uint8_t fan_90[] flash={
/* Image width: 16 pixels */
0x10, 0x00,
/* Image height: 16 pixels */
0x10, 0x00,
#ifndef _GLCD_DATA_BYTEY_
/* Image data for monochrome displays organized
   as horizontal rows of bytes */
0x00, 0x00, 0x80, 0x03, 0xC0, 0x07, 0xC0, 0x07, 
0xC0, 0x03, 0xCC, 0x01, 0x92, 0x3D, 0xE2, 0x7F, 
0xE2, 0x7F, 0xBC, 0x79, 0x80, 0x33, 0xC0, 0x03, 
0xE0, 0x03, 0xE0, 0x03, 0xC0, 0x01, 0x00, 0x00, 
#else
/* Image data for monochrome displays organized
   as rows of vertical bytes */
0x00, 0xC0, 0x20, 0x20, 0x40, 0x80, 0xBC, 0xFE, 
0xFE, 0x9E, 0xCC, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 
0x00, 0x01, 0x02, 0x02, 0x02, 0x33, 0x79, 0x7F, 
0x7F, 0x3D, 0x01, 0x03, 0x07, 0x07, 0x03, 0x00, 
#endif
};

const uint8_t fan_180[] flash={
/* Image width: 16 pixels */
0x10, 0x00,
/* Image height: 16 pixels */
0x10, 0x00,
#ifndef _GLCD_DATA_BYTEY_
/* Image data for monochrome displays organized
   as horizontal rows of bytes */
0x00, 0x00, 0x80, 0x03, 0xC0, 0x07, 0xC0, 0x07, 
0xC0, 0x03, 0xCC, 0x01, 0x9E, 0x3D, 0xFE, 0x7F, 
0xFE, 0x7F, 0xBC, 0x79, 0x80, 0x33, 0x40, 0x02, 
0x20, 0x02, 0x20, 0x02, 0xC0, 0x01, 0x00, 0x00, 
#else
/* Image data for monochrome displays organized
   as rows of vertical bytes */
0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0x80, 0xBC, 0xFE, 
0xFE, 0x9E, 0xCC, 0xC0, 0xC0, 0xC0, 0x80, 0x00, 
0x00, 0x01, 0x03, 0x03, 0x03, 0x33, 0x49, 0x47, 
0x47, 0x3D, 0x01, 0x03, 0x07, 0x07, 0x03, 0x00, 
#endif
};

const uint8_t fan_270[] flash={
/* Image width: 16 pixels */
0x10, 0x00,
/* Image height: 16 pixels */
0x10, 0x00,
#ifndef _GLCD_DATA_BYTEY_
/* Image data for monochrome displays organized
   as horizontal rows of bytes */
0x00, 0x00, 0x80, 0x03, 0xC0, 0x07, 0xC0, 0x07, 
0xC0, 0x03, 0xCC, 0x01, 0x9E, 0x3D, 0xFE, 0x47, 
0xFE, 0x47, 0xBC, 0x49, 0x80, 0x33, 0xC0, 0x03, 
0xE0, 0x03, 0xE0, 0x03, 0xC0, 0x01, 0x00, 0x00, 
#else
/* Image data for monochrome displays organized
   as rows of vertical bytes */
0x00, 0xC0, 0xE0, 0xE0, 0xC0, 0x80, 0xBC, 0xFE, 
0xFE, 0x9E, 0xCC, 0x40, 0x40, 0x40, 0x80, 0x00, 
0x00, 0x01, 0x03, 0x03, 0x03, 0x33, 0x79, 0x7F, 
0x7F, 0x3D, 0x01, 0x02, 0x04, 0x04, 0x03, 0x00, 
#endif
};

