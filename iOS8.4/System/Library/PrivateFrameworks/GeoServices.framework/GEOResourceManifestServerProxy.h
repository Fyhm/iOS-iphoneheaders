/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOResourceManifestServerProxy <NSObject>
@property (assign,nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<GEOResourceManifestServerProxyDelegate>)delegate;
-(id)configuration;
-(id)authToken;
-(id)initWithDelegate:(id)arg1 configuration:(id)arg2;
-(void)openConnection;
-(void)closeConnection;
-(id)serverQueue;
-(void)setManifestToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)updateIfNecessary:(/*^block*/id)arg1;
-(void)forceUpdate:(/*^block*/id)arg1;
-(void)getResourceManifestWithHandler:(/*^block*/id)arg1;
-(oneway void)setActiveTileGroupIdentifier:(id)arg1;
-(oneway void)resetActiveTileGroup;

@end
