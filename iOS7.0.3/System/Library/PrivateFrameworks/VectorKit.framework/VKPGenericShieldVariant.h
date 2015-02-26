/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface VKPGenericShieldVariant : PBCodable {

	SCD_Struct_VK288* _layers;
	unsigned _layersCount;
	unsigned _layersSpace;
	NSString* _fontName;
	float _fontSize;
	float _leftCapWidth;
	float _leftPadding;
	float _lineSpacing;
	unsigned _numberOfLines;
	float _rightCapWidth;
	float _rightPadding;
	float _textBaseLine;
	SCD_Struct_VK167 _has;

}

@property (assign,nonatomic) BOOL hasNumberOfLines; 
@property (assign,nonatomic) unsigned numberOfLines;                  //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,readonly) unsigned layersCount; 
@property (nonatomic,readonly) SCD_Struct_VK288* layers; 
@property (assign,nonatomic) BOOL hasTextBaseLine; 
@property (assign,nonatomic) float textBaseLine;                      //@synthesize textBaseLine=_textBaseLine - In the implementation block
@property (nonatomic,readonly) BOOL hasFontName; 
@property (nonatomic,retain) NSString * fontName;                     //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) BOOL hasFontSize; 
@property (assign,nonatomic) float fontSize;                          //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) BOOL hasLeftCapWidth; 
@property (assign,nonatomic) float leftCapWidth;                      //@synthesize leftCapWidth=_leftCapWidth - In the implementation block
@property (assign,nonatomic) BOOL hasRightCapWidth; 
@property (assign,nonatomic) float rightCapWidth;                     //@synthesize rightCapWidth=_rightCapWidth - In the implementation block
@property (assign,nonatomic) BOOL hasLineSpacing; 
@property (assign,nonatomic) float lineSpacing;                       //@synthesize lineSpacing=_lineSpacing - In the implementation block
@property (assign,nonatomic) BOOL hasLeftPadding; 
@property (assign,nonatomic) float leftPadding;                       //@synthesize leftPadding=_leftPadding - In the implementation block
@property (assign,nonatomic) BOOL hasRightPadding; 
@property (assign,nonatomic) float rightPadding;                      //@synthesize rightPadding=_rightPadding - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(float)leftCapWidth;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(id)fontName;
-(float)lineSpacing;
-(unsigned)numberOfLines;
-(void)setLineSpacing:(float)arg1 ;
-(void)setFontSize:(float)arg1 ;
-(id)dictionaryRepresentation;
-(void)setFontName:(id)arg1 ;
-(void)setRightPadding:(float)arg1 ;
-(float)rightPadding;
-(float)fontSize;
-(float)leftPadding;
-(BOOL)hasLineSpacing;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasFontName;
-(float)textBaseLine;
-(BOOL)hasTextBaseLine;
-(void)setTextBaseLine:(float)arg1 ;
-(BOOL)hasFontSize;
-(void)setHasTextBaseLine:(BOOL)arg1 ;
-(void)setHasFontSize:(BOOL)arg1 ;
-(unsigned)layersCount;
-(SCD_Struct_VK288)layerAtIndex:(unsigned)arg1 ;
-(CGSize)_imageSizeWithTextureAtlases:(id)arg1 ;
-(CGImageRef)newImageWithBackgroundColor:(CGColorRef)arg1 borderColor:(CGColorRef)arg2 textureAtlases:(id)arg3 contentScale:(float)arg4 ;
-(float)rightCapWidth;
-(void)clearLayers;
-(BOOL)hasNumberOfLines;
-(void)addLayer:(SCD_Struct_VK288)arg1 ;
-(BOOL)hasLeftCapWidth;
-(void)setLeftCapWidth:(float)arg1 ;
-(BOOL)hasRightCapWidth;
-(void)setRightCapWidth:(float)arg1 ;
-(BOOL)hasLeftPadding;
-(void)setLeftPadding:(float)arg1 ;
-(BOOL)hasRightPadding;
-(void)setHasNumberOfLines:(BOOL)arg1 ;
-(SCD_Struct_VK288*)layers;
-(void)setLayers:(SCD_Struct_VK288*)arg1 count:(unsigned)arg2 ;
-(void)setHasLeftCapWidth:(BOOL)arg1 ;
-(void)setHasRightCapWidth:(BOOL)arg1 ;
-(void)setHasLineSpacing:(BOOL)arg1 ;
-(void)setHasLeftPadding:(BOOL)arg1 ;
-(void)setHasRightPadding:(BOOL)arg1 ;
@end
