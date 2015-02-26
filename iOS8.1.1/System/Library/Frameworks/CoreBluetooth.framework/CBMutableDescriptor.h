/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CBDescriptor.h>

@class NSNumber;

@interface CBMutableDescriptor : CBDescriptor {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;              //@synthesize ID=_ID - In the implementation block
-(NSNumber *)ID;
-(id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2 ;
-(id)initWithType:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(void)setID:(NSNumber *)arg1 ;
@end
