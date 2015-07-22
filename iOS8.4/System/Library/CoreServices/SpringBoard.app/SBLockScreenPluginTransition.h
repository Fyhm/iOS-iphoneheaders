/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class SBAwayViewPluginController, SBLockScreenViewController, SBLockOverlayContext;

@interface SBLockScreenPluginTransition : NSObject {

	SBAwayViewPluginController* _fromController;
	SBAwayViewPluginController* _toController;
	SBLockScreenViewController* _lockScreenViewController;
	SBLockOverlayContext* _fromOverlay;
	SBLockOverlayContext* _toOverlay;

}

@property (retain,readonly) SBLockScreenViewController * lockScreenViewController;              //@synthesize lockScreenViewController=_lockScreenViewController - In the implementation block
@property (retain,readonly) SBAwayViewPluginController * fromController;                        //@synthesize fromController=_fromController - In the implementation block
@property (retain,readonly) SBLockOverlayContext * fromOverlay;                                 //@synthesize fromOverlay=_fromOverlay - In the implementation block
@property (retain,readonly) SBAwayViewPluginController * toController;                          //@synthesize toController=_toController - In the implementation block
@property (retain,readonly) SBLockOverlayContext * toOverlay;                                   //@synthesize toOverlay=_toOverlay - In the implementation block
-(SBLockScreenViewController *)lockScreenViewController;
-(SBAwayViewPluginController *)fromController;
-(SBAwayViewPluginController *)toController;
-(SBLockOverlayContext *)fromOverlay;
-(SBLockOverlayContext *)toOverlay;
-(void)_removeFromView;
-(void)_addToView;
-(void)_removeViewFromHierarchy:(id)arg1 ;
-(void)beginTransition;
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
@end
