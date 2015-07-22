/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@protocol SVSStarkViewDelegate;
@class UIView, SVSStarkGatekeeperHeaderView, UIButton;

@interface SVSStarkView : UIView {

	id<SVSStarkViewDelegate> _delegate;
	UIView* _snippetView;
	SVSStarkGatekeeperHeaderView* _gatekeeperHeader;
	UIView* _dismisserView;
	UIButton* _selectButton;

}

@property (assign,nonatomic,__weak) id<SVSStarkViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * snippetView;                                         //@synthesize snippetView=_snippetView - In the implementation block
@property (nonatomic,retain) SVSStarkGatekeeperHeaderView * gatekeeperHeader;              //@synthesize gatekeeperHeader=_gatekeeperHeader - In the implementation block
@property (getter=_dismisserView,nonatomic,readonly) UIView * dismisserView;               //@synthesize dismisserView=_dismisserView - In the implementation block
@property (nonatomic,retain) UIButton * selectButton;                                      //@synthesize selectButton=_selectButton - In the implementation block
-(void)setSnippetView:(UIView *)arg1 ;
-(void)setGatekeeperHeader:(SVSStarkGatekeeperHeaderView *)arg1 ;
-(SVSStarkGatekeeperHeaderView *)gatekeeperHeader;
-(UIView *)snippetView;
-(void)_selectButtonTapped:(id)arg1 ;
-(id)_dismisserView;
-(UIButton *)selectButton;
-(void)setSelectButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SVSStarkViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<SVSStarkViewDelegate>)delegate;
-(id)preferredFocusedItem;
@end
