/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:36 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, CMGestureManager;

@interface SBMotionGestureController : NSObject {

	NSMutableDictionary* _observersByPriority;
	CMGestureManager* _motionGestureManager;

}
+(id)sharedInstance;
+(void)initialize;
-(void)removeGestureObserver:(id)arg1 ;
-(void)addGestureObserver:(id)arg1 withPriority:(unsigned)arg2 ;
-(void)addGestureObserver:(id)arg1 ;
-(void)_removeGestureManager;
-(void)_addGestureObserver:(id)arg1 withPriority:(unsigned)arg2 ;
-(void)_updateGestureManager;
-(void)_removeGestureObserver:(id)arg1 ;
-(id)_observersForPriority:(unsigned)arg1 ;
-(void)_enumerateObserversByPriority:(/*^block*/id)arg1 ;
-(id)_highestPriorityObservers;
-(void)_addGestureManager;
-(void)_notifyObserversOfGesture:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)_hasObservers;
@end

