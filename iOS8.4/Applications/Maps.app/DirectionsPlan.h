/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/NSCopying.h>

@class NSString, GEOStorageRouteRequestStorage;

@interface DirectionsPlan : PBCodable <NSCopying> {

	double _arrivalTime;
	unsigned long long _currentRouteIndex;
	unsigned long long _currentRouteStep;
	double _departureTime;
	NSString* _destinationString;
	int _displayMethod;
	NSString* _originString;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	SCD_Struct_Ma36 _has;

}

@property (nonatomic,readonly) char hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,readonly) char hasOriginString; 
@property (nonatomic,retain) NSString * originString;                                          //@synthesize originString=_originString - In the implementation block
@property (nonatomic,readonly) char hasDestinationString; 
@property (nonatomic,retain) NSString * destinationString;                                     //@synthesize destinationString=_destinationString - In the implementation block
@property (assign,nonatomic) char hasDepartureTime; 
@property (assign,nonatomic) double departureTime;                                             //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) char hasArrivalTime; 
@property (assign,nonatomic) double arrivalTime;                                               //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) char hasCurrentRouteIndex; 
@property (assign,nonatomic) unsigned long long currentRouteIndex;                             //@synthesize currentRouteIndex=_currentRouteIndex - In the implementation block
@property (assign,nonatomic) char hasCurrentRouteStep; 
@property (assign,nonatomic) unsigned long long currentRouteStep;                              //@synthesize currentRouteStep=_currentRouteStep - In the implementation block
@property (assign,nonatomic) char hasDisplayMethod; 
@property (assign,nonatomic) int displayMethod;                                                //@synthesize displayMethod=_displayMethod - In the implementation block
-(void)setDisplayMethod:(int)arg1 ;
-(void)setOriginString:(NSString *)arg1 ;
-(void)setDestinationString:(NSString *)arg1 ;
-(void)setCurrentRouteIndex:(unsigned long long)arg1 ;
-(void)setCurrentRouteStep:(unsigned long long)arg1 ;
-(NSString *)originString;
-(NSString *)destinationString;
-(char)hasDisplayMethod;
-(int)displayMethod;
-(unsigned long long)currentRouteIndex;
-(unsigned long long)currentRouteStep;
-(char)hasOriginString;
-(char)hasDestinationString;
-(void)setArrivalTime:(double)arg1 ;
-(void)setHasArrivalTime:(char)arg1 ;
-(char)hasArrivalTime;
-(void)setHasCurrentRouteIndex:(char)arg1 ;
-(char)hasCurrentRouteIndex;
-(void)setHasCurrentRouteStep:(char)arg1 ;
-(char)hasCurrentRouteStep;
-(void)setHasDisplayMethod:(char)arg1 ;
-(double)arrivalTime;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDepartureTime:(double)arg1 ;
-(void)setHasDepartureTime:(char)arg1 ;
-(char)hasDepartureTime;
-(double)departureTime;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
-(char)hasRouteRequestStorage;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
