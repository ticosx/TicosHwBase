#ifndef _HW_HELPER_H
#define _HW_HELPER_H

#include <Arduino.h>
#include <Adafruit_I2CDevice.h>

#define I2C_READ_REG(addr)  i2cReadReg(i2cdevice, addr)
#define I2C_WRITE_REG(addr, data)  i2cWriteReg(i2cdevice, addr, data)
    
uint8_t i2cReadReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr);
void i2cWriteReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t data); 

#endif