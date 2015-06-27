/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:51 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanoprefsyncd/nanoprefsyncd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <nanoprefsyncd/NSCopying.h>

@class NSString, NSData;

@interface NPSManagedConfigurationMsg : PBCodable <NSCopying> {

	NSString* _feature;
	NSString* _kind;
	NSData* _restriction;
	NSData* _setting;

}

@property (nonatomic,retain) NSString * kind;                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) NSString * feature;                 //@synthesize feature=_feature - In the implementation block
@property (nonatomic,readonly) char hasSetting; 
@property (nonatomic,retain) NSData * setting;                   //@synthesize setting=_setting - In the implementation block
@property (nonatomic,readonly) char hasRestriction; 
@property (nonatomic,retain) NSData * restriction;               //@synthesize restriction=_restriction - In the implementation block
-(void)setRestriction:(NSData *)arg1 ;
-(char)hasSetting;
-(NSData *)restriction;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)kind;
-(char)hasRestriction;
-(void)setKind:(NSString *)arg1 ;
-(NSString *)feature;
-(NSData *)setting;
-(void)setSetting:(NSData *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setFeature:(NSString *)arg1 ;
@end
