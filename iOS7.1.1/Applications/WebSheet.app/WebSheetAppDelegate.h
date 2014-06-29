/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:18 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebSheet/WebSheet-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, WebSheetView;

@interface WebSheetAppDelegate : UIApplication <UIApplicationDelegate> {

	ShowWebSheetContext _showWebSheetContext;
	BOOL _openWiFiPreferencesOnExit;
	WebSheetView* _webSheet;

}

@property (nonatomic,retain) WebSheetView * webSheet;                     //@synthesize webSheet=_webSheet - In the implementation block
@property (assign,nonatomic) BOOL openWiFiPreferencesOnExit;              //@synthesize openWiFiPreferencesOnExit=_openWiFiPreferencesOnExit - In the implementation block
@property (nonatomic,retain) UIWindow * window; 
-(void)remoteSheetDidEnd;
-(id)webSheet;
-(void)setWebSheet:(id)arg1 ;
-(BOOL)openWiFiPreferencesOnExit;
-(void)setOpenWiFiPreferencesOnExit:(BOOL)arg1 ;
-(void)dealloc;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(BOOL)canShowAlerts;
@end
