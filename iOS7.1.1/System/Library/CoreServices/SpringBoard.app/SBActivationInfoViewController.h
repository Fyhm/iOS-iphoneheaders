/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class NSString;

@interface SBActivationInfoViewController : UIViewController {

	NSString* _meid;
	NSString* _imei;
	NSString* _iccid;
	float _alertHeight;

}
-(id)_formattedIMEI;
-(id)_formattedICCID;
-(void)_updateTextView;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)textView;
-(void)_simStatusChanged:(id)arg1 ;
@end
