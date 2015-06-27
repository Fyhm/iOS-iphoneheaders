/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:25 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSDictionary;

@interface SBScrollViewLayoutInfos : NSObject {

	NSDictionary* _indexPathsToFrames;
	NSDictionary* _sectionToNumberOfItems;
	NSDictionary* _sectionToPlaceholderFrames;
	float _contentWidth;
	float _presentationOffset;
	int _numberOfSections;

}

@property (nonatomic,retain) NSDictionary * indexPathsToFrames;                      //@synthesize indexPathsToFrames=_indexPathsToFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToNumberOfItems;                  //@synthesize sectionToNumberOfItems=_sectionToNumberOfItems - In the implementation block
@property (nonatomic,retain) NSDictionary * sectionToPlaceholderFrames;              //@synthesize sectionToPlaceholderFrames=_sectionToPlaceholderFrames - In the implementation block
@property (assign,nonatomic) float contentWidth;                                     //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) float presentationOffset;                               //@synthesize presentationOffset=_presentationOffset - In the implementation block
@property (assign,nonatomic) int numberOfSections;                                   //@synthesize numberOfSections=_numberOfSections - In the implementation block
-(float)presentationOffset;
-(NSDictionary *)sectionToNumberOfItems;
-(NSDictionary *)indexPathsToFrames;
-(NSDictionary *)sectionToPlaceholderFrames;
-(CGRect)frameForIndexPath:(id)arg1 ;
-(unsigned)indexOfLastItemInSection:(unsigned)arg1 ;
-(CGRect)frameForSectionPlaceholder:(int)arg1 ;
-(id)indexPathsOfVisibleItemsInBounds:(CGRect)arg1 ;
-(void)setIndexPathsToFrames:(NSDictionary *)arg1 ;
-(void)setSectionToNumberOfItems:(NSDictionary *)arg1 ;
-(void)setSectionToPlaceholderFrames:(NSDictionary *)arg1 ;
-(void)setPresentationOffset:(float)arg1 ;
-(void)setNumberOfSections:(int)arg1 ;
-(void)dealloc;
-(int)numberOfSections;
-(unsigned)numberOfItemsInSection:(unsigned)arg1 ;
-(float)contentWidth;
-(void)setContentWidth:(float)arg1 ;
@end
