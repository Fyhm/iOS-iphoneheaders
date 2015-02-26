/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MessageUI/MFComposeHeaderView.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField;

@interface MFComposeSubjectView : MFComposeHeaderView <UITextFieldDelegate> {

	UITextField* _textField;
	unsigned _delegateRespondsToTextChange : 1;

}

@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)refreshPreferredContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)endEditing:(BOOL)arg1 ;
-(BOOL)_canBecomeFirstResponder;
-(void)textChanged:(id)arg1 ;
-(void)textFieldDidResignFirstResponder:(id)arg1 ;
-(id)textField;
-(void)textFieldDidBecomeFirstResponder:(id)arg1 ;
@end
