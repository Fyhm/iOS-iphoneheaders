/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate;

@interface MSPBTimerContext : NSObject {

	BOOL _isValid;
	NSDate* _date;

}

@property (assign,nonatomic) BOOL isValid;               //@synthesize isValid=_isValid - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)contextWithDate:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
@end
