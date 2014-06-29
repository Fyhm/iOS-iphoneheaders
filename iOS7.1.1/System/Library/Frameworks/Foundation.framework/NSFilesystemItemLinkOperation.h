/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFilesystemItemCopyOperation.h>

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
+(id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(bool)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(bool)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(bool)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(bool)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(bool)_shouldLinkItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(bool)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
@end
