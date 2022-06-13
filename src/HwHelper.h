#ifndef _HW_HELPER_H
#define _HW_HELPER_H

#include <Arduino.h>
#include <Adafruit_I2CDevice.h>

#define I2C_READ_REG(addr, data)  i2cReadReg(i2cdevice, addr, &data, sizeof(data))
#define I2C_READ_ARRAY(addr, buf)  i2cReadReg(i2cdevice, addr, buf, sizeof(buf))
#define I2C_WRITE_REG(addr, data)  i2cWriteReg(i2cdevice, addr, data)
    
bool i2cReadReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t *data, uint8_t len);
bool i2cWriteReg(Adafruit_I2CDevice *i2cdevice, uint8_t addr, uint8_t data); 

#endif