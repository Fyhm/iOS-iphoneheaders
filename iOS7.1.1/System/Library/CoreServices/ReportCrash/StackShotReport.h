/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:39 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ReportCrash/ReportCrash-Structs.h>
#import <ReportCrash/AppleErrorReport.h>

@class NSString, KTraceUtil, NSArray, NSMutableString;

@interface StackShotReport : AppleErrorReport {

	NSString* _reason;
	long long* _exceptionCode;
	unsigned _exceptionCodeCount;
	KTraceUtil* _ktraceUtil;
	NSString* _acquireTime;
	NSString* _acquireTimeFileFormat;
	int _thermalNotificationCurrentLevel;
	NSArray* _thermalSensorValues;
	int _jpListSize;
	memorystatus_priority_entry* _jpListEntries;
	NSMutableString* _traceErrorString;
	void* _traceBuf;
	long _traceLen;
	BOOL _includeSyslog;

}

@property (nonatomic,readonly) NSString * acquireTimeFileFormat;              //@synthesize acquireTimeFileFormat=_acquireTimeFileFormat - In the implementation block
@property (assign,nonatomic) BOOL includeSyslog;                              //@synthesize includeSyslog=_includeSyslog - In the implementation block
-(id)initWithReason:(id)arg1 exceptionCode:(long long*)arg2 exceptionCodeCount:(unsigned)arg3 ;
-(void)acquireStackshotWithKTrace:(BOOL)arg1 ;
-(id)systemReportWithKTrace:(BOOL)arg1 ;
-(id)systemReport;
-(id)exceptionCodesDescription;
-(id)copySyslogString;
-(void)setIncidentID:(id)arg1 ;
-(void)acquireStackshotWithKTrace;
-(void)acquireStackshotWithoutKTrace;
-(id)ktraceString;
-(id)acquireTimeFileFormat;
-(BOOL)includeSyslog;
-(void)setIncludeSyslog:(BOOL)arg1 ;
-(void)setReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
