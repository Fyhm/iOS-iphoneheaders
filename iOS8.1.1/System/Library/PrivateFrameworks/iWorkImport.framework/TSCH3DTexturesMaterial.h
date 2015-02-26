/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:26 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DMaterial.h>

@class NSMutableArray;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {

	tvec4<float> mColor;
	NSMutableArray* mTextures;
	NSMutableArray* mTilings;

}

@property (assign,nonatomic) tvec4<float> color; 
+(id)instanceWithArchive:(const Chart3DTexturesMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DTexturesMaterialArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DTexturesMaterialArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)hasCompleteData;
-(id)firstTiling;
-(unsigned long long)textureCount;
-(id)textureEnumerator;
-(id)firstTexture;
-(void)addTexture:(id)arg1 tiling:(id)arg2 ;
-(id)tilings;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(tvec4<float>)color;
-(void)setColor:(tvec4<float>)arg1 ;
-(id)textures;
@end
