/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSAutomaticReadingListSocialSource.h>

@interface WBSAutomaticReadingListSinaWeiboSource : WBSAutomaticReadingListSocialSource
+(id)sharedSource;
-(Class)itemClass;
-(id)serviceName;
-(id)serviceType;
-(id)accountTypeIdentifier;
-(id)resourceURLString;
-(id)requestParametersForRecordsWithAge:(int)arg1 relativeTo:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareNewestRecordInRange:(id)arg1 toNewestRecordInRange:(id)arg2 ;
-(long long)compareOldestRecordInRange:(id)arg1 toOldestRecordInRange:(id)arg2 ;
-(long long)compareItem:(id)arg1 toItem:(id)arg2 ;
@end
