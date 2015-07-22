/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKShareID, CKShare;

@interface CKDShareResponse : NSObject {

	CKShareID* _shareID;
	CKShare* _share;

}

@property (nonatomic,retain) CKShareID * shareID;              //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) CKShare * share;                  //@synthesize share=_share - In the implementation block
-(id)description;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(id)CKPropertiesDescription;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
@end
