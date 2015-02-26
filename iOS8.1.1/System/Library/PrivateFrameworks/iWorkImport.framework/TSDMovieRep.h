/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:35 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <iWorkImport/TSKMediaPlayerControllerDelegate.h>

@protocol TSKMediaPlayerController;
@class NSObject, CALayer, TSDFrameRep, AVAsset, TSDMovieInfo, NSString;

@interface TSDMovieRep : TSDMediaRep <TSKMediaPlayerControllerDelegate> {

	NSObject*<TSKMediaPlayerController> mPlayerController;
	BOOL mCurrentlyObservingPlayerLayer;
	BOOL mPlayerLayerShouldBeDisplayed;
	CALayer* mPlayerLayer;
	CALayer* mLayerToStroke;
	CALayer* mMovieReflectionLayer;
	CALayer* mMovieReflectionMaskLayer;
	CALayer* mReflectionPlayerLayer;
	CALayer* mReflectionPlayerStrokeMaskLayer;
	CALayer* mPlayerStrokeLayer;
	CALayer* mReflectionPlayerStrokeLayer;
	TSDFrameRep* mReflectionFrameRep;
	CALayer* mReflectionFrameMaskLayer;
	AVAsset* mAssetForPlayability;
	BOOL mDidCheckPlayability;
	BOOL mIsPlayable;
	BOOL mPlayButtonKnobVisible;
	BOOL mDidCancelUpdatingPlayButtonVisibility;
	BOOL mInReadMode;
	CGImageRef mAlternatePosterImage;
	unsigned long long mIsChangingDynamicVisibleTimeCount;
	float mDynamicVolume;
	BOOL mIsChangingDynamicVolume;
	BOOL mNeedsTeardownPlayerController;
	BOOL mDelayTearingDownPlayerController;

}

