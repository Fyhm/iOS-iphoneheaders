/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:58:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/GameCenterUIService.app/GameCenterUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUIService/GameCenterUIService-Structs.h>
#import <GameCenterUIService/GKGameProfileHeaderView.h>

@class GKFacebookLikeButton, GKRatingControl, GKLabel, GKHairlineView, UIView;

@interface GKGameProfileHeaderViewOwnedPhone : GKGameProfileHeaderView {

	BOOL _playerIsUnderage;
	GKFacebookLikeButton* _likeButton;
	GKRatingControl* _ratingControl;
	GKLabel* _nameLabel;
	GKHairlineView* _verticalRule;
	UIView* _ratingSpacerLeft;
	UIView* _ratingSpacerRight;

}

@property (nonatomic,retain) GKFacebookLikeButton * likeButton;              //@synthesize likeButton=_likeButton - In the implementation block
@property (nonatomic,retain) GKRatingControl * ratingControl;                //@synthesize ratingControl=_ratingControl - In the implementation block
@property (assign,nonatomic) BOOL playerIsUnderage;                          //@synthesize playerIsUnderage=_playerIsUnderage - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                            //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKHairlineView * verticalRule;                  //@synthesize verticalRule=_verticalRule - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerLeft;                      //@synthesize ratingSpacerLeft=_ratingSpacerLeft - In the implementation block
@property (nonatomic,retain) UIView * ratingSpacerRight;                     //@synthesize ratingSpacerRight=_ratingSpacerRight - In the implementation block
-(void)rateGame;
-(void)applyIconAndNameConstraints;
-(void)applyRatingAndLikeButtonConstraints;
-(void)applyLikeButtonAndVerticalRuleVerticalPositioning;
-(void)applyCenteredRatingControlConstraint;
-(void)applyRatingControlVerticalPositioning;
-(void)applyRatingLabelConstraints;
-(void)updateRating;
-(id)likeButton;
-(void)setLikeButton:(id)arg1 ;
-(void)setRatingControl:(id)arg1 ;
-(BOOL)playerIsUnderage;
-(void)setPlayerIsUnderage:(BOOL)arg1 ;
-(id)verticalRule;
-(void)setVerticalRule:(id)arg1 ;
-(id)ratingSpacerLeft;
-(void)setRatingSpacerLeft:(id)arg1 ;
-(id)ratingSpacerRight;
-(void)setRatingSpacerRight:(id)arg1 ;
-(void)didUpdateModel;
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)applyConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)ratingControl;
@end
