/*!
 @header IDeviceManagerDelegate.h
 @abstract DeviceManager异步方法操作完成后的回调协议
 @author EaseMob Inc.
 @version 1.00 2014/01/01 Creation (1.00)
 */
#import <Foundation/Foundation.h>
#import "EMDeviceManagerProximitySensorDelegate.h"
#import "EMDeviceManagerLocationDelegate.h"
#import "EMDeviceManagerMediaDelegate.h"

/*!
 @protocol
 @brief DeviceManager异步方法操作完成后的回调协议
 @discussion
 */
@protocol EMDeviceManagerDelegate <EMDeviceManagerProximitySensorDelegate,
                                EMDeviceManagerMediaDelegate,
                                EMDeviceManagerLocationDelegate>

@optional

@end
