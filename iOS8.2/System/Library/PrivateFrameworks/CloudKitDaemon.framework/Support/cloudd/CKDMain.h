/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Support/cloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudd/CKDSystemAvailabilityWatcher.h>

@class NSString;

@interface CKDMain : NSObject <CKDSystemAvailabilityWatcher> {

	char _upAndRunning;

}

@property (assign,nonatomic) char upAndRunning;                     //@synthesize upAndRunning=_upAndRunning - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)upAndRunning;
-(void)setUpAndRunning:(char)arg1 ;
-(void)_registerTokenRefreshActivity;
-(id)init;
-(void)systemAvailabilityChanged:(char)arg1 ;
@end
