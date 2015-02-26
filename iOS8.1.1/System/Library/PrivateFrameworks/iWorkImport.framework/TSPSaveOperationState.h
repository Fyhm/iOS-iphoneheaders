/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable;

@interface TSPSaveOperationState : NSObject {

	NSMapTable* _newDataStorages;
	int _sampleID;
	long long _updateType;

}

@property (nonatomic,readonly) BOOL shouldUpdate; 
@property (nonatomic,readonly) BOOL preserveDocumentUUID; 
@property (nonatomic,readonly) long long updateType;                   //@synthesize updateType=_updateType - In the implementation block
@property (assign,nonatomic) int sampleID;                             //@synthesize sampleID=_sampleID - In the implementation block
-(void)setSampleID:(int)arg1 ;
-(BOOL)preserveDocumentUUID;
-(BOOL)shouldUpdate;
-(int)sampleID;
-(BOOL)hasNewStorageForData:(id)arg1 ;
-(void)addNewStorage:(id)arg1 forData:(id)arg2 ;
-(void)enumerateDatasAndStoragesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateType:(long long)arg1 ;
-(id)init;
-(long long)updateType;
@end
