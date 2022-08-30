#ifndef Watchdog_Adapter_h
#define Watchdog_Adapter_h

#include <Arduino.h>
#include "HardwareAdapter.h"
/*!
 * @brief 支持watchdog 设备
 */
class WatchdogAdapter : public HardwareAdapter {

public:
  WatchdogAdapter();
  virtual ~WatchdogAdapter(){};
/*!
 *    @brief  初始化看门狗
 *    @return 初始化成功则返回 true
 */
  virtual bool wdt_init(uint32_t timeout) = 0; 
/*!
 *    @brief  取消初始化看门狗
 *    @return 取消成功返回 true
 */
  virtual bool wdt_deinit(void) = 0;
  /*!
 *    @brief  复位看门狗
 *    @return 复位看门狗成功返回 true
 */
  virtual bool wdt_reset(void) = 0;


};
#endif // Audio_Adapter_h