@property (nonatomic,readonly) TSDMovieInfo * movieInfo; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSObject*<TSKMediaPlayerController> playerController; 
@property (nonatomic,readonly) BOOL shouldSingleTapPlay; 
@property (assign,nonatomic) CGImageRef alternatePosterImage; 
@property (nonatomic,readonly) double visibleTime; 
@property (nonatomic,readonly) float volume; 
@property (nonatomic,readonly) BOOL p_playButtonFitsInFrame; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)willBeRemoved;
-(void)willUpdateLayer:(id)arg1 ;
-(void)didUpdateLayer:(id)arg1 ;
-(void)becameSelected;
-(void)becameNotSelected;
-(id)dynamicResizeDidBegin;
-(void)dynamicResizeDidEndWithTracker:(id)arg1 ;
-(id)newTrackerForKnob:(id)arg1 ;
-(BOOL)directlyManagesLayerContent;
-(void)updateFromLayout;
-(void)addKnobsToArray:(id)arg1 ;
-(void)processChangedProperty:(int)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(BOOL)directlyManagesVisibilityOfKnob:(id)arg1 ;
-(void)willBeginReadMode;
-(void)willEndReadMode;
-(BOOL)wantsToHandleTapsWhenLocked;
-(BOOL)handleSingleTapAtPoint:(CGPoint)arg1 ;
-(void)screenScaleDidChange;
-(void)updateLayerGeometryFromLayout:(id)arg1 ;
-(id)additionalLayersUnderLayer;
-(id)additionalLayersOverLayer;
-(unsigned long long)enabledKnobMask;
-(void)dynamicRotateDidBegin;
-(void)dynamicRotateDidEndWithTracker:(id)arg1 ;
-(void)willBeginEyedropperMode;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(void)p_disposeStrokeLayer;
-(void)p_disposeMaskLayer;
-(void)i_updateFrameRep;
-(BOOL)shouldShowMediaReplaceUI;
-(void)p_createMaskLayerForLayer:(id)arg1 ;
-(void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2 ;
-(BOOL)shouldShowReflection;
-(void)p_disposeReflectionStrokeLayers;
-(void)p_reallyDisposeReflectionLayers;
-(void)disposeReflectionLayer;
-(BOOL)p_shouldHideReflectionLayers;
-(void)p_hideReflectionLayers;
-(void)createReflectionLayer;
-(void)p_setupReflectionPlayerLayerIfNecessary;
-(void)p_showReflectionLayers;
-(void)p_drawReflectionStrokeInContext:(CGContextRef)arg1 ;
-(void)p_drawStrokeInContext:(CGContextRef)arg1 ;
-(void)p_setupShapePlayerStrokeLayer;
-(void)p_setupShapeReflectionPlayerStrokeLayer;
-(void)p_setupTilingPlayerStrokeLayer;
-(void)p_setupTilingReflectionPlayerStrokeLayer;
-(void)p_createReflectionPlayerStrokeMaskLayer;
-(void)p_checkAndsyncTilingLayerState:(BOOL)arg1 ;
-(void)p_setupPlayerStrokeLayers:(BOOL)arg1 ;
-(id)playerStrokeLayer;
-(id)reflectionPlayerStrokeLayer;
-(void)p_arrangeLayerVisibility:(id)arg1 ;
-(BOOL)p_needsTilingLayerForStroke:(id)arg1 ;
-(void)p_setupStrokeLayers:(BOOL)arg1 needsMaskLayer:(BOOL)arg2 isFrame:(BOOL)arg3 ;
-(void)p_teardownPlayerControllerIfNeeded;
-(void)p_updateMovieReflectionMaskLayer;
-(CGImageRef)alternatePosterImage;
-(id)movieLayout;
-(void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(CGPoint)arg2 bounds:(CGRect)arg3 ;
-(CGRect)p_strokeFrameForLayerFrame:(CGRect)arg1 ;
-(void)p_placeReflectionPlayerLayer:(CGRect)arg1 transform:(CGAffineTransform)arg2 ;
-(void)p_updatePlayButtonVisibility;
-(void)p_updateReflectionFrameRep;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 forShadowOrHitTest:(BOOL)arg6 ;
-(void)p_commonDrawStrokeInContext:(CGContextRef)arg1 ;
-(id)p_shapeLayerForPlayerStroke;
-(void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(CGRect)arg3 ;
-(id)p_shapeLayerForReflectionStroke;
-(void)p_drawReflectionGradientIntoMovieReflectionLayer:(CGContextRef)arg1 reflectionSize:(CGSize)arg2 ;
-(void)p_drawPosterImageInContext:(CGContextRef)arg1 ;
-(void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
-(void)p_stopUpdatingUIStateForMoviePlayability;
-(void)p_updateUIStateForMoviePlayability;
-(void)p_updateRepeatMode;
-(void)p_updateVolume;
-(void)p_updateStartTime;
-(void)p_updateEndTime;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(void)p_setupPlayerControllerIfNecessary;
-(BOOL)p_playButtonFitsInFrame;
-(BOOL)shouldSingleTapPlay;
-(void)p_addPlayButtonToKnobs:(id)arg1 ;
-(id)p_playButtonKnob;
-(void)p_cancelUpdatingUIStateForMoviePlayability;
-(void)p_teardownPlayerController;
-(void)p_setupPlayerLayerIfNecessary;
-(BOOL)canResetMediaSize;
-(void)p_togglePlaying;
-(void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2 ;
-(void)playbackDidStopForPlayerController:(id)arg1 ;
-(id)p_tilingLayerForPlayerStroke;
-(id)p_tilingLayerForReflectionStroke;
-(void)setShapeReflectionPlayerStrokeLayer:(id)arg1 ;
-(CGImageRef)newFrameMaskForViewScale:(double)arg1 frameRect:(CGRect*)arg2 ;
-(void)p_playForKnob;
-(void)setAlternatePosterImage:(CGImageRef)arg1 ;
-(double)visibleTime;
-(void)dynamicVisibleTimeChangeDidBegin;
-(void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dynamicVisibleTimeChangeDidEnd;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeUpdateToValue:(float)arg1 ;
-(void)dynamicVolumeChangeDidEnd;
-(BOOL)isPlayable;
-(void)dealloc;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<TSKMediaPlayerController>)playerController;
-(TSDMovieInfo *)movieInfo;
-(BOOL)isDraggable;
-(float)volume;
-(BOOL)isPlaying;
@end
