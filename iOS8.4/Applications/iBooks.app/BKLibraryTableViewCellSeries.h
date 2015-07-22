/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKLibraryTableViewCell.h>

@protocol BKSeriesFolderLayerConfiguring;
@class BKSeriesFolderLayer, CALayer, BKSeriesFolderView;

@interface BKLibraryTableViewCellSeries : BKLibraryTableViewCell {

	id<BKSeriesFolderLayerConfiguring> _configuration;
	BKSeriesFolderLayer* _folderLayer;
	CALayer* _bannerLayer;
	BKSeriesFolderView* _coverViewPlaceholder;

}

@property (nonatomic,retain) id<BKSeriesFolderLayerConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) BKSeriesFolderLayer * folderLayer;                           //@synthesize folderLayer=_folderLayer - In the implementation block
@property (nonatomic,readonly) CALayer * bannerLayer;                                       //@synthesize bannerLayer=_bannerLayer - In the implementation block
@property (nonatomic,retain) BKSeriesFolderView * coverViewPlaceholder;                     //@synthesize coverViewPlaceholder=_coverViewPlaceholder - In the implementation block
-(BKSeriesFolderLayer *)folderLayer;
-(CALayer *)bannerLayer;
-(void)pUpdateBannerImage;
-(void)setSeriesImages:(id)arg1 ;
-(void)makeFolderImage;
-(BKSeriesFolderView *)coverViewPlaceholder;
-(void)setCoverViewPlaceholder:(BKSeriesFolderView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)awakeFromNib;
-(void)prepareForReuse;
-(void)setConfiguration:(id<BKSeriesFolderLayerConfiguring>)arg1 ;
-(id<BKSeriesFolderLayerConfiguring>)configuration;
@end
