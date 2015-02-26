/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DADaemonBookmarkDAV.bundle/DADaemonBookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonBookmarkDAV/BookmarkDAVDaemonAccount.h>

@class NSString;

@interface BookmarkDAViCloudDaemonAccount : BookmarkDAVDaemonAccount {

	NSString* _host;
	int _useSSL;
	long long _port;

}
-(id)host;
-(long long)port;
-(void)setHost:(id)arg1 ;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(BOOL)shouldHandleHTTPCookiesForURL:(id)arg1 ;
-(BOOL)shouldSendClientInfoHeaderForURL:(id)arg1 ;
-(BOOL)shouldCompressRequests;
-(BOOL)useSSL;
-(id)initWithBackingAccountInfo:(id)arg1 ;
@end
