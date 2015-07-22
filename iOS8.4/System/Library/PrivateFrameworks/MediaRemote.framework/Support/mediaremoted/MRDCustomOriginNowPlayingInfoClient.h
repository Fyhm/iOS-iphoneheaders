/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingInfoClient.h>

@class NSString;

@interface MRDCustomOriginNowPlayingInfoClient : MRDNowPlayingInfoClient {

	NSString* _nowPlayingAppDisplayID;
	NSString* _nowPlayingAppDisplayName;

}

@property (nonatomic,copy) NSString * nowPlayingAppDisplayID;                //@synthesize nowPlayingAppDisplayID=_nowPlayingAppDisplayID - In the implementation block
@property (nonatomic,copy) NSString * nowPlayingAppDisplayName;              //@synthesize nowPlayingAppDisplayName=_nowPlayingAppDisplayName - In the implementation block
-(void)setNowPlayingAppDisplayID:(NSString *)arg1 ;
-(NSString *)nowPlayingAppDisplayName;
-(void)setNowPlayingAppDisplayName:(NSString *)arg1 ;
-(NSString *)nowPlayingAppDisplayID;
@end
