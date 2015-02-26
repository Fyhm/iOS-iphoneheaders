/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:26:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Assistant/UIPlugins/Movies.siriUIBundle/Movies
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Movies/Movies-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, UIImageView, SiriUIKeyline, NSString, UIImage;

@interface SiriMoviesAttributionCell : SiriUIContentCollectionViewCell {

	UILabel* _titleLabel;
	UIImageView* _attributionImageView;
	SiriUIKeyline* _topKeyline;
	NSString* _title;
	UIImage* _attributionImage;

}

@property (nonatomic,copy) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * attributionImage;              //@synthesize attributionImage=_attributionImage - In the implementation block
+(double)_cellHeight;
-(UIImage *)attributionImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setAttributionImage:(UIImage *)arg1 ;
@end
