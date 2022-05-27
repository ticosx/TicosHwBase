#ifndef Audio_Adapter_h
#define Audio_Adapter_h

#include <Arduino.h>

#include <Adafruit_I2CDevice.h>

#include "AudioHal.h"
#include "HardwareAdapter.h"
/*!
 * @brief 支持录放音的设备，通常为通过 I2C 进行配置
 */
class AudioAdapter : public HardwareAdapter {
public:
  AudioAdapter(Adafruit_I2CDevice *i2cdevice);
  virtual ~AudioAdapter(){};

/*!
 *    @brief  设置音量
 *    @param  volume 要设置的音量。音量最大为 100， 最小为 0 （静音）
 *    @return 成功设置音量则返回 true
 */
  virtual bool setVolume(int8_t volume) = 0;
/*!
 *    @brief  获得当前音量
 *    @return 当前音量
 */
  virtual int8_t getVolume() = 0;
/*!
 *    @brief  初始化设备
 *    @return 初始化成功则返回 true
 */
  virtual bool init() = 0;
  
/*!
 *    @brief  设置采样位宽
 *    @param  bits 采样位宽。常见值为 8, 16, 24, 32 等
 *    @return 设置成功则返回 true
 */
  virtual bool setBitsPerSample(int bits) = 0;
/*!
 *    @brief  设置声道数
 *    @param  chan 声道数。可选值 1, 2
 *    @return 设置成功则返回 true
 */
  virtual bool setChannels(int chan) = 0;

/*!
 *    @brief  启动音频外设
 *    @param  mode 外设工作模式，放音、录音还是全双工
 *    @return 设置成功则返回 true
 */
  virtual bool start(audio_hal_codec_mode_t mode) = 0;

/*!
 *    @brief  停止音频外设
 *    @param  mode 外设工作模式，放音、录音还是全双工
 *    @return 设置成功则返回 true
 */
  virtual bool stop(audio_hal_codec_mode_t mode) = 0;

protected:
  Adafruit_I2CDevice *i2cdevice;
};
#endif // Audio_Adapter_h
