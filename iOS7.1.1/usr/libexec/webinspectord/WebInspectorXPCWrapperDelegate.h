/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebInspectorXPCWrapperDelegate <NSObject>
@optional
-(void)xpcConnectionUnhandledMessage:(id)arg1;

@required
-(void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
-(void)xpcConnectionFailed:(id)arg1;
@end
