/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKContentViewController.h>
#import <UIKit/UIPDFPageViewDelegate.h>
#import <iBooks/IMRenderingCacheCallback.h>
#import <UIKit/UIPDFAnnotationControllerDelegate.h>

@class BKPDFPageView, NSMutableDictionary, NSString;

@interface BKPdfContentViewController : BKContentViewController <UIPDFPageViewDelegate, IMRenderingCacheCallback, UIPDFAnnotationControllerDelegate> {

	BKPDFPageView* _pageView;
	NSMutableDictionary* _annotationMap;
	char _onAnnotation;
	char _onSearchHighlight;
	char _annotationsWereLoaded;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)releaseViews;
-(void)renderingCacheCallbackImage:(id)arg1 context:(id)arg2 pageNumber:(unsigned)arg3 ;
-(void)annotateSelection:(id)arg1 ;
-(void)dictionarySelection:(id)arg1 ;
-(void)searchUsingSelection:(id)arg1 ;
-(CGRect)rectForContentAtPoint:(CGPoint)arg1 ;
-(void)setPageOffset:(int)arg1 ;
-(void)_setupMenu;
-(void)highlightSearchLocation:(id)arg1 ;
-(void)clearSelectionHighlights;
-(char)isLocationVisible:(id)arg1 ;
-(void)contentReady;
-(NSRange)pageRangeForLocation:(id)arg1 ;
-(char)contentNeedsFilter;
-(char)hasHighlightedText;
-(char)isReusable;
-(void)showNoteEditorForAnnotation:(id)arg1 ;
-(CGRect)rectForAnnotation:(id)arg1 ;
-(void)loadAnnotations;
-(void)hideAnnotations;
-(void)annotationWasAdded:(id)arg1 ;
-(void)annotationWasRemoved:(id)arg1 ;
-(void)annotationDidChange:(id)arg1 ;
-(void)setEditingState:(char)arg1 annotation:(id)arg2 ;
-(void)showMenu:(id)arg1 ;
-(void)setDefaultStyle;
-(void)refreshDocument;
-(void)preloadViewContents;
-(id)preloadedImage;
-(id)thumbnailRenderingCache;
-(void)setPreloadedImage:(id)arg1 ;
-(id)_createAnnotation:(id)arg1 save:(char)arg2 ;
-(void)_revealAnnotationEditor:(id)arg1 ;
-(char)hasValidText:(id)arg1 ;
-(char)selectionHasText;
-(void)copySelection:(id)arg1 ;
-(void)highlightSelection:(id)arg1 ;
-(id)newStringByRemovingUnicodeReplacements:(id)arg1 ;
-(void)_addPdfAnnotationFor:(id)arg1 ;
-(void)_deleteAnnotation:(id)arg1 ;
-(id)_enclosingScrollView;
-(void)goToURLDelayed:(id)arg1 ;
-(void)p_presentURLFollowActionSheetForURL:(id)arg1 fromRect:(CGRect)arg2 ;
-(id)tapLinkHighlightColor;
-(void)goToAnnotDestinationDelayed:(id)arg1 ;
-(unsigned)variantForQuadAtPoint:(CGPoint)arg1 outOf:(unsigned)arg2 ;
-(id)highlightMaskFileForQuadAtPoint:(CGPoint)arg1 withSize:(CGSize)arg2 ;
-(int)_aeStyleToPDFStyle:(int)arg1 ;
-(void)_assignImage:(id)arg1 annotation:(id)arg2 ;
-(void)viewWillZoom;
-(char)annotationWillTrack:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)annotationDidEndTracking:(id)arg1 annotation:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)annotationWasRemoved:(id)arg1 annotation:(id)arg2 ;
-(CGImageRef)newHighlightMaskImage:(CGRect)arg1 ;
-(CGImageRef)underlineImage:(CGRect)arg1 ;
-(id)currentLocation;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(id)snapshot;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(int)totalPages;
-(void)load;
-(void)resetZoom:(id)arg1 ;
-(void)zoom:(id)arg1 to:(CGRect)arg2 atPoint:(CGPoint)arg3 kind:(int)arg4 ;
-(char)shouldRecognizeTapIn:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)didTap:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)selectionDidEndTracking:(id)arg1 ;
-(void)annotation:(id)arg1 wasTouchedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(void)annotation:(id)arg1 isBeingPressedAtPoint:(CGPoint)arg2 controller:(id)arg3 ;
-(id)marginNoteImage:(n@)arg1 ;
-(CGSize)marginNoteImageSize;
@end
