/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (assign,nonatomic) double watchdogExtension; 
@property (assign,nonatomic) char allowCPUThrottling; 
@property (assign,nonatomic) char runWatchdogIndependently; 
@property (nonatomic,retain) NSDictionary * payload; 
@property (assign,nonatomic) char forTesting; 
@property (assign,nonatomic) char safeMode; 
@property (assign,nonatomic) double userLaunchEventTime; 
@property (assign,nonatomic) double execTime; 
@property (assign,setter=_setLifecycleActionType:,getter=_lifecycleActionType,nonatomic) unsigned lifecycleActionType; 
-(double)watchdogExtension;
-(void)setWatchdogExtension:(double)arg1 ;
-(char)runWatchdogIndependently;
-(char)allowCPUThrottling;
-(void)setAllowCPUThrottling:(char)arg1 ;
-(void)setRunWatchdogIndependently:(char)arg1 ;
-(char)isUISubclass;
-(NSDictionary *)payload;
-(void)_setLifecycleActionType:(unsigned)arg1 ;
-(unsigned)_lifecycleActionType;
-(char)forTesting;
-(double)userLaunchEventTime;
-(double)execTime;
-(char)safeMode;
-(id)keyDescriptionForSetting:(unsigned)arg1 ;
-(id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned)arg3 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setForTesting:(char)arg1 ;
-(void)setSafeMode:(char)arg1 ;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(void)setExecTime:(double)arg1 ;
@end
