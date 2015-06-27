/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMailSettings/MobileMailSettings-Structs.h>
#import <Preferences/PSListController.h>
#import <MobileMailSettings/MailboxBehaviorMailboxPickerDelegate.h>
#import <MobileMailSettings/ACUIIdentityPickerViewControllerDelegate.h>

@class MailAccount, NSMutableDictionary, NSString;

@interface AccountPSAdvancedController : PSListController <MailboxBehaviorMailboxPickerDelegate, ACUIIdentityPickerViewControllerDelegate> {

	MailAccount* _account;
	NSMutableDictionary* _accountValues;
	NSMutableDictionary* _originalAccountValues;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountPropertyWithSpecifier:(id)arg1 ;
-(void)setSSLSetting:(id)arg1 withSpecifier:(id)arg2 ;
-(void)setSMIMEProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_secureMIMESigningAndEncryptionSpecifiers;
-(void)_updateArchiveByDefaultSpecifiers;
-(void)_resetTargetsForSpecifiers:(id)arg1 ;
-(id)mailboxUidForType:(int)arg1 ;
-(void)pickerDidChooseMailbox:(id)arg1 forType:(int)arg2 ;
-(char)_allowedToEnableSpecifier:(id)arg1 ;
-(id)mailbox:(id)arg1 ;
-(id)authSchemeValuesForSpecifier:(id)arg1 ;
-(id)authSchemeTitlesForSpecifier:(id)arg1 ;
-(void)setDeleteIntervalString:(id)arg1 withSpecifier:(id)arg2 ;
-(id)deleteIntervalString;
-(char)isPropertyEnabledForIdentityPickerController:(id)arg1 ;
-(SecIdentityRef)selectedIdentityForIdentityPickerController:(id)arg1 ;
-(void)identityPickerController:(id)arg1 setPropertyEnabled:(char)arg2 withIdentity:(SecIdentityRef)arg3 ;
-(id)localizedSwitchNameForIdentityPickerController:(id)arg1 ;
-(id)copyIdentitiesForIdentityPickerController:(id)arg1 ;
-(SecTrustRef)copyTrustForIdentityPickerController:(id)arg1 identity:(SecIdentityRef)arg2 ;
-(id)emailAddressesForIdentityPickerController:(id)arg1 ;
-(char)allowEditingForIdentityPickerController:(id)arg1 ;
-(id)account;
-(char)storeMailboxTypeOnServer:(int)arg1 ;
-(id)specifiers;
-(char)shouldSelectResponderOnAppearance;
@end
