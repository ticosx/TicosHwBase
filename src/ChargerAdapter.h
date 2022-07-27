#ifndef Charger_Adapter_h
#define Charger_Adapter_h

#include <Arduino.h>
#include "SensorHal.h"
#include "HardwareAdapter.h"
/*!
 * @brief 支持
 */
class ChargerAdapter : public HardwareAdapter {

public:
  ChargerAdapter(chg_info_t *info);
  virtual ~ChargerAdapter(){};
/*!
 *    @brief  获取电池电量
 *    @return 初始化成功则返回电量值，单位是%（0-100%）
 */
  virtual  uint8_t getBatteryCap(void)  = 0;
/*!
 *    @brief  获取电池电压值
 *    @return 初始化成功则返回电压值，单位是mV
 */
  virtual  uint32_t getBatteryVolt(void)  = 0;
/*!
 *    @brief  获取电池Adc原始值，12bit
 *    @return 初始化成功则返回原始ADC值
 */
  virtual  uint32_t getBatteryAdcValue(void)  = 0;
/*!
 *    @brief  获取充电状态，充电、放电、充满等状态
 *    @return 初始化成功则返回原始ADC值
 */
  virtual  uint8_t getChargerStatus(void)  = 0;
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
  chg_info_t *info;

};
#endif // Audio_Adapter_h
