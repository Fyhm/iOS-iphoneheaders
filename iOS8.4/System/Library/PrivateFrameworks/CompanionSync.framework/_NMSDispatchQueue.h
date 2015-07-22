/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _NMSDispatchQueue : NSObject {

	NSObject*<OS_dispatch_queue> _q;
	int _r;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
-(void)async:(/*^block*/id)arg1 ;
-(void)sync:(/*^block*/id)arg1 ;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(void)setTarget:(id)arg1 ;
-(void)suspend;
-(void)resume;
-(id)initWithName:(id)arg1 attributes:(id)arg2 ;
@end
