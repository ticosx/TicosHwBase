#ifndef Audio_Adapter_h
#define Audio_Adapter_h

#include <Arduino.h>

#include <Adafruit_I2CDevice.h>

/*!
 * @brief The class which defines a device register (a location to read/write
 * data from)
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
  
/*!
 *    @brief  将音量设置写入设备
 *    @param  volume 要设置的音量。音量最大为 100， 最小为 0 （静音）
 *    @return 成功设置音量则返回 true
 */
  virtual bool writeVolume2Dev(int8_t volume) = 0;

  Adafruit_I2CDevice *_i2cdevice;
  int8_t _volume;
};
#endif // Audio_Adapter_h
