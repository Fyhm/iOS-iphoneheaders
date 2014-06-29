/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:07 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWWorkout.h>
#import <SportsWorkout/SWRunSensorPacketObserver.h>

@class SWRunSensor, SWPaceModel, NSData;

@interface SWRunWorkout : SWWorkout <SWRunSensorPacketObserver> {

	SWRunSensor* _sensor;
	SWPaceModel* _paceModel;
	bool _hasStarted;
	float _weightInLbs;
	bool _isCalibration;

}

@property (nonatomic,readonly) SWRunSensor * sensor;                                        //@synthesize sensor=_sensor - In the implementation block
@property (assign,nonatomic) float weightInLbs;                                             //@synthesize weightInLbs=_weightInLbs - In the implementation block
@property (nonatomic,@dynamic,readonly) bool isWalk; 
@property (assign,nonatomic) bool isCalibration;                                            //@synthesize isCalibration=_isCalibration - In the implementation block
@property (nonatomic,@dynamic,copy) NSData * paceModelParameters; 
@property (nonatomic,@dynamic,readonly) bool canBeUsedForWalkCalibration; 
@property (nonatomic,@dynamic,readonly) bool canBeUsedForRunCalibration; 
@property (nonatomic,@dynamic,readonly) float minimumCalibrationDistanceMiles; 
@property (nonatomic,@dynamic,readonly) float maximumCalibrationDistanceMiles; 
+(id)workoutWithSensor:(id)arg1 ;
-(float)weightInLbs;
-(void)sensor:(id)arg1 didReceivePacketPayload:(const char*)arg2 timestamp:(unsigned long long)arg3 ;
-(bool)isWalk;
-(bool)canBeUsedForWalkCalibration;
-(bool)canBeUsedForRunCalibration;
-(void)resetCalibration;
-(bool)calibrateWithDistanceMiles:(float)arg1 forWalk:(bool)arg2 ;
-(bool)recalibrateWithAdjustedDistanceMiles:(float)arg1 ;
-(id)initWithSensor:(id)arg1 ;
-(id)workoutData;
-(void)activateWorkout;
-(void)pauseWorkout;
-(void)setPaceModelParameters:(id)arg1 ;
-(id)paceModelParameters;
-(float)minimumCalibrationDistanceMiles;
-(float)maximumCalibrationDistanceMiles;
-(id)sensor;
-(void)setWeightInLbs:(float)arg1 ;
-(bool)isCalibration;
-(void)setIsCalibration:(bool)arg1 ;
-(void)dealloc;
@end
