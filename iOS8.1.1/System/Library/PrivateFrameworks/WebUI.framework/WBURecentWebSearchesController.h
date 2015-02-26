/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:55 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebUI/WBSRecentWebSearchesController.h>

@class NSString;

@interface WBURecentWebSearchesController : WBSRecentWebSearchesController {

	NSString* _preferencesDomain;
	NSString* _pathToLegacySearchesFile;

}
+(unsigned long long)_maximumNumberOfSearchesToTrack;
-(void)_removeLegacyRecentSearchesData;
-(id)initWithPreferencesDomain:(id)arg1 pathToLegacySearchesFile:(id)arg2 ;
-(void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2 ;
-(id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1 ;
-(void)_migrateLegacyData;
@end
