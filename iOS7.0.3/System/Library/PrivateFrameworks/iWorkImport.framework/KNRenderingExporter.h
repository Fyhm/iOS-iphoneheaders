/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSARenderingExporter.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class KNSlideNode, NSMutableArray, KNOffscreenController, KNPdfHyperlinkController, NSString, NSSet, NSArray;

@interface KNRenderingExporter : TSARenderingExporter <TSDCanvasDelegate> {

	KNSlideNode* mCurrentSlideNode;
	NSMutableArray* mCurrentSlidesOnPage;
	unsigned mCurrentBuildIndex;
	KNOffscreenController* mOffscreenController;
	KNPdfHyperlinkController* mHyperlinkController;
	int mPrintLayout;
	BOOL mPrintingBuilds;
	BOOL mPrintingBackgrounds;
	BOOL mPrintingBorders;
	BOOL mPrintingSlideNumbers;
	BOOL mPrintingDate;
	BOOL mPrintingSkippedSlides;
	BOOL mPrintingSelectedSlides;
	BOOL mPrintingPageMargins;
	unsigned mSlidesPerPage;
	unsigned mCurrentPage;
	NSString* mPrintTitle;
	float mPageMargin;
	NSSet* mSelectedSlideNodes;
	id mPrintView;

}

@property (nonatomic,retain) KNOffscreenController * offscreenController; 
@property (assign,nonatomic) unsigned slidesPerPage; 
@property (nonatomic,readonly) NSArray * slidesForPrinting; 
@property (nonatomic,retain) KNSlideNode * currentSlideNode; 
@property (nonatomic,readonly) unsigned currentSlideNumber; 
@property (nonatomic,copy) NSSet * selectedSlideNodes; 
@property (assign,nonatomic) int printLayout; 
@property (assign,getter=isPrintingBuilds,nonatomic) BOOL printingBuilds; 
@property (assign,getter=isPrintingBackgrounds,nonatomic) BOOL printingBackgrounds; 
@property (assign,getter=isPrintingBorders,nonatomic) BOOL printingBorders; 
@property (assign,getter=isPrintingSlideNumbers,nonatomic) BOOL printingSlideNumbers; 
@property (assign,getter=isPrintingDate,nonatomic) BOOL printingDate; 
@property (assign,getter=isPrintingSkippedSlides,nonatomic) BOOL printingSkippedSlides; 
@property (assign,getter=isPrintingSelectedSlides,nonatomic) BOOL printingSelectedSlides; 
@property (assign,getter=isPrintingPageMargins,nonatomic) BOOL printingPageMargins; 
@property (nonatomic,readonly) float heightOfPrintedText; 
@property (nonatomic,readonly) float spaceForSlideNumbers; 
@property (assign,nonatomic) float pageMargin; 
@property (nonatomic,copy) NSString * printTitle; 
@property (nonatomic,readonly) BOOL usesViewForDrawing; 
@property (assign,nonatomic) id printView; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3 ;
-(CGRect)boundsRect;
-(id)currentInfos;
-(BOOL)incrementPage;
-(BOOL)preparePage:(unsigned)arg1 ;
-(double)progressForCurrentPage;
-(BOOL)exportToURL:(id)arg1 pageNumber:(unsigned)arg2 delegate:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)isPrintingCanvas;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(id)slidesForPrinting;
-(void)setCurrentSlideNode:(id)arg1 ;
-(unsigned)slidesPerPage;
-(BOOL)isPrintingBuilds;
-(BOOL)isPrintingSlideNumbers;
-(BOOL)drawImageForSlideNode:(id)arg1 andEvent:(unsigned)arg2 slideSize:(CGSize)arg3 intoRect:(CGRect)arg4 context:(CGContextRef)arg5 createPage:(BOOL)arg6 ;
-(void)drawSlideNumberForNode:(id)arg1 index:(unsigned)arg2 forRect:(CGRect)arg3 context:(CGContextRef)arg4 position:(int)arg5 ;
-(void)drawBorderForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isPrintingPageMargins;
-(float)heightOfPrintedText;
-(void)addAnchorPointForSlide:(id)arg1 context:(CGContextRef)arg2 ;
-(unsigned)currentSlideNumber;
-(id)currentSlideNode;
-(BOOL)isPrintingDate;
-(BOOL)isPrintingBackgrounds;
-(BOOL)isPrintingBorders;
-(id)p_slideNumberStringForSlideNode:(id)arg1 buildIndex:(unsigned)arg2 ;
-(void)setPrintingBuilds:(BOOL)arg1 ;
-(void)setPrintingSkippedSlides:(BOOL)arg1 ;
-(void)setPrintingBackgrounds:(BOOL)arg1 ;
-(float)spaceForSlideNumbers;
-(void)drawNSStringDateForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)usesViewForDrawing;
-(void)drawInView:(id)arg1 rect:(CGRect)arg2 ;
-(id)offscreenController;
-(void)setOffscreenController:(id)arg1 ;
-(int)printLayout;
-(void)setPrintLayout:(int)arg1 ;
-(void)setPrintingBorders:(BOOL)arg1 ;
-(void)setPrintingSlideNumbers:(BOOL)arg1 ;
-(void)setPrintingDate:(BOOL)arg1 ;
-(BOOL)isPrintingSkippedSlides;
-(BOOL)isPrintingSelectedSlides;
-(void)setPrintingSelectedSlides:(BOOL)arg1 ;
-(void)setSlidesPerPage:(unsigned)arg1 ;
-(void)setPrintingPageMargins:(BOOL)arg1 ;
-(float)pageMargin;
-(void)setPageMargin:(float)arg1 ;
-(id)printView;
-(void)setPrintView:(id)arg1 ;
-(id)printTitle;
-(void)setPrintTitle:(id)arg1 ;
-(id)selectedSlideNodes;
-(void)setSelectedSlideNodes:(id)arg1 ;
-(unsigned)p_slideNumberForSlideNode:(id)arg1 ;
-(void)dealloc;
-(unsigned)pageCount;
-(void)setOptions:(id)arg1 ;
-(void)teardown;
-(void)setup;
-(id)documentRoot;
@end
