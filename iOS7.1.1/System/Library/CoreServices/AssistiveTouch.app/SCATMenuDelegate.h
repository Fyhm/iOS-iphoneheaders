/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:55:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SCATMenuDelegate <NSObject>
@required
-(void)didPressScreenChangingButtonInMenu:(id)arg1;
-(CGRect*)menu:(id)arg1 rectToClearForFingersWithGestureSheet:(BOOL)arg2;
-(id)exitActionElementForFingersInMenu:(id)arg1;
-(id)menu:(id)arg1 tapContextItemForSheet:(id)arg2;
-(id)menu:(id)arg1 tapAndHoldContextItemForSheet:(id)arg2;
-(void)menu:(id)arg1 showTypingCandidates:(id)arg2;
-(id)gesturesSheetForMenu:(id)arg1;
-(void)menu:(id)arg1 showAlternateKeysForKey:(id)arg2;
@end
