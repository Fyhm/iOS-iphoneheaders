/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@protocol AVAssetWriterFinishWritingHelperDelegate, OS_dispatch_queue;
@class NSObject, AVWeakReference;

@interface AVAssetWriterFinishWritingHelper : AVAssetWriterHelper {

	id<AVAssetWriterFinishWritingHelperDelegate> _delegate;
	OpaqueFigAssetWriterRef _figAssetWriter;
	NSObject*<OS_dispatch_queue> _figAssetWriterAccessQueue;
	AVWeakReference* _weakReferenceToSelf;

}
-(void)cancelWriting;
-(OpaqueFigAssetWriterRef)_retainedFigAssetWriter;
-(id)initWithConfigurationState:(id)arg1 figAssetWriter:(OpaqueFigAssetWriterRef)arg2 delegate:(id)arg3 ;
-(void)performFinishOperation;
-(void)finishOperationCompletedSuccessfully:(char)arg1 withError:(id)arg2 ;
-(void)dealloc;
-(int)status;
-(void)finalize;
@end
