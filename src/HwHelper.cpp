#include "HwHelper.h"

/**
 * @brief 读取指定寄存器的值
 *
 * @param addr: 寄存器地址
 * 
 * @return  指定寄存器的值
 *
 */
uint8_t i2cReadReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr){
    uint8_t rdData; 
    i2cdevice->write_then_read(&addr, sizeof(addr), &rdData, 1, true);
    return rdData;

}

/**
 * @brief 设置指定寄存器的值
 *
 * @param addr: 寄存器地址
 * @param data: 要设置的值
 *
 */
void i2cWriteReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t data) {
    i2cdevice->write( &data, sizeof(data), true, &addr, sizeof(addr));
}