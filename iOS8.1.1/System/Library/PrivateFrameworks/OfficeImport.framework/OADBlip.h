/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class OADSubBlip;

@interface OADBlip : NSObject {

	unsigned mReferenceCount;
	OADSubBlip* mMainSubBlip;
	OADSubBlip* mAltSubBlip;

}
+(id)pathExtensionForBlipType:(int)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned*)referenceCount;
-(id)mainSubBlip;
-(void)setMainSubBlip:(id)arg1 ;
-(void)setAltSubBlip:(id)arg1 ;
-(id)altSubBlip;
@end
