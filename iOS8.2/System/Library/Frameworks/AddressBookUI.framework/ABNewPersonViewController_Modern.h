/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <AddressBookUI/ABContactViewControllerDelegate.h>

@protocol ABNewPersonViewControllerDelegate, ABStyleProvider, ABPresenterDelegate;
@class ABContactViewController, _UIAccessDeniedView, ABPersonViewControllerHelper, ABPersonTableViewDataSource, CNContact, ABContactsFilter, NSString;

@interface ABNewPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate> {

	void* _addressBook;
	void* _displayedPerson;
	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	char _isRealViewLoaded;
	ABContactViewController* _contactViewController;
	_UIAccessDeniedView* _accessDeniedView;
	void* _parentGroup;
	ABPersonViewControllerHelper* _helper;
	ABPersonTableViewDataSource* _dataSource;
	void* _parentSource;
	CNContact* _mergeContact;
	id<ABStyleProvider> _styleProvider;
	ABContactsFilter* _parentContactsFilter;
	id<ABPresenterDelegate> _presentingDelegate;

}

@property (assign,nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate; 
@property (assign,nonatomic) void* addressBook; 
@property (assign,nonatomic) void* displayedPerson; 
@property (assign,nonatomic) void* parentGroup;                                                        //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                  //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                               //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) char savesNewContactOnSuspend; 
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                        //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABContactsFilter * parentContactsFilter;                                  //@synthesize parentContactsFilter=_parentContactsFilter - In the implementation block
@property (nonatomic,readonly) ABContactViewController * contactViewController;                        //@synthesize contactViewController=_contactViewController - In the implementation block
@property (assign,nonatomic) id<ABPresenterDelegate> presentingDelegate;                               //@synthesize presentingDelegate=_presentingDelegate - In the implementation block
@property (assign,nonatomic) char showsCancelButton; 
@property (nonatomic,readonly) _UIAccessDeniedView * accessDeniedView;                                 //@synthesize accessDeniedView=_accessDeniedView - In the implementation block
@property (assign,nonatomic) char isRealViewLoaded;                                                    //@synthesize isRealViewLoaded=_isRealViewLoaded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ABContactViewController *)contactViewController;
-(void)setNewPersonViewDelegate:(id<ABNewPersonViewControllerDelegate>)arg1 ;
-(void)setMergeContact:(CNContact *)arg1 ;
-(id<ABPresenterDelegate>)presentingDelegate;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setPresentingDelegate:(id<ABPresenterDelegate>)arg1 ;
-(void*)displayedPerson;
-(void)setParentGroup:(void*)arg1 ;
-(void)setParentSource:(void*)arg1 ;
-(void)setSavesNewContactOnSuspend:(char)arg1 ;
-(void)accessChanged;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(void*)parentGroup;
-(void)loadContactViewController;
-(char)isRealViewLoaded;
-(void)loadRealView;
-(void)setIsRealViewLoaded:(char)arg1 ;
-(void*)parentSource;
-(CNContact *)mergeContact;
-(id<ABNewPersonViewControllerDelegate>)newPersonViewDelegate;
-(char)savesNewContactOnSuspend;
-(ABPersonViewControllerHelper *)helper;
-(ABContactsFilter *)parentContactsFilter;
-(void)setParentContactsFilter:(ABContactsFilter *)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(_UIAccessDeniedView *)accessDeniedView;
-(void)setAddressBook:(void*)arg1 ;
-(void)setDisplayedPerson:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isKindOfClass:(Class)arg1 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)loadView;
-(id)initWithStyle:(int)arg1 ;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)save:(id)arg1 ;
-(void*)addressBook;
@end
