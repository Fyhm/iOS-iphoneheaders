/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSData;

@interface TSCH3DMipmaps : NSObject {

	int mWidth;
	int mHeight;
	unsigned long long mComponents;
	NSData* mData;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) unsigned long long components; 
@property (nonatomic,readonly) NSData * data; 
+(CGSize)optimizedMipmapLevel0Size;
+(CGSize)mipmapSizeForTexturableSize:(CGSize)arg1 ;
+(id)mipmapPathFromPath:(id)arg1 ;
+(id)mipmapsWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
+(id)mipmapsFromData:(id)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 components:(unsigned long long)arg3 mipmapData:(id)arg4 ;
-(id)initFromData:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSData *)data;
-(int)width;
-(int)height;
-(BOOL)valid;
-(unsigned long long)components;
-(BOOL)writeToFile:(id)arg1 ;
@end
