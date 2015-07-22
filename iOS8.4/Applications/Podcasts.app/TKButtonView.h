/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>

@class TKButton, UIColor, TKButtonComponent;

@interface TKButtonView : TKView {

	TKButton* _button;
	UIColor* _themeColor;

}

@property (retain) TKButton * button;                          //@synthesize button=_button - In the implementation block
@property (retain) TKButtonComponent * component; 
@property (retain) UIColor * themeColor;                       //@synthesize themeColor=_themeColor - In the implementation block
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
+(id)textAttributesWithTheme:(id)arg1 ;
+(int)stringDrawingOptions;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(UIColor *)themeColor;
-(void)setThemeColor:(UIColor *)arg1 ;
-(void)itemSelected:(id)arg1 ;
-(TKButton *)button;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)tintColorDidChange;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setButton:(TKButton *)arg1 ;
@end
