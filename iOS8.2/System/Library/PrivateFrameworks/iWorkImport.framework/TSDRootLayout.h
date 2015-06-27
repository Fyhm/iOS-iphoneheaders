/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:12 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDAbstractLayout.h>
#import <iWorkImport/TSDAdaptiveLayout.h>

@class TSDLayoutController, TSUPointerKeyDictionary;

@interface TSDRootLayout : TSDAbstractLayout <TSDAdaptiveLayout> {

	TSDLayoutController* mLayoutController;
	char mSupportsAdaptiveLayout;
	TSUPointerKeyDictionary* mShiftedObjects;

}
-(id)layoutController;
-(CGRect)clippedRectInRoot:(CGRect)arg1 ;
-(char)isRootLayoutForInspectorGeometry;
-(id)initWithLayoutController:(id)arg1 ;
-(id)childLayoutsInRect:(CGRect)arg1 ;
-(char)providesGuidesForChildLayouts;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(id)p_shiftedObjects;
-(void)beginDynamicAdaptiveLayout;
-(void)endDynamicAdaptiveLayout;
-(CGPoint)applyAdaptiveLayoutTo:(id)arg1 info:(id)arg2 offset:(CGPoint)arg3 ;
-(void)dealloc;
@end
