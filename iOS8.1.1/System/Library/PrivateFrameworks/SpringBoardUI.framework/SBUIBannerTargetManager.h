/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSHashTable, NSMapTable, NSArray;

@interface SBUIBannerTargetManager : NSObject {

	NSHashTable* _proxies;
	NSMapTable* _implementationToProxyMap;
	NSHashTable* _observers;

}

@property (nonatomic,retain,readonly) NSArray * targets; 
+(id)sharedInstance;
-(NSArray *)targets;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)_registerTargetImplementation:(id)arg1 ;
-(void)_unregisterTargetImplementation:(id)arg1 ;
-(id)_proxyForTargetImplementation:(id)arg1 ;
@end
