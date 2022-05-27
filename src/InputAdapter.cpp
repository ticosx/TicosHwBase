#include "InputAdapter.h"

/*!
 * @brief 用户输入设备
 */
InputAdapter::InputAdapter(){

}

InputAdapter::InputAdapter(Adafruit_I2CDevice *i2cdevice){
  this->i2cdevice = i2cdevice;
}