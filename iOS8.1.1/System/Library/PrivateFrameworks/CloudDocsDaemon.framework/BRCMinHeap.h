/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:30:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/NSFastEnumeration.h>

@class NSMapTable;

@interface BRCMinHeap : NSObject <NSFastEnumeration> {

	id* _array;
	unsigned long long _size;
	/*^block*/id _comparator;
	unsigned long long _mutation;
	NSMapTable* _objects;
	unsigned long long _count;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR13*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)firstObject;
-(id)description;
-(BOOL)containsObject:(id)arg1 ;
-(void)_moveDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUp:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_moveUpOrDown:(id)arg1 index:(unsigned long long)arg2 ;
-(void)_shrink;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(BOOL)check;
-(void)removeFirstObject;
-(void)firstObjectWeightChanged;
-(void)objectWeightChanged:(id)arg1 ;
@end
