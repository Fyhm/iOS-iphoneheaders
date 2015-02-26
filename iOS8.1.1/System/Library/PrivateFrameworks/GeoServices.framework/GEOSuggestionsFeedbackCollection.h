/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSData;

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE2 _sessionID;
	int _suggestionEntryIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	int _suggestionsEntryListIndex;
	SCD_Struct_GE62 _has;

}

@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE2 sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsEntryListIndex; 
@property (assign,nonatomic) int suggestionsEntryListIndex;                  //@synthesize suggestionsEntryListIndex=_suggestionsEntryListIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                       //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                    //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;               //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(SCD_Struct_GE2)sessionID;
-(void)setSessionID:(SCD_Struct_GE2)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(void)setSuggestionsEntryListIndex:(int)arg1 ;
-(void)setHasSuggestionsEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionsEntryListIndex;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(int)suggestionsEntryListIndex;
-(int)suggestionEntryIndex;
-(NSData *)suggestionEntryMetadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
