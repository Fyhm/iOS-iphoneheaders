/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SASetSupportedLocales : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * locales; 
+(id)setSupportedLocales;
+(id)setSupportedLocalesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)locales;
-(void)setLocales:(id)arg1 ;
@end
