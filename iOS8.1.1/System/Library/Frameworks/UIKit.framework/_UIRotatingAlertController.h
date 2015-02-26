/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAlertController.h>

@protocol _UIRotatingAlertControllerDelegate, UIPopoverPresentationControllerDelegate;
@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController {

	id<_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	UIViewController* _presentedViewControllerWhileRotating;
	id<UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;

}

@property (assign,nonatomic) id<_UIRotatingAlertControllerDelegate> rotatingSheetDelegate;              //@synthesize rotatingSheetDelegate=_rotatingSheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                                        //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(void)dealloc;
-(id)init;
-(void)willRotate;
-(void)didRotate;
-(void)doneWithSheet;
-(void)setRotatingSheetDelegate:(id<_UIRotatingAlertControllerDelegate>)arg1 ;
-(BOOL)presentSheet;
-(void)setArrowDirections:(unsigned long long)arg1 ;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(void)_updateSheetPositionAfterRotation;
-(id<_UIRotatingAlertControllerDelegate>)rotatingSheetDelegate;
-(unsigned long long)arrowDirections;
@end
