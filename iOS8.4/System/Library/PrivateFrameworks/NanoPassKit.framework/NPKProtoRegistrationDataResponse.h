/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoPassKit/NSCopying.h>

@class NSString, NSData;

@interface NPKProtoRegistrationDataResponse : PBCodable <NSCopying> {

	NSString* _pushToken;
	NSData* _registrationDataBytes;
	BOOL _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                                 //@synthesize pending=_pending - In the implementation block
@property (nonatomic,readonly) BOOL hasRegistrationDataBytes; 
@property (nonatomic,retain) NSData * registrationDataBytes;               //@synthesize registrationDataBytes=_registrationDataBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasPushToken; 
@property (nonatomic,retain) NSString * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPending:(BOOL)arg1 ;
-(void)setPushToken:(NSString *)arg1 ;
-(BOOL)hasPushToken;
-(NSString *)pushToken;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)pending;
-(void)setRegistrationDataBytes:(NSData *)arg1 ;
-(BOOL)hasRegistrationDataBytes;
-(NSData *)registrationDataBytes;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
