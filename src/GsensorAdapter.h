#ifndef Gsensor_Adapter_h
#define Gsensor_Adapter_h

#include <Arduino.h>

#include <Adafruit_I2CDevice.h>

#include "HardwareAdapter.h"
/*!
 * @brief 支持gsensor的设备，通常为通过 I2C 进行配置
 */
class GsensorAdapter : public HardwareAdapter {
public:
  GsensorAdapter(Adafruit_I2CDevice *i2cdevice);
  virtual ~GsensorAdapter(){};

/*!
 *    @brief  获取gsensor x,y,z轴buf值
 *    @param  
 *    @return 成功返回buf深度值
 */
  virtual uint8_t getFifoBuf(signed short *x_buf,signed short *y_buf,signed short *z_buf) = 0;
/*!
 *    @brief  获取gsensor x,y,z轴最新的数据值
 *    @param  
 *    @return 成功返回true
 */
  virtual uint8_t getGsensorvalue(signed short *x,signed short *y,signed short *z) = 0;

/*!
 *    @brief  初始化设备
 *    @return 初始化成功则返回 true
 */
  virtual bool init() = 0; 


protected:
  Adafruit_I2CDevice *i2cdevice;
};
#endif // Audio_Adapter_h
