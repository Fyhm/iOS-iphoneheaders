/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIView, NSString;

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	id<UIViewControllerContextTransitioning> _transitionContext;
	char _removeFromView;
	id _delegate;
	UIView* _toView;
	UIView* _fromView;
	int _transition;

}

@property (assign,nonatomic) id delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIView * toView;                       //@synthesize toView=_toView - In the implementation block
@property (assign,nonatomic) UIView * fromView;                     //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) char removeFromView;                   //@synthesize removeFromView=_removeFromView - In the implementation block
@property (assign,nonatomic) int transition;                        //@synthesize transition=_transition - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidStart:(id)arg1 ;
-(char)transitionViewShouldUseViewControllerCallbacks;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(char)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(CGPoint)transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(CGPoint)arg4 ;
-(void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2 ;
-(UIView *)fromView;
-(UIView *)toView;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(id)initWithTransition:(int)arg1 ;
-(void)setToView:(UIView *)arg1 ;
-(void)setFromView:(UIView *)arg1 ;
-(void)setRemoveFromView:(char)arg1 ;
-(void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2 ;
-(CGPoint)_adjustOrigin:(CGPoint)arg1 givenOtherOrigin:(CGPoint)arg2 forTransition:(int)arg3 ;
-(char)removeFromView;
@end
