/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/IMCloudSyncNode.h>

@interface AEAnnotationCloudSyncNode : IMCloudSyncNode
+(id)cloudDataCurrentRevision;
+(id)cloudDataMaxRevision;
+(id)globalAnnotationsKeyForAssetID:(id)arg1 ;
+(id)userAnnotationsKeyForAssetID:(id)arg1 ;
-(char)isUserAnnotationsNode;
-(char)isGlobalAnnotationsNode;
-(char)isAnnotationsNode;
-(id)assetID;
-(id)name;
@end
