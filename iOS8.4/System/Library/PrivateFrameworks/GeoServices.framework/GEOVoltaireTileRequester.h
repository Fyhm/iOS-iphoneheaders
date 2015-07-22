/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOTileRequester.h>
#import <GeoServices/GEOVoltaireMultiTileDownloaderDelegate.h>
#import <GeoServices/GEOTileRequesterDelegate.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@class NSMutableArray, NSThread, NSTimer, GEOVoltaireSimpleTileRequester, NSString;

@interface GEOVoltaireTileRequester : GEOTileRequester <GEOVoltaireMultiTileDownloaderDelegate, GEOTileRequesterDelegate, GEOResourceManifestTileGroupObserver> {

	NSMutableArray* _activeDownloads;
	NSThread* _startThread;
	NSTimer* _activeTileGroupTimeoutTimer;
	NSMutableArray* _errors;
	GEOVoltaireSimpleTileRequester* _simpleRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE52*)newExpiringTilesets;
+(BOOL)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(Class)multiDownloaderClass;
+(Class)simpleRequesterClass;
+(unsigned char)tileProviderIdentifier;
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)cleanup;
-(void)_startWithTileKeys:(id)arg1 ;
-(void)_failedToReceiveActiveTileGroup:(id)arg1 ;
-(id)multiTileURLStringForTileKey:(GEOTileKey*)arg1 useStatusCodes:(BOOL*)arg2 ;
-(void)tryFinish;
-(void)tileDownloadFinished:(id)arg1 ;
-(void)tileDownload:(id)arg1 didReceiveData:(id)arg2 edition:(unsigned)arg3 forKey:(GEOTileKey)arg4 ;
-(void)tileDownload:(id)arg1 didFailWithError:(id)arg2 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 ;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSet:(unsigned)arg4 etag:(id)arg5 forKey:(GEOTileKey)arg6 userInfo:(id)arg7 ;
-(void)tileRequesterFinished:(id)arg1 ;
@end
