/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:12 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/NSCopying.h>

@interface EKDayViewItemPath : NSObject <NSCopying> {

	int _section;
	unsigned long long _index;

}

@property (nonatomic,readonly) int section;                           //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
+(id)itemPathWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
-(id)initWithIndex:(unsigned long long)arg1 inSection:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)section;
-(unsigned long long)index;
@end
