/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/NSCopying.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying> {

	char _animated;
	char _updateModelOnly;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) char animated;                      //@synthesize animated=_animated - In the implementation block
@property (assign,nonatomic) char updateModelOnly;               //@synthesize updateModelOnly=_updateModelOnly - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)context;
+(id)contextWithUserInfo:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(char)animated;
-(void)setAnimated:(char)arg1 ;
-(char)updateModelOnly;
-(void)setUpdateModelOnly:(char)arg1 ;
@end
