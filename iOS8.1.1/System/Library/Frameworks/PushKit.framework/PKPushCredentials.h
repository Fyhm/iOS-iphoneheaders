/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSData;

@interface PKPushCredentials : NSObject {

	NSString* _type;
	NSData* _token;

}

@property (copy) NSString * type;              //@synthesize type=_type - In the implementation block
@property (copy) NSData * token;               //@synthesize token=_token - In the implementation block
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
@end
