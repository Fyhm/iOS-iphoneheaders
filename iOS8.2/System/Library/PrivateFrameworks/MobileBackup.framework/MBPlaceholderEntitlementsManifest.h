/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface MBPlaceholderEntitlementsManifest : NSObject {

	NSMutableArray* _entries;

}
-(void)addEntriesForApps:(id)arg1 ;
-(id)entryAtIndex:(int)arg1 ;
-(void)addEntriesForApp:(id)arg1 ;
-(char)writeToFile:(id)arg1 error:(id*)arg2 ;
-(id)propertyList;
-(void)dealloc;
-(id)init;
-(id)initWithFile:(id)arg1 error:(id*)arg2 ;
-(int)entryCount;
-(void)addEntry:(id)arg1 ;
@end
