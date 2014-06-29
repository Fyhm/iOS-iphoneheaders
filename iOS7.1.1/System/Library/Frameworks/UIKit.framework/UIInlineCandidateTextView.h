/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSArray, _UIInlineCandidateCell;

@interface UIInlineCandidateTextView : UIView {

	int m_type;
	int m_edgeType;
	bool m_animating;
	NSMutableArray* _candidateCellArray;
	NSArray* _candidates;
	id _target;
	SEL _action;
	unsigned long long _selectedItem;
	_UIInlineCandidateCell* _currentlyPushedItem;
	bool _showingArrow;
	bool _arrowHighlighted;
	bool _phraseEditable;

}
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSelectedItem:(unsigned long long)arg1 ;
-(void)setAnimating:(bool)arg1 ;
-(int)textEffectsVisibilityLevel;
-(void)setEdgeType:(int)arg1 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(unsigned long long)numberOfShownItems;
-(id)initWithFrame:(CGRect)arg1 candidates:(id)arg2 type:(int)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5 ;
-(int)edgeType;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(unsigned long long)selectedItem;
-(double)_layoutCandidates:(id)arg1 maxCount:(int)arg2 height:(double)arg3 maxScreenWidth:(double)arg4 hasExtensionCandidates:(bool)arg5 ;
-(void)_cellSelected:(id)arg1 ;
-(id)findCell:(CGPoint)arg1 ;
-(void)redrawArrow;
-(bool)_arrowHighlighted;
-(void)showHighlightedArrow;
@end
