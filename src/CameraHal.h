#ifndef _Camera_Hal_h_
#define _Camera_Hal_h_

#include "sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    unsigned char * buf;
    int len;
}cam_hal_frame_t;

#ifdef _Camera_Hal_h_
}
#endif

#endif //_Camera_Hal_h_
