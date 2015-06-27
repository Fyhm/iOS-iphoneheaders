/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MCObject.h>
#import <iLifeSlideshow/MCAnimationPathSupport.h>
#import <iLifeSlideshow/MCFilterSupport.h>

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet, MCPlugSlide, MCSong, NSString, MCContainerEffect, MCAssetVideo, NSDictionary;

@interface MCSlide : MCObject <MCAnimationPathSupport, MCFilterSupport> {

	id* mSlideAsset;
	NSMutableDictionary* mFrameAttributes;
	NSMutableSet* mAnimationPaths;
	NSMutableSet* mFilters;
	NSArray* mCachedOrderedFilters;
	unsigned mFlags;
	MCPlugSlide* mPlug;
	MCSong* mSong;
	unsigned mIndex;
	float mAudioVolume;
	float mAudioDuckLevel;
	NSString* mFrameID;
	MCContainerEffect* mContainer;
	double mAudioFadeInDuration;
	double mAudioFadeOutDuration;
	double mAudioDuckInDuration;
	double mAudioDuckOutDuration;
	double mStartTime;
	double mDuration;

}

@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned countOfAnimationPaths; 
@property (readonly) NSSet * filters; 
@property (readonly) NSArray * orderedFilters; 
@property (nonatomic,readonly) unsigned countOfFilters; 
@property (retain) MCAssetVideo * asset; 
@property (retain) MCPlugSlide * plug; 
@property (readonly) MCSong * song; 
@property (assign,nonatomic) unsigned index; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (readonly) char startTimeIsDefined; 
@property (assign,nonatomic) double startTime; 
@property (readonly) char durationIsDefined; 
@property (assign,nonatomic) double duration; 
@property (copy) NSString * frameID; 
@property (copy) NSDictionary * frameAttributes; 
@property (copy) NSString * kenBurnsType; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float rotation; 
@property (assign) MCContainerEffect * container; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(float)scale;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(NSSet *)filters;
-(void)setScale:(float)arg1 ;
-(MCContainerEffect *)container;
-(unsigned)index;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(MCAssetVideo *)asset;
-(double)startTime;
-(void)setAsset:(MCAssetVideo *)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(MCSong *)song;
-(id)filterAtIndex:(unsigned)arg1 ;
-(id)imprint;
-(void)addAnimationPath:(id)arg1 ;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(void)setPlug:(MCPlugSlide *)arg1 ;
-(void)setAudioVolume:(float)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(float)arg1 ;
-(void)demolish;
-(MCPlugSlide *)plug;
-(double)audioFadeOutDuration;
-(id)insertFilterWithFilterID:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersAtIndices:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)removeAllFilters;
-(id)addFilterWithFilterID:(id)arg1 ;
-(unsigned)countOfFilters;
-(NSString *)frameID;
-(void)setFrameID:(NSString *)arg1 ;
-(void)setFrameAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)frameAttributes;
-(id)frameAttributeForKey:(id)arg1 ;
-(void)undefineStartTime;
-(void)undefineDuration;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(NSString *)kenBurnsType;
-(void)setKenBurnsType:(NSString *)arg1 ;
-(float)audioVolume;
-(double)audioFadeInDuration;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(float)audioDuckLevel;
-(char)startTimeIsDefined;
-(char)durationIsDefined;
-(unsigned char)currentLayoutIndex;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned)countOfAnimationPaths;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(unsigned char)countOfLayouts;
-(void)initFiltersWithImprints:(id)arg1 ;
-(void)demolishFilters;
-(id)imprintsForFilters;
-(void)setSongForAsset:(id)arg1 ;
-(void)setFrameAttributes:(NSDictionary *)arg1 ;
-(void)observeFilter:(id)arg1 ;
-(void)unobserveFilter:(id)arg1 ;
-(NSArray *)orderedFilters;
@end
