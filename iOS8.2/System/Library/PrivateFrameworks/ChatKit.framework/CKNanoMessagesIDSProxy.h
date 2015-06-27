/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/companionmessagesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companionmessagesd/IDSServiceDelegate.h>
#import <companionmessagesd/CKNanoMessagesProxiedOneTimeLocationRequest.h>
#import <companionmessagesd/CKNanoMessagesProxiedOneTimeLocationResponse.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface CKNanoMessagesIDSProxy : NSObject <IDSServiceDelegate, CKNanoMessagesProxiedOneTimeLocationRequest, CKNanoMessagesProxiedOneTimeLocationResponse> {

	id _delegate;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                         //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didFetchCurrentLocation:(id)arg1 error:(id)arg2 ;
-(void)fetchCurrentLocation;
-(void)_receivedFetchCurrentLocationMessage:(id)arg1 ;
-(void)_receivedDidFetchCurrentLocationMessage:(id)arg1 ;
-(char)_sendProtobufData:(id)arg1 type:(unsigned)arg2 fireAndForget:(char)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end
