/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:44:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCData : NSData {

	NSObject*<OS_xpc_object> _data;

}
-(void)dealloc;
-(id)debugDescription;
-(unsigned)length;
-(const void*)bytes;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(id)initWithXPCData:(id)arg1 ;
@end
