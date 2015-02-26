/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:52 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSFastEnumeration.h>

@class OITSULinkedPointerSetEntry;

@interface OITSUMutableLinkedPointerSet : NSObject <NSFastEnumeration> {

	CFDictionaryRef mDictionary;
	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mTail;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_OI17*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)array;
-(id)reverseObjectEnumerator;
-(id)objectEnumerator;
-(id)objectEnumeratorAfterObject:(id)arg1 ;
-(BOOL)hasObjects;
-(void)insertFirstObject:(id)arg1 ;
@end
