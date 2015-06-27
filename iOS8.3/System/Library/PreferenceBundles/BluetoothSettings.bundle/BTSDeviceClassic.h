/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:53:22 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BluetoothSettings/BTSDevice.h>

@class BluetoothDevice;

@interface BTSDeviceClassic : BTSDevice {

	BluetoothDevice* _device;

}

@property (nonatomic,readonly) BluetoothDevice * device;              //@synthesize device=_device - In the implementation block
+(id)deviceWithDevice:(id)arg1 ;
-(char)paired;
-(id)initWithDevice:(id)arg1 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(char)connect;
-(void)disconnect;
-(char)isHealthDevice;
-(char)isMyDevice;
-(char)cloudPaired;
-(void)unpair;
-(id)classicDevice;
-(BluetoothDevice *)device;
-(char)connected;
@end
