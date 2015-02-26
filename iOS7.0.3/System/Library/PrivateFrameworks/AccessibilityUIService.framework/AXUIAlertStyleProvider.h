/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:06 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUIService/AccessibilityUIService-Structs.h>
#import <AccessibilityUIService/AXUIAlertStyleProvider.h>

@protocol AXUIAlertStyleProvider <NSObject>
@optional
-(id)alertBackgroundImageForType:(unsigned)arg1;
-(UIEdgeInsets*)alertBackgroundImageCapInsetsForType:(unsigned)arg1;
-(float)alertBackgroundCornerRadiusForType:(unsigned)arg1;

@required
-(UIEdgeInsets*)alertEdgeInsetsForType:(unsigned)arg1;
-(int)alertPositionForType:(unsigned)arg1;
-(BOOL)alertShouldBeAsWideAsScreenForType:(unsigned)arg1;
-(double)alertFadeAnimationDurationForType:(unsigned)arg1;
-(id)alertTextLabelFontForType:(unsigned)arg1;
-(id)alertTextLabelTextColorForType:(unsigned)arg1;
-(id)alertTextLabelBackgroundColorForType:(unsigned)arg1;
-(id)alertTextLabelShadowColorForType:(unsigned)arg1;
-(UIOffset*)alertTextLabelShadowOffsetForType:(unsigned)arg1;
-(float)alertTextLabelLineHeightOffsetForType:(unsigned)arg1;
-(int)alertBackgroundStyleForType:(unsigned)arg1;
-(CGSize*)alertBackgroundSizeForType:(unsigned)arg1;
-(UIEdgeInsets*)alertContentEdgeInsetsForType:(unsigned)arg1;
-(id)alertSubtitleTextLabelFontForType:(unsigned)arg1;
-(id)alertSubtitleTextLabelTextColorForType:(unsigned)arg1;
-(id)alertSubtitleTextLabelBackgroundColorForType:(unsigned)arg1;
-(id)alertSubtitleTextLabelShadowColorForType:(unsigned)arg1;
-(UIOffset*)alertSubtitleTextLabelShadowOffsetForType:(unsigned)arg1;
-(float)alertSubtitleTextLabelLineHeightOffsetForType:(unsigned)arg1;
-(float)alertSubtitleTextLabelVerticalSpacingHeightWithTextLabelForType:(unsigned)arg1;
-(UIEdgeInsets*)alertIconImageViewEdgeInsetsForType:(unsigned)arg1;
@end


@class NSBundle;

@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider> {

	NSBundle* _bundle;

}

@property (nonatomic,retain) NSBundle * bundle;              //@synthesize bundle=_bundle - In the implementation block
-(void)dealloc;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
-(UIEdgeInsets)alertEdgeInsetsForType:(unsigned)arg1 ;
-(int)alertPositionForType:(unsigned)arg1 ;
-(BOOL)alertShouldBeAsWideAsScreenForType:(unsigned)arg1 ;
-(double)alertFadeAnimationDurationForType:(unsigned)arg1 ;
-(id)alertTextLabelFontForType:(unsigned)arg1 ;
-(id)alertTextLabelTextColorForType:(unsigned)arg1 ;
-(id)alertTextLabelBackgroundColorForType:(unsigned)arg1 ;
-(id)alertTextLabelShadowColorForType:(unsigned)arg1 ;
-(UIOffset)alertTextLabelShadowOffsetForType:(unsigned)arg1 ;
-(float)alertTextLabelLineHeightOffsetForType:(unsigned)arg1 ;
-(int)alertBackgroundStyleForType:(unsigned)arg1 ;
-(float)alertBackgroundCornerRadiusForType:(unsigned)arg1 ;
-(CGSize)alertBackgroundSizeForType:(unsigned)arg1 ;
-(UIEdgeInsets)alertContentEdgeInsetsForType:(unsigned)arg1 ;
-(id)alertSubtitleTextLabelFontForType:(unsigned)arg1 ;
-(id)alertSubtitleTextLabelTextColorForType:(unsigned)arg1 ;
-(id)alertSubtitleTextLabelBackgroundColorForType:(unsigned)arg1 ;
-(id)alertSubtitleTextLabelShadowColorForType:(unsigned)arg1 ;
-(UIOffset)alertSubtitleTextLabelShadowOffsetForType:(unsigned)arg1 ;
-(float)alertSubtitleTextLabelLineHeightOffsetForType:(unsigned)arg1 ;
-(float)alertSubtitleTextLabelVerticalSpacingHeightWithTextLabelForType:(unsigned)arg1 ;
-(UIEdgeInsets)alertIconImageViewEdgeInsetsForType:(unsigned)arg1 ;
@end
