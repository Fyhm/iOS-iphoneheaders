/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWSyncServiceConnection.h>

@protocol SWSyncServiceConnectionDelegateSWSyncWorkoutConnectionDelegate;
@class NSString, NSInputStream;

@interface SWSyncWorkoutConnection : SWSyncServiceConnection {

	<SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate>* _delegate;
	NSString* _PIN;
	NSInputStream* _workoutXMLStream;

}

@property (assign,nonatomic) <SWSyncServiceConnectionDelegate><SWSyncWorkoutConnectionDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * PIN;                                                                           //@synthesize PIN=_PIN - In the implementation block
@property (nonatomic,readonly) NSInputStream * workoutXMLStream;                                                         //@synthesize workoutXMLStream=_workoutXMLStream - In the implementation block
-(id)initWithPIN:(id)arg1 workoutXMLStream:(id)arg2 host:(id)arg3 delegate:(id)arg4 ;
-(id)workoutXMLStream;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)PIN;
-(void)handleResponse:(id)arg1 ;
@end
