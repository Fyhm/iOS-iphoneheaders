/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MapsDataClassMigrator/NSCopying.h>

@class GEORPCorrectedSearch, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface RAPSearchRecording : PBCodable <NSCopying> {

	GEORPCorrectedSearch* _correctedSearchTemplate;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                             //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;                           //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedSearchTemplate; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearchTemplate;              //@synthesize correctedSearchTemplate=_correctedSearchTemplate - In the implementation block
-(void)setCorrectedSearchTemplate:(GEORPCorrectedSearch *)arg1 ;
-(GEORPCorrectedSearch *)correctedSearchTemplate;
-(BOOL)hasCorrectedSearchTemplate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPlaceSearchResponse *)response;
-(GEOPlaceSearchRequest *)request;
-(id)dictionaryRepresentation;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(BOOL)hasResponse;
-(BOOL)hasRequest;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
@end
