/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CardDAVSyncInfo : NSObject {

	NSMutableDictionary* _uuidToPersonCache;
	char _startedWithNoContacts;

}

@property (nonatomic,retain) NSMutableDictionary * uuidToPersonCache;              //@synthesize uuidToPersonCache=_uuidToPersonCache - In the implementation block
@property (assign,nonatomic) char startedWithNoContacts;                           //@synthesize startedWithNoContacts=_startedWithNoContacts - In the implementation block
-(NSMutableDictionary *)uuidToPersonCache;
-(void)setUuidToPersonCache:(NSMutableDictionary *)arg1 ;
-(char)startedWithNoContacts;
-(void)setStartedWithNoContacts:(char)arg1 ;
@end
