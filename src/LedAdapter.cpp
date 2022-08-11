#include <LedAdapter.h>

/*!
 *    @brief  创建一个 Led_Adapter设备
 *    @param  led_info 用于底层led_info 设备
 */
LedAdapter::LedAdapter(led_info_t *led_info ) {
  this->led_info = led_info;
}