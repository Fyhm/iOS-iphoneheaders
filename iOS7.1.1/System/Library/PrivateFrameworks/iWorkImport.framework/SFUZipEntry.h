/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/SFUDataRepresentation.h>

@protocol SFUZipArchiveDataRepresentation;
@class SFUDataRepresentation, SFUCryptoKey;

@interface SFUZipEntry : SFUDataRepresentation {

	SFUDataRepresentation<SFUZipArchiveDataRepresentation>* mArchiveDataRepresentation;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;
	unsigned long long mDataOffset;
	bool mHasDataOffset;
	unsigned long long mEncodedLength;
	bool mHasEncodedLength;
	SFUCryptoKey* mCryptoKey;

}
-(unsigned long long)dataOffset;
-(unsigned long long)calculateEncodedLength;
-(void)dealloc;
-(id)data;
-(void)copyToFile:(id)arg1 ;
-(long long)dataLength;
-(id)inputStream;
-(bool)isReadable;
-(long long)encodedLength;
-(bool)isEncrypted;
-(void)setDataLength:(long long)arg1 ;
-(void)setCryptoKey:(id)arg1 ;
-(id)initFromCentralFileHeader:(const char*)arg1 dataRepresentation:(id)arg2 ;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned)arg6 ;
-(bool)isCompressed;
-(unsigned)crc;
-(void)setCompressionFlags:(unsigned short)arg1 ;
-(bool)isBackedByFile;
-(id)backingFilePath;
-(unsigned long long)backingFileDataOffset;
@end
