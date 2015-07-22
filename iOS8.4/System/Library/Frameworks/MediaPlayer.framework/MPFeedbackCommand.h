/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@class NSString;

@interface MPFeedbackCommand : MPRemoteCommand {

	long long _presentationStyle;
	BOOL _active;
	NSString* _localizedTitle;
	NSString* _localizedShortTitle;

}

@property (assign,getter=isActive,nonatomic) BOOL active;               //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                   //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedShortTitle;              //@synthesize localizedShortTitle=_localizedShortTitle - In the implementation block
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setLocalizedShortTitle:(NSString *)arg1 ;
-(void)setPresentationStyle:(long long)arg1 ;
-(NSString *)localizedShortTitle;
-(BOOL)isActive;
-(long long)presentationStyle;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)localizedTitle;
@end
