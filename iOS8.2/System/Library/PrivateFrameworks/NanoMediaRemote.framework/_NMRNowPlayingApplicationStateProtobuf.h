/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMediaRemote/NSCopying.h>

@class NSString;

@interface _NMRNowPlayingApplicationStateProtobuf : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _localizedDisplayName;
	unsigned _playbackState;
	SCD_Struct_NM1 _has;

}

@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasLocalizedDisplayName; 
@property (nonatomic,retain) NSString * localizedDisplayName;              //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (assign,nonatomic) char hasPlaybackState; 
@property (assign,nonatomic) unsigned playbackState;                       //@synthesize playbackState=_playbackState - In the implementation block
-(unsigned)playbackState;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)hasBundleIdentifier;
-(void)setPlaybackState:(unsigned)arg1 ;
-(char)hasLocalizedDisplayName;
-(void)setHasPlaybackState:(char)arg1 ;
-(char)hasPlaybackState;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
@end
