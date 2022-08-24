#ifndef Led_Adapter_h
#define Led_Adapter_h

#include <Arduino.h>

//#include <led_strip.h>
#include "ColorPattern.h"
#include "SensorHal.h"
#include "HardwareAdapter.h"
/*!
 * @brief 支持LED的设备
 */

class LedAdapter : public HardwareAdapter  {
public:
    LedAdapter(led_info_t *led_info);
    virtual ~LedAdapter(){};
    virtual void fill(uint8_t r, uint8_t g, uint8_t b) = 0;
    virtual void fill(TColor color) = 0;
    virtual void fill(TColor color, uint32_t pixelCount, bool fromTail) =  0;
    virtual void fillPattern(LedPattern* pat, uint32_t shift) = 0;
    virtual void setLedConfig(uint8_t mode,uint8_t bright,uint32_t delaytime,TColor color) = 0;
    virtual void show()= 0;
    virtual uint32_t getLength() = 0;
    virtual bool init() = 0; 
    virtual bool deinit() = 0; 
    virtual bool ledTaskCreate(uint32_t taskSize,int taskPriority ) = 0; 
    virtual bool ledTaskDelete() = 0; 

protected:
    led_info_t *led_info;

};
#endif // Audio_Adapter_h
