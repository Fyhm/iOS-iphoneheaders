/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:06 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface AESyncValue : NSObject {

	id<NSObject> _value;
	NSString* _syncVersion;

}

@property (nonatomic,retain) id<NSObject> value;                  //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSString * syncVersion;              //@synthesize syncVersion=_syncVersion - In the implementation block
-(void)setSyncVersion:(NSString *)arg1 ;
-(NSString *)syncVersion;
-(void)dealloc;
-(id<NSObject>)value;
-(void)setValue:(id<NSObject>)arg1 ;
@end
