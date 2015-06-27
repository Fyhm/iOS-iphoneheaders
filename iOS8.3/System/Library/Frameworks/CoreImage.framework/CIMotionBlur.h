/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:42:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CILinearBlur.h>

@class NSNumber;

@interface CIMotionBlur : CILinearBlur {

	NSNumber* inputAngle;

}

@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(CGRect)regionOf:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
-(id)_kernel;
-(NSNumber *)inputAngle;
-(void)setInputAngle:(NSNumber *)arg1 ;
@end
