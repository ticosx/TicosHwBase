#include <DisplayAdapter.h>

/*!
 *    @brief  创建一个 DisaplyAdapter
 */
DisplayAdapter::DisplayAdapter(int16_t screenWidth, int16_t screenHeight, int8_t bpp, int8_t rotation) : 
  screenWidth(screenWidth), screenHeight(screenHeight) , bpp(bpp), rotation(rotation)
{
}