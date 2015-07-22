/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface MPAVRoute : NSObject {

	NSString* _routeName;
	BOOL _picked;
	NSDictionary* _avRouteDescription;
	MPAVRoute* _wirelessDisplayRoute;
	long long _displayRouteType;
	BOOL _requiresPassword;
	NSString* _routeUID;
	long long _routeType;
	long long _pickableRouteType;
	long long _routeSubtype;

}

@property (nonatomic,readonly) NSString * routeName; 
@property (nonatomic,readonly) NSString * routeUID;                           //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) long long routeType;                           //@synthesize routeType=_routeType - In the implementation block
@property (nonatomic,readonly) long long pickableRouteType;                   //@synthesize pickableRouteType=_pickableRouteType - In the implementation block
@property (nonatomic,readonly) long long routeSubtype;                        //@synthesize routeSubtype=_routeSubtype - In the implementation block
@property (nonatomic,readonly) MPAVRoute * wirelessDisplayRoute; 
@property (getter=isPicked,nonatomic,readonly) BOOL picked; 
@property (nonatomic,readonly) BOOL requiresPassword;                         //@synthesize requiresPassword=_requiresPassword - In the implementation block
@property (nonatomic,readonly) long long passwordType; 
@property (nonatomic,readonly) BOOL displayIsPicked; 
@property (nonatomic,readonly) long long displayRouteType; 
-(BOOL)displayIsPicked;
-(id)_initWithAVRouteDescription:(id)arg1 ;
-(void)setRouteName:(NSString *)arg1 ;
-(void)setWirelessDisplayRoute:(MPAVRoute *)arg1 ;
-(void)setPicked:(BOOL)arg1 ;
-(long long)passwordType;
-(void)_routingControllerPickedRouteNotification:(id)arg1 ;
-(void)setAVRouteDescription:(id)arg1 ;
-(long long)displayRouteType;
-(void)setDisplayRouteType:(long long)arg1 ;
-(NSString *)routeUID;
-(id)avRouteDescription;
-(long long)routeType;
-(long long)routeSubtype;
-(long long)pickableRouteType;
-(NSString *)routeName;
-(BOOL)requiresPassword;
-(BOOL)isPicked;
-(MPAVRoute *)wirelessDisplayRoute;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
