/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol TUCallServicesProxyCallActions <NSObject>
@required
-(void)sendHardPauseDigits;
-(void)conferenceCall:(id)arg1;
-(void)unconferenceCall:(id)arg1;
-(void)holdCall:(id)arg1;
-(void)unholdCall:(id)arg1;
-(void)disconnectCall:(id)arg1;
-(void)playDTMFToneForCall:(id)arg1 key:(unsigned char)arg2;
-(void)answerCall:(id)arg1;
-(void)muteCall:(id)arg1;
-(void)unmuteCall:(id)arg1;
-(void)setIsSendingAudio:(BOOL)arg1 forCall:(id)arg2;
-(void)dialCall:(id)arg1;
-(void)swapCalls;
-(void)endActiveAndAnswerCall:(id)arg1;
-(void)endHeldAndAnswerCall:(id)arg1;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;

@end
