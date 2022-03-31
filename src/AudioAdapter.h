#ifndef Audio_Adapter_h
#define Audio_Adapter_h

#include <Arduino.h>

#include <Adafruit_I2CDevice.h>

/*!
 * @brief The class which defines a device supports audio playing/recording
 */
class AudioAdapter {
public:
  AudioAdapter(Adafruit_I2CDevice *i2cdevice);

  bool setVolume(int8_t volume);
  int8_t getVolume();
  bool init();

protected:

/*!
 *    @brief  初始化设备
 *    @return 初始化成功则返回 true
 */
  virtual bool initDev() = 0;
  virtual bool writeVolume2Dev(int8_t volume) = 0;

  Adafruit_I2CDevice *i2cdevice;
};
#endif // Audio_Adapter_h
