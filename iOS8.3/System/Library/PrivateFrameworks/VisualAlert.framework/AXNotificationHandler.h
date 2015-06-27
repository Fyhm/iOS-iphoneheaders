/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:02:34 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXNotificationHandler : NSObject {

	NSString* _notificationName;
	id _target;
	/*^block*/id _dispatcher;
	unsigned _observerIdentifier;
	char _valid;

}

@property (getter=isValid,nonatomic,readonly) char valid;                                            //@synthesize valid=_valid - In the implementation block
@property (setter=_setNotificationName:,nonatomic,retain) NSString * _notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
@property (setter=_setTarget:,nonatomic,retain) id _target;                                          //@synthesize target=_target - In the implementation block
@property (setter=_setDispatcher:,nonatomic,copy) id _dispatcher; 
+(unsigned)_safelyRegisterObserver:(id)arg1 ;
+(void)_safelyRemoveObserverForIdentifier:(unsigned)arg1 ;
+(id)_safelyGetObserverForIdentifier:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(char)isValid;
-(id)_target;
-(void)_setTarget:(id)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(char)arg4 ;
-(void)_setNotificationName:(id)arg1 ;
-(void)_setDispatcher:(/*^block*/id)arg1 ;
-(id)_notificationTypeDescription;
-(NSString *)_notificationName;
-(void)_startObserving;
-(void)_stopObserving;
-(id)_dispatcher;
-(void)_handleNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end
