/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:16:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UsageSettings/UsageSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <UsageSettings/MBManagerDelegate.h>

@protocol OS_dispatch_queue;
@class MBManager, UIAlertView, BackupStatusView, NSArray, PSSpecifier, NSObject;

@interface BackupController : PSListController <MBManagerDelegate> {

	MBManager* _backupManager;
	int _backupState;
	char _backupEnabled;
	char _showingEnableBackupConfirmation;
	UIAlertView* _backupAlertView;
	char _finishedInitialLoad;
	BackupStatusView* _backupStatusView;
	NSArray* _backupNowSpecifiers;
	PSSpecifier* _backupNowButton;
	char _backupCancelled;
	char _networkSupportsBackup;
	WiFiManagerClientRef _wifiManagerClient;
	WiFiDeviceClientRef _wifiDeviceClient;
	NSObject*<OS_dispatch_queue> _backup_state_queue;

}
-(void)setBackupEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)updateBusyState;
-(void)openBackupHelpPage:(id)arg1 ;
-(void)updateLastBackupDate;
-(void)startListeningForNetworkChanges;
-(void)checkIfNetworkSupportsBackup;
-(void)stopListeningForNetworkChanges;
-(void)setNetworkSupportsBackup:(char)arg1 ;
-(char)policyPreventsBackup;
-(void)_setBackupEnabled:(char)arg1 passcode:(id)arg2 ;
-(void)_enableBackupWithSpecifier:(id)arg1 ;
-(void)_disableBackupWithSpecifier:(id)arg1 ;
-(void)_backupEnabledSwitchCancelled:(id)arg1 ;
-(void)updateLastBackupDateInvalidatePrevious:(char)arg1 ;
-(void)setBackupProgress:(float)arg1 estimatedTimeRemaining:(unsigned)arg2 allowDecrease:(char)arg3 ;
-(id)dateStringOfLatestBackup;
-(void)beginBackup:(id)arg1 ;
-(void)_updateToBackupState:(int)arg1 backupError:(id)arg2 progress:(float)arg3 timeRemaining:(unsigned)arg4 restoreStateInfo:(id)arg5 backupEnabled:(char)arg6 ;
-(void)_updateToBackupState:(id)arg1 restoreState:(id)arg2 backupEnabled:(char)arg3 ;
-(void)appleAccountChanged;
-(void)cancelRestore:(id)arg1 ;
-(id)cachedIsBackupEnabledNumber;
-(void)setLastBackupDateString:(id)arg1 ;
-(void)cancelBackup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)manager:(id)arg1 didSetBackupEnabled:(char)arg2 ;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned)arg3 ;
-(void)managerDidFinishBackup:(id)arg1 ;
-(void)managerDidFinishRestore:(id)arg1 ;
-(void)managerDidCancelRestore:(id)arg1 ;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2 ;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2 ;
-(void)managerDidLoseConnectionToService:(id)arg1 ;
-(char)isBackupEnabled;
-(id)specifiers;
-(void)reloadSpecifiers;
-(Class)tableViewClass;
-(void)willUnlock;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
@end
