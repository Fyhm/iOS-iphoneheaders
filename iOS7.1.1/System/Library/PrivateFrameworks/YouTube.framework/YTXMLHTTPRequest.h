/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	bool _needsAccountAuth;

}

@property (assign,nonatomic) bool needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
-(void)dealloc;
-(void)loadRequest:(id)arg1 ;
-(bool)needsAccountAuth;
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsAccountAuth:(bool)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(void)listenForAuthenticationNotifications:(bool)arg1 ;
@end
