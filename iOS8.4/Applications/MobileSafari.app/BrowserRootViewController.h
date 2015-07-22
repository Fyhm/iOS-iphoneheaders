/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIViewController.h>

@class NSArray, CatalogViewController;

@interface BrowserRootViewController : UIViewController {

	NSArray* _keyCommands;
	int _preferredStatusBarStyle;
	int _lastKnownOrientation;
	CatalogViewController* _catalogViewController;

}

@property (assign,nonatomic) int preferredStatusBarStyle; 
@property (assign,nonatomic) int lastKnownOrientation;                                   //@synthesize lastKnownOrientation=_lastKnownOrientation - In the implementation block
@property (nonatomic,retain) CatalogViewController * catalogViewController;              //@synthesize catalogViewController=_catalogViewController - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(CatalogViewController *)catalogViewController;
-(void)setLastKnownOrientation:(int)arg1 ;
-(void)setCatalogViewController:(CatalogViewController *)arg1 ;
-(void)_reloadKeyPressed;
-(void)_stopLoadingKeyPressed;
-(void)_navigateBackKeyPressed;
-(void)_navigateForwardKeyPressed;
-(void)_focusAddressFieldKeyPressed;
-(void)_newTabKeyPressed;
-(void)_closeActiveTabKeyPressed;
-(int)_sizeClassForWidth:(float)arg1 ;
-(int)lastKnownOrientation;
-(id)init;
-(int)preferredStatusBarStyle;
-(id)keyCommands;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)_getRotationContentSettings:(SCD_Struct_Br7*)arg1 ;
-(void)setPreferredStatusBarStyle:(int)arg1 ;
@end
