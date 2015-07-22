/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <NanoMailKitServer/NSCopying.h>

@class NSString;

@interface NNMKProtoAttachmentMetadata : PBCodable <NSCopying> {

	NSString* _contentId;
	NSString* _fileName;
	unsigned _fileSize;
	float _imageHeight;
	float _imageWidth;
	unsigned _type;
	BOOL _renderOnClient;
	SCD_Struct_NN8 _has;

}

@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasFileName; 
@property (nonatomic,retain) NSString * fileName;                 //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL hasFileSize; 
@property (assign,nonatomic) unsigned fileSize;                   //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasRenderOnClient; 
@property (assign,nonatomic) BOOL renderOnClient;                 //@synthesize renderOnClient=_renderOnClient - In the implementation block
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) float imageWidth;                    //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) float imageHeight;                   //@synthesize imageHeight=_imageHeight - In the implementation block
-(NSString *)fileName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setContentId:(NSString *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasFileSize:(BOOL)arg1 ;
-(BOOL)hasFileSize;
-(BOOL)hasContentId;
-(BOOL)renderOnClient;
-(void)setRenderOnClient:(BOOL)arg1 ;
-(BOOL)hasFileName;
-(void)setHasRenderOnClient:(BOOL)arg1 ;
-(BOOL)hasRenderOnClient;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(BOOL)hasImageWidth;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(void)setImageWidth:(float)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageWidth;
-(float)imageHeight;
-(unsigned)fileSize;
-(void)setFileSize:(unsigned)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)contentId;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
