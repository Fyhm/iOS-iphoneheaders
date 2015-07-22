/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:43 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDate, EKEvent;


@protocol CUIKSingleDayTimelineViewItem <NSObject>
@property (nonatomic,readonly) NSDate * startWithTravelTime; 
@property (nonatomic,readonly) NSDate * start; 
@property (nonatomic,readonly) NSDate * end; 
@property (nonatomic,readonly) BOOL hideTravelTime; 
@property (nonatomic,readonly) double enoughHeightForOneLine; 
@property (nonatomic,readonly) double viewMaxNaturalTextHeight; 
@property (nonatomic,readonly) EKEvent * event; 
@property (assign) CGRect unPinnedViewFrame; 
@property (readonly) BOOL visibleHeightLocked; 
@required
+(double)barToBarHorizontalDistanceIncludingBarWidth;
-(double)enoughHeightForOneLine;
-(double)viewMaxNaturalTextHeight;
-(BOOL)visibleHeightLocked;
-(void)setStagedFrame:(CGRect)arg1;
-(CGRect*)stagedFrame;
-(void)setTravelTimeHeight:(double)arg1;
-(NSDate *)startWithTravelTime;
-(BOOL)hideTravelTime;
-(CGRect)unPinnedViewFrame;
-(void)setUnPinnedViewFrame:(CGRect)arg1;
-(NSDate *)start;
-(NSDate *)end;
-(EKEvent *)event;
-(void)setVisibleHeight:(double)arg1;

@end
