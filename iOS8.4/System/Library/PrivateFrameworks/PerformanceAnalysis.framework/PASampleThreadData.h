/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:29 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PASerializable.h>

@class PASampleFrame, NSString;

@interface PASampleThreadData : NSObject <PASerializable> {

	PASampleFrame* leafFrame;
	unsigned long long dispatchQueueId;
	unsigned long long waitEvent;
	unsigned long long continuation;
	unsigned long long userTimeInNs;
	unsigned long long systemTimeInNs;
	unsigned long long threadId;
	int state;
	int staticPriority;
	int currentScheduledPriority;
	int schedulerFlags;
	unsigned threadQos;
	unsigned char ioTier;
	BOOL ioPassive;
	BOOL isSuspended;
	char ss_flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasDispatchQueue; 
@property (readonly) BOOL isWaiting; 
@property (readonly) BOOL isStopped; 
@property (readonly) BOOL isRunning; 
@property (readonly) BOOL isWaitingUninterruptibly; 
@property (readonly) BOOL isHaltedAtTermination; 
@property (readonly) BOOL isAbortingInterruptibleWaits; 
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints; 
@property (readonly) BOOL isProcessorIdleThread; 
@property (readonly) BOOL hasDispatchSerial; 
@property (readonly) BOOL stackTracesHaveNoFramePointers; 
@property (readonly) BOOL isDarwinBG; 
@property (readonly) BOOL hasValidPowerstatsFlags; 
@property (readonly) unsigned powerstatsFlags; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(id)stack;
-(BOOL)isStopped;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isRunning;
-(BOOL)hasDispatchQueue;
-(BOOL)isDarwinBG;
-(unsigned)powerstatsFlags;
-(BOOL)isProcessorIdleThread;
-(BOOL)isStackEqualTo:(id)arg1 ;
-(BOOL)hasValidPowerstatsFlags;
-(BOOL)isWaiting;
-(BOOL)isWaitingUninterruptibly;
-(BOOL)isHaltedAtTermination;
-(BOOL)isAbortingInterruptibleWaits;
-(BOOL)isAbortingInterruptibleWaitsAtSafePoints;
-(BOOL)hasDispatchSerial;
-(BOOL)stackTracesHaveNoFramePointers;
-(id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2 ;
@end
