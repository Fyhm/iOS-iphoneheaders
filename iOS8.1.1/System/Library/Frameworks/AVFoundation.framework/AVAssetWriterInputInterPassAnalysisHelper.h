/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:33 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;
	AVAssetWriterInputPassDescription* _initialPassDescription;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(BOOL)shouldRespondToInitialPassDescription;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM4)arg2 ;
-(void)markCurrentPassAsFinished;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)startPassAnalysis;
-(void)dealloc;
-(long long)status;
-(void)markAsFinished;
@end
