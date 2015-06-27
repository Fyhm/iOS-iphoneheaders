/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:08:25 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition, NSTimer, PLOperator, NSMutableSet;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics {

	PLEntryNotificationOperatorComposition* _netEventCallback;
	PLEntryNotificationOperatorComposition* _nameConnectionCallback;
	unsigned _netState;
	NSTimer* _snapshotTimer;

}

@property (__weak) PLOperator * operator; 
@property (nonatomic,retain) NSMutableSet * runningMetrics; 
@property (retain) PLEntryNotificationOperatorComposition * netEventCallback;                    //@synthesize netEventCallback=_netEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * nameConnectionCallback;              //@synthesize nameConnectionCallback=_nameConnectionCallback - In the implementation block
@property (assign) unsigned netState;                                                            //@synthesize netState=_netState - In the implementation block
@property (retain) NSTimer * snapshotTimer;                                                      //@synthesize snapshotTimer=_snapshotTimer - In the implementation block
+(id)entryEventPointDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitions;
+(id)entryPointDefinitionAwdNetStart;
+(id)entryPointDefinitionAwdNetEnd;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(char)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)setNetState:(unsigned)arg1 ;
-(void)resetAllTables;
-(void)handleNetCallback:(id)arg1 ;
-(void)setNetEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)netEventCallback;
-(void)handleNameConnectionCallback:(id)arg1 ;
-(void)setNameConnectionCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(unsigned)netState;
-(void)resetEndTable;
-(void)resetStartTable;
-(PLEntryNotificationOperatorComposition *)nameConnectionCallback;
-(NSTimer *)snapshotTimer;
-(void)setSnapshotTimer:(NSTimer *)arg1 ;
@end
