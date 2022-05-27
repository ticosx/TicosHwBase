#ifndef Input_Adapter_h
#define Input_Adapter_h

#include <Arduino.h>
#include "HardwareAdapter.h"
#include "InputData.h"

#include <Adafruit_I2CDevice.h>
/*!
 * @brief The class which defines an input device
 */
class InputAdapter : public HardwareAdapter {
  public:
    InputAdapter();
    InputAdapter(Adafruit_I2CDevice *);
    virtual ~InputAdapter(){};
    virtual void readInputData(input_data* input){};

  protected:
    Adafruit_I2CDevice *i2cdevice;
};
#endif