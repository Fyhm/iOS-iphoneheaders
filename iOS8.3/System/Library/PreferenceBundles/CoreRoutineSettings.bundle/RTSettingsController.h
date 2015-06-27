/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:55:15 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class RTRoutineManager, PSListController;

@interface RTSettingsController : PSListController {

	RTRoutineManager* _routineManager;
	PSListController* _parentListController;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;                    //@synthesize routineManager=_routineManager - In the implementation block
@property (assign,nonatomic,__weak) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
-(void)_showPrivacyCluster:(id)arg1 ;
-(void)_dumpLogs;
-(void)_clearRouteHistory;
-(void)setLogPreferenceValue:(id)arg1 specifier:(id)arg2 ;
-(id)initWithRoutineManager:(id)arg1 andParentListController:(id)arg2 ;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(id)specifiers;
@end
