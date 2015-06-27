/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:17 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol TPSimpleNumberPadDelegate;
@class UIButton;

@interface TPSimpleNumberPad : TPNumberPad {

	UIButton* _deleteButton;
	char _showsDeleteButton;
	id<TPSimpleNumberPadDelegate> _delegate;

}

@property (assign) id<TPSimpleNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsDeleteButton;                    //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
+(id)_numberPadCharacters;
-(void)setShowsDeleteButton:(char)arg1 ;
-(void)buttonUp:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TPSimpleNumberPadDelegate>)arg1 ;
-(id<TPSimpleNumberPadDelegate>)delegate;
-(void)_updateDeleteButton;
-(void)setNumberButtonsEnabled:(char)arg1 ;
-(id)initWithButtons:(id)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2 ;
-(char)showsDeleteButton;
@end
