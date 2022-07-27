#ifndef Weight_Adapter_h
#define Weight_Adapter_h

#include <Arduino.h>
#include "WeightHal.h"
#include "HardwareAdapter.h"
/*!
 * @brief 支持weight 设备
 */
class WeightAdapter : public HardwareAdapter {

public:
  WeightAdapter(weight_info *info);
  virtual ~WeightAdapter(){};

  virtual uint32_t getValue(uint32_t times) = 0 ;
  virtual void setOffset(uint32_t offset) = 0 ;
  virtual uint32_t getOffset() = 0 ;
  virtual void setScale(float scale) = 0 ;
  virtual  float getScale()  = 0;
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
  weight_info *info;

};
#endif // Audio_Adapter_h
