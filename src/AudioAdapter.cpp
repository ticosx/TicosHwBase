#include <AudioAdapter.h>

/*!
 *    @brief  创建一个 Audio_Adapter, 映射 I2C 上的 Codec 设备
 *    @param  i2cdevice 用于底层 I2C 通信的 Adafruit_I2CDevice 设备
 */
AudioAdapter::AudioAdapter(Adafruit_I2CDevice *i2cdevice) {
  _i2cdevice = i2cdevice;
}

/*!
 *    @brief  初始化音频设备
 *    @param  i2cdevice 用于底层 I2C 通信的 Adafruit_I2CDevice 设备
 */
bool AudioAdapter::init() {
  // _i2cdevice->begin();
  return initDev();
}

/*!
 *    @brief  设置音量
 *    @param  volume 要设置的音量。音量最大为 100， 最小为 0 （静音）
 *    @return 成功设置音量则返回 true
 */
bool AudioAdapter::setVolume(int8_t volume) {
  if(volume > 100){
    volume = 100;
  } else if(volume < 0) {
    volume = 0;
  }
  _volume = volume;
  return writeVolume2Dev(_volume);
}

/*!
 *    @brief  获得当前音量
 *    @return 当前音量
 */
int8_t AudioAdapter::getVolume() {
  return _volume;
}
