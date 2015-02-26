/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:00 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField, UIView, NSAttributedString, NSString, UIControl;

@interface SKUIGiftTextFieldTableViewCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;
	UIView* _topBorderView;

}

@property (nonatomic,copy) NSAttributedString * attributedPlaceholder; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) long long keyboardType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,readonly) UIControl * textField;                                //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) id<UITextFieldDelegate> textFieldDelegate; 
@property (nonatomic,copy) NSString * value; 
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setValue:(NSString *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)value;
-(BOOL)isEnabled;
-(NSString *)label;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(UIControl *)textField;
-(void)setAttributedPlaceholder:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedPlaceholder;
-(void)setTextFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(id<UITextFieldDelegate>)textFieldDelegate;
@end
