#ifndef Display_Adapter_h
#define Display_Adapter_h

#include <Arduino.h>
#include "HardwareAdapter.h"
/*!
 * @brief The class which defines a device supports audio playing/recording
 */
class DisplayAdapter : public HardwareAdapter {
  public:
    DisplayAdapter(int16_t screenWidth, int16_t screenHeight, int8_t bpp);
    virtual ~DisplayAdapter(){};
    virtual int16_t getScreenWidth() {return screenWidth;};
    virtual int16_t getScreenHeight() {return screenHeight;};
    virtual int16_t getColorBit() {return bpp;};
  protected:
    int16_t screenWidth;
    int16_t screenHeight;
    // Bits per pixel
    int8_t bpp;
};
#endif