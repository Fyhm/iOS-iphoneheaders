/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MSASPlatform <NSObject>
@optional
-(BOOL)shouldEnableNewFeatures;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1;
-(BOOL)shouldDownloadEarliestPhotosFirst;
-(void)setSuppressCellular:(BOOL)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(id)metadataSocketOptionsForPersonID:(id)arg1;

@required
-(BOOL)shouldLogAtLevel:(int)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(id)pathAlbumSharingDir;
-(Class)pluginClass;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
-(id)pushTokenForPersonID:(id)arg1;
-(id)baseSharingURLForPersonID:(id)arg1;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
-(id)albumSharingDaemon;

@end
