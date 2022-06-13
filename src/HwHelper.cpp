#include "HwHelper.h"

/**
 * @brief 读取指定寄存器的值
 *
 * @param i2cdevice: 要访问的 I2C 设备实例，类型为 Adafruit_I2CDevice
 * @param addr: 要读取的寄存器地址
 * @param data: 用于保存读取数据的地址
 * @param len: 要读取的数据长度
 * 
 * @return True 读取成功返回 true, 否则返回 false.
 *
 */
bool i2cReadReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t *data, uint8_t len){
    return i2cdevice->write_then_read(&addr, sizeof(addr), data, len, true);
}

/**
 * @brief 设置指定寄存器的值
 *
 * @param i2cdevice: 要访问的 I2C 设备实例，类型为 Adafruit_I2CDevice
 * @param addr: 寄存器地址
 * @param data: 要设置的值
 * 
 * @return True 设置成功返回 true, 否则返回 false.
 *
 */
bool i2cWriteReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t data) {
    return i2cdevice->write( &data, sizeof(data), true, &addr, sizeof(addr));
}