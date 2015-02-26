/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource, NSString;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {

	BOOL _backgroundTask;
	CPLResource* _cloudResource;
	unsigned long long _taskIdentifierForQueue;
	NSString* _clientBundleID;
	id<CPLEngineTransportTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _cancelHandler;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CPLResource * cloudResource;                              //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,nonatomic) unsigned long long taskIdentifierForQueue;                //@synthesize taskIdentifierForQueue=_taskIdentifierForQueue - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask;              //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                                //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                 //@synthesize transportTask=_transportTask - In the implementation block
@property (nonatomic,readonly) id launchHandler;                                       //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,readonly) id cancelHandler;                                       //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,readonly) id didStartHandler;                                     //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,readonly) id progressHandler;                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)launch;
-(id)progressHandler;
-(id)completionHandler;
-(id<CPLEngineTransportTask>)transportTask;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 cancelHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(id)didStartHandler;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(void)setTaskIdentifierForQueue:(unsigned long long)arg1 ;
-(void)setBackgroundTask:(BOOL)arg1 ;
-(void)setClientBundleID:(NSString *)arg1 ;
-(BOOL)isBackgroundTask;
-(CPLResource *)cloudResource;
-(NSString *)clientBundleID;
-(unsigned long long)taskIdentifierForQueue;
-(id)launchHandler;
-(id)cancelHandler;
-(void)cancelTask;
@end
