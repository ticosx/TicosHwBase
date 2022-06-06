#include "InputAdapter.h"

/*!
 * @brief 用户输入设备
 */
InputAdapter::InputAdapter(){

}

InputAdapter::InputAdapter(TwoWire *i2c, uint8_t addr){
  this->i2cdevice = new Adafruit_I2CDevice(addr, i2c);
}

InputAdapter::InputAdapter(Adafruit_I2CDevice *i2cdevice){
  this->i2cdevice = i2cdevice;
}