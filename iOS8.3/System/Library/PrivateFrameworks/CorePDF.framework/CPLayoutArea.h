/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:12:27 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	char isFirstLayout;

}
-(id)init;
-(id)description;
-(id)properties;
-(void)accept:(id)arg1 ;
-(float)selectionBottom;
-(char)isBoxRegion;
-(char)isGraphicalRegion;
-(char)isRowRegion;
-(void)setIsImageRegion:(char)arg1 ;
-(char)isImageRegion;
-(char)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(char)isSimilarTo:(id)arg1 ;
-(char)isFirstLayout;
-(void)setIsFirstLayout:(char)arg1 ;
-(void)addColumnBreaks;
@end
