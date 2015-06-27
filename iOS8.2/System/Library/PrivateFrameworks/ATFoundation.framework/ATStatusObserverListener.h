/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface ATStatusObserverListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)stop;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end
