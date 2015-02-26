/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMapTable, VKPShieldPack;

@interface VKShieldAtlas : NSObject {

	NSMapTable* _atlasToImages;
	VKPShieldPack* _shieldPack;

}
-(void)dealloc;
-(void)purge;
-(id)initWithShieldPack:(id)arg1 ;
-(id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 numberOfLines:(unsigned long long)arg5 genericShieldGenerator:(id)arg6 colors:(SCD_Struct_VK81*)arg7 ;
@end
