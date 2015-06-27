/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:29 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/SSDownloadQueueObserver.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableSet;

@interface ISNetworkObserver : NSObject <SSDownloadQueueObserver> {

	NSString* _dataStatusIndicator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	char _isCellularRestricted;
	double _lastNetworkTypeChangeTime;
	int _networkUsageCount;
	int _networkType;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSMutableSet* _observedDownloadQueues;
	NSString* _operatorName;
	SCNetworkReachabilityRef _reachability;
	NSString* _registrationStatus;
	CTServerConnectionRef _telephonyServer;

}

@property (assign) int networkType; 
@property (readonly) double lastNetworkTypeChangeTime; 
@property (getter=isUsingNetwork,readonly) char usingNetwork; 
@property (readonly) char shouldShowCellularAutomaticDownloadsSwitch; 
@property (readonly) NSString * connectionTypeHeader; 
@property (getter=isWiFiEnabled,readonly) char wifiEnabled; 
@property (readonly) NSString * dataStatusIndicator; 
@property (readonly) NSString * modemRegistrationStatus; 
@property (readonly) NSString * operatorName; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)set3GEnabled:(char)arg1 ;
+(void)setAirplaneModeEnabled:(char)arg1 ;
+(void)setWiFiEnabled:(char)arg1 ;
-(char)isWiFiEnabled;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(int)networkType;
-(char)shouldShowCellularAutomaticDownloadsSwitch;
-(void)dealloc;
-(id)init;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(NSString *)connectionTypeHeader;
-(NSString *)operatorName;
-(void)setNetworkType:(int)arg1 ;
-(void)downloadQueueNetworkUsageChanged:(id)arg1 ;
-(void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2 ;
-(double)lastNetworkTypeChangeTime;
-(int)_currentNetworkType;
-(char)_ntsIsUsingNetwork;
-(void)_postUsageChangedToValue:(char)arg1 ;
-(id)copyValueForCarrierBundleKey:(id)arg1 ;
-(id)_dataStatusIndicator;
-(void)_reloadNetworkType;
-(int)_setNetworkType:(int)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(int)arg1 toValue:(int)arg2 ;
-(int)_networkTypeForReachabilityFlags:(unsigned)arg1 ;
-(int)_networkTypeFromDataIndicator:(id)arg1 ;
-(void)beginObservingDownloadQueue:(id)arg1 ;
-(void)endObservingDownloadQueue:(id)arg1 ;
-(NSString *)dataStatusIndicator;
-(char)isCellularDataEnabledForBundleIdentifier:(id)arg1 ;
-(NSString *)modemRegistrationStatus;
-(void)_reloadCellularRestriction;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned)arg1 ;
-(char)isUsingNetwork;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(void)reloadNetworkType;
@end
