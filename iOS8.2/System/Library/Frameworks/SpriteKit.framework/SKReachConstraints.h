/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/NSCoding.h>

@interface SKReachConstraints : NSObject <NSCoding> {

	float _lowerAngleLimit;
	float _upperAngleLimit;

}

@property (assign,nonatomic) float lowerAngleLimit;              //@synthesize lowerAngleLimit=_lowerAngleLimit - In the implementation block
@property (assign,nonatomic) float upperAngleLimit;              //@synthesize upperAngleLimit=_upperAngleLimit - In the implementation block
-(float)lowerAngleLimit;
-(float)upperAngleLimit;
-(id)initWithLowerAngleLimit:(float)arg1 upperAngleLimit:(float)arg2 ;
-(void)setLowerAngleLimit:(float)arg1 ;
-(void)setUpperAngleLimit:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

