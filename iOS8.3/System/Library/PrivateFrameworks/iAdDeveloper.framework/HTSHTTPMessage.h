/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:29:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iAdDeveloper/iAdDeveloper-Structs.h>
@class NSMutableDictionary, NSData, NSString;

@interface HTSHTTPMessage : NSObject {

	NSMutableDictionary* _headers;
	NSData* _body;
	NSString* _versionString;

}

@property (nonatomic,retain) NSMutableDictionary * headers;              //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * versionString;                     //@synthesize versionString=_versionString - In the implementation block
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)versionString;
-(void)dealloc;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(NSMutableDictionary *)headers;
-(void)setHeaders:(NSMutableDictionary *)arg1 ;
-(void)addHeadersToMessage:(CFHTTPMessageRef)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(id)valueForHeaderField:(id)arg1 ;
@end

