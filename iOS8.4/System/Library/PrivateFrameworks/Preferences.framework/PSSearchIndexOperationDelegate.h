/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSSearchIndexOperationDelegate <PSSpecifierObserver>
@optional
-(void)searchIndexOperationDidCancel:(id)arg1;

@required
-(void)searchIndexOperation:(id)arg1 didFindSpecifierDataSource:(id)arg2;
-(void)searchIndexOperationDidFinish:(id)arg1 searchEntries:(id)arg2;

@end
