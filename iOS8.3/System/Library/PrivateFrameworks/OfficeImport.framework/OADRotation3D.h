/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@interface OADRotation3D : NSObject <NSCopying> {

	float mLatitude;
	float mLongitude;
	float mRevolution;

}
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)latitude;
-(float)longitude;
-(id)initWithLatitude:(float)arg1 longitude:(float)arg2 revolution:(float)arg3 ;
-(float)revolution;
@end
