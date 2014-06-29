/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:40 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>

@protocol ABNewPersonViewControllerDelegate, ABPresenterDelegate;
@class ABPersonTableViewDataSource, _UIAccessDeniedView, ABContactViewController, CNContact, ABPersonViewControllerHelper, ABContactsFilter;

@interface ABNewPersonViewController : UIViewController {

	<ABNewPersonViewControllerDelegate>* _newPersonViewDelegate;
	id _parentGroup;
	id _helper;
	void* _recordForNewPerson;
	bool _isRealViewLoaded;
	ABPersonTableViewDataSource* _dataSource;
	_UIAccessDeniedView* _accessDeniedView;
	void* _parentSource;
	ABContactViewController* _contactViewController;
	<ABPresenterDelegate>* _presentingDelegate;
	CNContact* _mergeContact;

}

@property (assign,nonatomic) <ABNewPersonViewControllerDelegate> * newPersonViewDelegate; 
@property (assign,nonatomic) void* addressBook; 
@property (assign,nonatomic) void* displayedPerson; 
@property (assign,nonatomic) void* parentGroup; 
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                  //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (assign,nonatomic) bool savesNewContactOnSuspend; 
@property (nonatomic,retain) <ABStyleProvider> * styleProvider; 
@property (nonatomic,retain) ABContactsFilter * parentContactsFilter;                                  //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) ABContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) <ABPresenterDelegate> * presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) bool showsCancelButton; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                 //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) bool isRealViewLoaded;                                                    //@synthesize isRealViewLoaded=_isRealViewLoaded - In the implementation block
-(bool)ckCanDismissWhenSuspending;
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(bool)supportedInterfaceOrientation:(long long)arg1 ;
-(int)abViewControllerType;
-(id)contactViewController;
-(void)setNewPersonViewDelegate:(id)arg1 ;
-(void)setMergeContact:(id)arg1 ;
-(id)presentingDelegate;
-(void)setPresentingDelegate:(id)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(id)accessDeniedView;
-(void)setParentGroup:(void*)arg1 ;
-(void)setParentSource:(void*)arg1 ;
-(void)setSavesNewContactOnSuspend:(bool)arg1 ;
-(void)accessChanged;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(void*)parentGroup;
-(bool)isRealViewLoaded;
-(void)setIsRealViewLoaded:(bool)arg1 ;
-(void*)parentSource;
-(id)mergeContact;
-(id)newPersonViewDelegate;
-(bool)savesNewContactOnSuspend;
-(id)helper;
-(id)parentContactsFilter;
-(void)setParentContactsFilter:(id)arg1 ;
-(void)savePerson:(id)arg1 ;
-(void)saveAndTellDelegate:(bool)arg1 ;
-(void*)recordForNewPerson;
-(id)displayedUIPerson;
-(void)attemptSaveAndTellDelegate:(bool)arg1 ;
-(void)setDisplayedUIPerson:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)dataSource;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)applicationDidResume;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(id)initWithStyle:(int)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(bool)_allowsAutorotation;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(void)setShowsCancelButton:(bool)arg1 ;
-(bool)showsCancelButton;
-(void)save:(id)arg1 ;
-(void)updateNavigationButtons;
-(void)cancel:(id)arg1 ;
-(void*)displayedPerson;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedPerson:(void*)arg1 ;
@end
