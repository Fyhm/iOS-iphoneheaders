/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:34:41 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/MBMMCSItemReaderInfo.h>

@class NSString;

@interface MBMMCSUnencryptedItemReaderInfo : NSObject <MBMMCSItemReaderInfo> {

	NSString* _path;
	int _fd;
	unsigned long long _itemID;

}

@property (assign,nonatomic) unsigned long long itemID;              //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) int fd;                                 //@synthesize fd=_fd - In the implementation block
-(id)initWithItemID:(unsigned long long)arg1 path:(id)arg2 ;
-(char)statWithSize:(unsigned long long*)arg1 error:(id*)arg2 ;
-(char)readWithOffset:(unsigned long long)arg1 buffer:(char*)arg2 bufferLength:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(unsigned long long)itemID;
-(char)openWithError:(id*)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(char)closeWithError:(id*)arg1 ;
@end
