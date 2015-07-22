/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMTransitionController.h>

@class UIImage, UITapGestureRecognizer;

@interface MTGridTransitionController : IMTransitionController {

	UIImage* _startImage;
	/*^block*/id _closeHandler;
	UITapGestureRecognizer* _tapGesture;
	CGSize _endSize;
	CGRect _startFrame;

}

@property (assign,nonatomic) CGRect startFrame;                                //@synthesize startFrame=_startFrame - In the implementation block
@property (assign,nonatomic) CGSize endSize;                                   //@synthesize endSize=_endSize - In the implementation block
@property (nonatomic,retain) UIImage * startImage;                             //@synthesize startImage=_startImage - In the implementation block
@property (nonatomic,copy) id closeHandler;                                    //@synthesize closeHandler=_closeHandler - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGesture;              //@synthesize tapGesture=_tapGesture - In the implementation block
-(id)newTransitionAnimator;
-(CGSize)endSize;
-(void)setEndSize:(CGSize)arg1 ;
-(UIImage *)startImage;
-(void)setStartImage:(UIImage *)arg1 ;
-(void)tapped:(id)arg1 ;
-(id)closeHandler;
-(void)transitionAnimationWillStart:(id)arg1 ;
-(void)transitionAnimationEnded:(id)arg1 ;
-(Class)classforTransitionAnimator;
-(void)setCloseHandler:(id)arg1 ;
-(void)dismissViewControllerAnimated:(char)arg1 ;
-(void)presentViewContoller:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 ;
-(UITapGestureRecognizer *)tapGesture;
-(void)setTapGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setStartFrame:(CGRect)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(CGRect)startFrame;
@end
