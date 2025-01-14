/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:12 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/MFMailComposeViewControllerDelegate.h>
#import <iTunesStoreUI/SUOverlayBackgroundDelegate.h>

@class SUClientInterface, SUOverlayBackgroundViewController, SUPreviewOverlayViewController, UITabBarController, NSString;

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate> {

	SUClientInterface* _clientInterface;
	SUOverlayBackgroundViewController* _overlayBackgroundViewController;
	SUPreviewOverlayViewController* _previewOverlayViewController;
	UITabBarController* _rootViewController;

}

@property (nonatomic,readonly) SUClientInterface * clientInterface;                                              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) UITabBarController * rootViewController;                                            //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,readonly) SUOverlayBackgroundViewController * overlayBackgroundViewController;              //@synthesize overlayBackgroundViewController=_overlayBackgroundViewController - In the implementation block
@property (nonatomic,readonly) SUPreviewOverlayViewController * previewOverlayViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setRootViewController:(UITabBarController *)arg1 ;
-(UITabBarController *)rootViewController;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(SUClientInterface *)clientInterface;
-(void)_showPreviewOverlayAnimated:(BOOL)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(SUOverlayBackgroundViewController *)overlayBackgroundViewController;
-(BOOL)presentOverlayBackgroundViewController:(id)arg1 ;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg1 ;
-(void)dismissOverlayBackgroundViewController;
-(id)_previewOverlayViewController;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(BOOL)enterAccountFlowWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)performActionForDialog:(id)arg1 button:(id)arg2 ;
-(void)_removePreviewOverlayViewController;
-(void)hidePreviewOverlayAnimated:(BOOL)arg1 ;
-(SUPreviewOverlayViewController *)previewOverlayViewController;
-(void)showPreviewOverlayAnimated:(BOOL)arg1 ;
@end

