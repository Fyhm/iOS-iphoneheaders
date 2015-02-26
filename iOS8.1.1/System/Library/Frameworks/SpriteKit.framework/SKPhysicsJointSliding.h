/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSliding : SKPhysicsJoint {

	BOOL _shouldEnableLimits;
	double _lowerDistanceLimit;
	double _upperDistanceLimit;

}

@property (assign,nonatomic) BOOL shouldEnableLimits;                //@synthesize shouldEnableLimits=_shouldEnableLimits - In the implementation block
@property (assign,nonatomic) double lowerDistanceLimit;              //@synthesize lowerDistanceLimit=_lowerDistanceLimit - In the implementation block
@property (assign,nonatomic) double upperDistanceLimit;              //@synthesize upperDistanceLimit=_upperDistanceLimit - In the implementation block
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 axis:(CGVector)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)shouldEnableLimits;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(double)lowerDistanceLimit;
-(void)setLowerDistanceLimit:(double)arg1 ;
-(double)upperDistanceLimit;
-(void)setUpperDistanceLimit:(double)arg1 ;
@end
