#ifndef Temp_Adapter_h
#define Temp_Adapter_h

#include <Arduino.h>
#include "SensorHal.h"
#include "HardwareAdapter.h"
/*!
 * @brief 支持temperature设备
 */
class TemperatureAdapter : public HardwareAdapter {

public:
  TemperatureAdapter(temp_info_t *info);
  virtual ~TemperatureAdapter(){};
/*!
 *    @brief  获取温度值
 *    @return 初始化成功则返回 温度值，单位是°C
 */
  virtual  int16_t getTempValue(void)  = 0;
  /*!
 *    @brief  获取NTC电压值
 *    @return 初始化成功则返回电压值，单位是mV
 */
  virtual  uint32_t getVotValue(void)  = 0;
    /*!
 *    @brief  获取Adc原始值，12bit
 *    @return 初始化成功则返回原始ADC值
 */
  virtual  uint32_t getAdcValue(void)  = 0;
/*!
 *    @brief  初始化设备
 *    @return 初始化成功则返回 true
 */
  virtual bool init() = 0;
/*!
 *    @brief  取消初始化设备
 *    @return 取消成功返回 true
 */
  virtual bool deinit() = 0;

protected:
  temp_info_t *info;

};
#endif // Audio_Adapter_h
