/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DFramebufferCombinePipeline.h>
#import <iWorkImport/TSCH3DFramebufferResolver.h>

@class TSCH3DComponent16ResolveShaderEffect;

@interface TSCH3DComponent16ResolvePipeline : TSCH3DFramebufferCombinePipeline <TSCH3DFramebufferResolver> {

	TSCH3DComponent16ResolveShaderEffect* mResolveEffect;
	float mFactor;

}

@property (assign,nonatomic) float factor; 
@property (assign,nonatomic) int lowColorBits; 
-(id)initWithProcessor:(id)arg1 session:(id)arg2 ;
-(void)updateShaderEffectsStates;
-(int)lowColorBits;
-(void)setLowColorBits:(int)arg1 ;
-(float)factor;
-(void)setFactor:(float)arg1 ;
-(void)dealloc;
@end
