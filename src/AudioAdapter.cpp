#include <AudioAdapter.h>

/*!
 *    @brief  创建一个 Audio_Adapter, 映射 I2C 上的 Codec 设备
 *    @param  i2cdevice 用于底层 I2C 通信的 Adafruit_I2CDevice 设备
 */
AudioAdapter::AudioAdapter(Adafruit_I2CDevice *i2cdevice) {
  this->i2cdevice = i2cdevice;
}