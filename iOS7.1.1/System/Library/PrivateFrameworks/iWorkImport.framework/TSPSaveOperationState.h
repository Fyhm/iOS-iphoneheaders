/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:22 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _sampleID;
	unsigned long long _updateType;

}

@property (nonatomic,readonly) bool shouldUpdate; 
@property (nonatomic,readonly) unsigned long long updateType;              //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                                 //@synthesize sampleID=_sampleID - In the implementation block
-(void)setSampleID:(int)arg1 ;
-(bool)shouldUpdate;
-(int)sampleID;
-(bool)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/ id)arg1 ;
-(id)initWithUpdateType:(unsigned long long)arg1 ;
-(unsigned long long)updateType;
-(id)init;
-(void).cxx_destruct;
@end
