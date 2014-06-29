/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:37 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AXRuntime/AXRuntime-Structs.h>
@interface AXElementGrouper : NSObject {

	unsigned long long _minimumGroupSize;
	unsigned long long _maximumGroupSize;
	unsigned long long _preferredGroupSize;
	double _thresholdForDeterminingEqualSize;

}

@property (assign,nonatomic) unsigned long long minimumGroupSize;                  //@synthesize minimumGroupSize=_minimumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned long long maximumGroupSize;                  //@synthesize maximumGroupSize=_maximumGroupSize - In the implementation block
@property (assign,nonatomic) unsigned long long preferredGroupSize;                //@synthesize preferredGroupSize=_preferredGroupSize - In the implementation block
@property (assign,nonatomic) double thresholdForDeterminingEqualSize;              //@synthesize thresholdForDeterminingEqualSize=_thresholdForDeterminingEqualSize - In the implementation block
-(void)_preprocessTraitsInGroup:(id)arg1 ;
-(id)_buildHierarchyForGroup:(id)arg1 indexOfKeyboard:(unsigned long long*)arg2 ;
-(id)_flattenHierarchyForGroup:(id)arg1 rootLevel:(bool)arg2 ;
-(id)_groupRemovingTooSmallGroups:(id)arg1 isRootLevel:(bool)arg2 ;
-(unsigned long long)minimumGroupSize;
-(double)thresholdForDeterminingEqualSize;
-(unsigned long long)maximumGroupSize;
-(unsigned long long)preferredGroupSize;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithPadInterfaceHeuristics:(bool)arg1 ;
-(id)groupElementsInRootGroup:(id)arg1 ;
-(bool)_frame:(CGRect)arg1 isApproximatelySameSizeAsFrame:(CGRect)arg2 ;
-(void)setMinimumGroupSize:(unsigned long long)arg1 ;
-(void)setMaximumGroupSize:(unsigned long long)arg1 ;
-(void)setPreferredGroupSize:(unsigned long long)arg1 ;
-(void)setThresholdForDeterminingEqualSize:(double)arg1 ;
@end
