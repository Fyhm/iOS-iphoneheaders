/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSCHChartAxisAnalysis : NSObject {

	long long _retainCount;
	NSArray* _majorGridLocations;
	NSArray* _minorGridLocations;
	NSArray* _totals;
	double _min;
	double _max;
	double _modelMin;
	double _modelMax;

}

@property (assign,nonatomic) double min;                              //@synthesize min=_min - In the implementation block
@property (assign,nonatomic) double max;                              //@synthesize max=_max - In the implementation block
@property (assign,nonatomic) double modelMin;                         //@synthesize modelMin=_modelMin - In the implementation block
@property (assign,nonatomic) double modelMax;                         //@synthesize modelMax=_modelMax - In the implementation block
@property (nonatomic,copy) NSArray * majorGridLocations;              //@synthesize majorGridLocations=_majorGridLocations - In the implementation block
@property (nonatomic,copy) NSArray * minorGridLocations;              //@synthesize minorGridLocations=_minorGridLocations - In the implementation block
@property (nonatomic,copy) NSArray * totals;                          //@synthesize totals=_totals - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(NSArray *)majorGridLocations;
-(NSArray *)minorGridLocations;
-(void)setModelMin:(double)arg1 ;
-(void)setModelMax:(double)arg1 ;
-(double)modelMin;
-(double)modelMax;
-(void)setMajorGridLocations:(NSArray *)arg1 ;
-(void)setMinorGridLocations:(NSArray *)arg1 ;
-(NSArray *)totals;
-(void)setTotals:(NSArray *)arg1 ;
-(id)retain;
-(void)dealloc;
-(unsigned)retainCount;
-(oneway void)release;
-(double)max;
-(void)setMax:(double)arg1 ;
-(double)min;
-(void)setMin:(double)arg1 ;
@end
