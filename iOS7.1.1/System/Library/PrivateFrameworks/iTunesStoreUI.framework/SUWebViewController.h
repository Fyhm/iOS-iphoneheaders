/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SUWebViewManagerDelegate.h>
#import <iTunesStoreUI/SUWebViewDelegate.h>

@class SUWebView, SSMutableAuthenticationContext, SUDelayedNavigationItem, NSURL, SUMescalSession, SUObjectPool, ISURLRequestPerformance, SUShowcaseViewController, SUStorePageProtocol, SUWebViewManager, SSAuthenticationContext;

@interface SUWebViewController : SUViewController <SUWebViewManagerDelegate, SUWebViewDelegate> {

	SUWebView* _webView;
	SSMutableAuthenticationContext* _authenticationContext;
	SUDelayedNavigationItem* _delayedNavigationItem;
	NSURL* _displayedURL;
	bool _hasEverAppeared;
	long long _lastKnownOrientation;
	/*^block*/ id _loadBlock;
	SUMescalSession* _mescalSession;
	SUObjectPool* _objectPool;
	ISURLRequestPerformance* _performanceMetrics;
	long long _scheduledOrientation;
	SUShowcaseViewController* _showcaseViewController;
	SUStorePageProtocol* _storePageProtocol;
	long long _style;
	NSURL* _url;
	bool _viewIsReady;
	SUWebViewManager* _webViewManager;

}

@property (assign,nonatomic) long long style;                                                                                                      //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;                                                                        //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign,nonatomic) bool viewIsReady;                                                                                                     //@synthesize viewIsReady=_viewIsReady - In the implementation block
@property (nonatomic,readonly) SUWebView * webView; 
@property (setter=_setMescalSession:,getter=_mescalSession,nonatomic,retain) SUMescalSession * _mescalSession;                                     //@synthesize mescalSession=_mescalSession - In the implementation block
@property (setter=_setPerformanceMetrics:,getter=_performanceMetrics,nonatomic,retain) ISURLRequestPerformance * _performanceMetrics;              //@synthesize performanceMetrics=_performanceMetrics - In the implementation block
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)dealloc;
-(void)setStyle:(long long)arg1 ;
-(void)invalidate;
-(long long)style;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)_setExistingNavigationItem:(id)arg1 ;
-(id)webView;
-(CGRect)documentBounds;
-(id)copyArchivableContext;
-(id)authenticationContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(id)copyDefaultScriptProperties;
-(id)copyScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(void)parentViewControllerHierarchyDidChange;
-(id)storePageProtocol;
-(void)storePageProtocolDidChange;
-(id)newRotationController;
-(void)keyboardDidHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(id)navigationItemForScriptInterface;
-(void)_loadWithURLOperation:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)_setPerformanceMetrics:(id)arg1 ;
-(bool)viewIsReady;
-(void)reloadWithStorePage:(id)arg1 forURL:(id)arg2 ;
-(id)displayedURL;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(void)_showNativeShowcaseWithDictionary:(id)arg1 ;
-(void)storePageCleanupBeforeTearDown;
-(id)_performanceMetrics;
-(void)setStorePageProtocol:(id)arg1 ;
-(id)newScriptInterface;
-(id)_defaultBackgroundColor;
-(void)_applyScriptProperties:(id)arg1 ;
-(CGSize)minimumViewSize;
-(id)_placeholderBackgroundView;
-(void)_reloadPlaceholderBackgroundView;
-(void)_prepareToLoadURL:(id)arg1 ;
-(void)_reloadUI;
-(void)setViewIsReady:(bool)arg1 ;
-(void)_sendOrientationWillChangeToInterfaceOrientation:(long long)arg1 ;
-(void)_finishLoadWithResult:(bool)arg1 error:(id)arg2 ;
-(void)_removePlaceholderBackgroundView;
-(void)_applySavedScrollOffsetIfPossible;
-(void)_loadURLRequest:(id)arg1 ;
-(void)_getURLRequestForOperation:(id)arg1 block:(/*^block*/ id)arg2 ;
-(void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1 ;
-(id)_newURLRequestWithOperation:(id)arg1 bagContext:(id)arg2 ;
-(void)_addPlaceholderBackgroundView;
-(void)_reloadObjectPool;
-(id)newScriptInterfaceForWebViewManager:(id)arg1 ;
-(id)viewControllerForWebViewManager:(id)arg1 ;
-(void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2 ;
-(void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2 ;
-(void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2 ;
-(void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2 ;
-(void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewManagerDidFinishLoad:(id)arg1 ;
-(void)webViewManagerDidStartLoad:(id)arg1 ;
-(void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(CGRect)arg2 ;
-(void)_setLastKnownOrientation:(long long)arg1 ;
-(id)_mescalSession;
-(void)_setMescalSession:(id)arg1 ;
@end
