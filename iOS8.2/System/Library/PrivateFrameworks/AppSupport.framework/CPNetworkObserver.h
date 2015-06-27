/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSLock, NSMutableDictionary;

@interface CPNetworkObserver : NSObject {

	NSLock* _lock;
	NSMutableDictionary* _reachabilityRequests;
	unsigned _networkReachability;
	SCNetworkReachabilityRef _networkReach;
	CFDictionaryRef _networkObservers;
	SCPreferencesRef _wifiPreferences;
	CFDictionaryRef _wifiObservers;
	char _networkNotified;
	char _networkReachable;
	char _wifiNotified;
	char _wifiEnabled;

}
+(id)sharedNetworkObserver;
-(char)isWiFiEnabled;
-(void)addWiFiObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeWiFiObserver:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_wifiFirstCallBack:(id)arg1 ;
-(void)_wifiCallBack:(unsigned)arg1 ;
-(void)_wifiObserversInitialize;
-(void)_networkReachableFirstCallBack:(id)arg1 ;
-(void)_networkObserversInitialize;
-(void)_networkReachableCallBack:(unsigned)arg1 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 forHostname:(id)arg3 ;
-(void)removeObserver:(id)arg1 forHostname:(id)arg2 ;
-(char)isNetworkReachable;
-(void)addNetworkReachableObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeNetworkReachableObserver:(id)arg1 ;
@end
