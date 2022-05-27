#ifndef Hardware_Adapter_h
#define Hardware_Adapter_h

#include <Arduino.h>
/*!
 * @brief The base class of the hardware devices
 */
class HardwareAdapter {
  public:
    HardwareAdapter();
    virtual ~HardwareAdapter(){};
};
#endif // Hardware_Adapter_h
