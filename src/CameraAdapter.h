#ifndef Camera_Adapter_h
#define Camera_Adapter_h

#include "HardwareAdapter.h"
#include "CameraHal.h"

/*!
 * @brief 支持录放音的设备，通常为通过 I2C 进行配置
 */
class CameraAdapter : public HardwareAdapter{
public:
    CameraAdapter(pixformat_t pixFormat,framesize_t frameSize);
    virtual ~CameraAdapter(){};

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

/*!
 *    @brief  获取帧缓冲
 *    @return 帧缓冲地址
 */
    virtual cam_hal_frame_t*getFrame() = 0;

/*!
 *    @brief  归还帧缓冲区
 *    @return 归还成功返回 true
 */
    virtual bool refundFrame() = 0;

/*!
 *    @brief  开启/关闭 画面水平翻转
 *    @param enable 开启 true 关闭 false
 *    @return 操作成功返回 true
 */
    virtual bool frameHorFlip(bool enable) = 0;

/*!
 *    @brief  开启/关闭 画面垂直翻转
 *    @param enable 开启 true 关闭 false
 *    @return 操作成功返回 true
 */
    virtual bool frameVerFlip(bool enable) = 0;

/*!
 *    @brief  开启/关闭 画面垂直翻转
 *    @param enable 开启 true 关闭 false
 *    @return 操作成功返回 true
 */
    virtual pixformat_t getPixFormat() = 0;

/*!
 *    @brief  开启/关闭 画面垂直翻转
 *    @param enable 开启 true 关闭 false
 *    @return 操作成功返回 true
 */
    virtual framesize_t getFrameSize() = 0;

protected:
    cam_hal_frame_t frameBuf;
    pixformat_t     pixFormat;
    framesize_t     frameSize;
};


#endif // Camera_Adapter_h
