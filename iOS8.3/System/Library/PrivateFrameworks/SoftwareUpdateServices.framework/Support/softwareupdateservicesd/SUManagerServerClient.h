/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:34:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSApplicationStateMonitor, NSString, NSXPCConnection;

@interface SUManagerServerClient : NSObject {

	BKSApplicationStateMonitor* _appStateMonitor;
	unsigned _lastAppState;
	int _type;
	int _pid;
	NSString* _identifier;
	char _isApplication;
	char _isMessagable;
	char _isForeground;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) char isApplication;                              //@synthesize isApplication=_isApplication - In the implementation block
@property (nonatomic,readonly) char isMessagable;                               //@synthesize isMessagable=_isMessagable - In the implementation block
@property (nonatomic,readonly) char isForeground;                               //@synthesize isForeground=_isForeground - In the implementation block
@property (nonatomic,readonly) id<SUManagerClientInterface> proxy; 
-(char)isMessagable;
-(void)_evaluateForegroundness;
-(void)wakeupIfNecessary;
-(char)_isStateMessagable:(unsigned)arg1 ;
-(char)_isStateForeground:(unsigned)arg1 ;
-(void)_evaluateMessagability;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSXPCConnection *)connection;
-(id<SUManagerClientInterface>)proxy;
-(char)isForeground;
-(int)pid;
-(char)isApplication;
-(id)initWithConnection:(id)arg1 ;
-(void)_applicationStateChanged:(id)arg1 ;
@end
