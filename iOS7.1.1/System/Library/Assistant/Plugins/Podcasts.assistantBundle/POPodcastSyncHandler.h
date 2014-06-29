/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Podcasts.assistantBundle/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class NSMutableDictionary;

@interface POPodcastSyncHandler : NSObject <AFSyncHandler> {

	NSMutableDictionary* _anchorToRevision;

}

@property (nonatomic,retain) NSMutableDictionary * anchorToRevision;              //@synthesize anchorToRevision=_anchorToRevision - In the implementation block
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)syncDidEnd;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)setAnchorToRevision:(id)arg1 ;
-(id)anchorToRevision;
-(id)init;
-(void).cxx_destruct;
-(id)validity;
@end
