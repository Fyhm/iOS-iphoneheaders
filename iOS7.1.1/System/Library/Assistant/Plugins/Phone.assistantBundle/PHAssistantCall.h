/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:06 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCall.h>
#import <AddressBook/AFServiceCommand.h>

@class NSBundle;

@interface PHAssistantCall : SAPhoneCall <AFServiceCommand> {

	NSBundle* _voiceDialBundle;

}
-(bool)_faceTimeIsAvailable;
-(void)_removeFaceTimeAvailabilityListener;
-(bool)_isEmailAddress;
-(id)_voiceDialBundle;
-(void)_addFaceTimeAvailabilityListener;
-(bool)_shouldApplyInternationalAssist;
-(void)performWithCompletion:(/*^block*/ id)arg1 serviceHelper:(id)arg2 ;
-(id)_performWithServiceHelper:(id)arg1 ;
-(id)_countryCode;
-(id)_validate;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)_copyExceptionsForCountryCode:(id)arg1 ;
@end
