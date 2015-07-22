/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:59 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@class NSString, ICSDateValue;

@interface ICSAttendeeComment : ICSProperty

@property (nonatomic,retain) NSString * x_calendarserver_attendee_ref; 
@property (nonatomic,retain) ICSDateValue * x_calendarserver_dtstamp; 
-(NSString *)x_calendarserver_attendee_ref;
-(void)setComment:(id)arg1 ;
-(id)parametersToObscure;
-(BOOL)shouldObscureValue;
-(id)initWithComment:(id)arg1 ;
-(void)setX_calendarserver_attendee_ref:(NSString *)arg1 ;
-(void)setX_calendarserver_dtstamp:(ICSDateValue *)arg1 ;
-(ICSDateValue *)x_calendarserver_dtstamp;
@end
