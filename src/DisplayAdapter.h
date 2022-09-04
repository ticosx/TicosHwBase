#ifndef Display_Adapter_h
#define Display_Adapter_h

#include <Arduino.h>
#include "HardwareAdapter.h"
/*!
 * @brief The class which defines a device supports audio playing/recording
 */
class DisplayAdapter : public HardwareAdapter {
  public:
    DisplayAdapter(int16_t screenWidth, int16_t screenHeight, int8_t bpp, int8_t rotation=1);
    virtual ~DisplayAdapter(){};
    virtual int16_t getScreenWidth() {return screenWidth;};
    virtual int16_t getScreenHeight() {return screenHeight;};
    virtual int16_t getColorBit() {return bpp;};
    virtual int16_t getRotation() {return rotation;};
    virtual bool setLight(int8_t) {return true;};
    virtual bool trunOn() {return true;};
    virtual bool trunOff() {return true;};
  protected:
    int16_t screenWidth;
    int16_t screenHeight;
    // Bits per pixel
    int8_t bpp;
    int8_t rotation;
};
#endif