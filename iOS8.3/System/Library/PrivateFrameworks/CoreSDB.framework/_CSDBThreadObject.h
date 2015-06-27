/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:15:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreSDB.framework/CoreSDB
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreSDB/CoreSDB-Structs.h>
@class NSThread, NSString, NSRunLoop, NSObject;

@interface _CSDBThreadObject : NSObject {

	NSThread* _thread;
	NSString* _identifier;
	NSRunLoop* _runLoop;
	CFRunLoopSourceRef _runLoopSource;
	NSString* _queueContext;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)_threadedMain;
-(void)performBlock:(/*^block*/id)arg1 afterDelay:(double)arg2 ;
-(char)isCurrentThreadOtherwiseAssert:(char)arg1 ;
-(id)thread;
-(void)performBlock:(/*^block*/id)arg1 waitUntilDone:(char)arg2 ;
@end
