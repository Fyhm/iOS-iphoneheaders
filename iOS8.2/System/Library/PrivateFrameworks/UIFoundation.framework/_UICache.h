/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableDictionary;

@interface _UICache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSMutableDictionary* _cache;
	NSObject*<OS_dispatch_source> _memoryWarningsSource;
	char _clearsCacheOnLowMemoryWarnings;
	char _clearsCacheOnApplicationBackground;
	id _noteObserver;

}

@property (assign,nonatomic) char clearsCacheOnLowMemoryWarnings; 
@property (assign,nonatomic) char clearsCacheOnApplicationBackground; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setClearsCacheOnApplicationBackground:(char)arg1 ;
-(void)setClearsCacheOnLowMemoryWarnings:(char)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)clearsCacheOnLowMemoryWarnings;
-(char)clearsCacheOnApplicationBackground;
-(id)cacheKeys;
@end
