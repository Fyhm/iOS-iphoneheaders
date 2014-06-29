/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:21 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class SKUIClientContext, NSString, NSOperationQueue, SKUIRedeemConfiguration, SKUIRedeemStepViewController;

@interface SKUIRedeemViewController : UINavigationController {

	BOOL _cameraRedeemEnabled;
	long long _category;
	SKUIClientContext* _clientContext;
	NSString* _initialCode;
	NSOperationQueue* _operationQueue;
	SKUIRedeemConfiguration* _redeemConfiguration;
	SKUIRedeemStepViewController* _rootViewController;

}

@property (nonatomic,readonly) long long category;                           //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * initialCode;                           //@synthesize initialCode=_initialCode - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)_cancelButtonAction:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(bool)arg1 ;
-(long long)category;
-(void).cxx_destruct;
-(id)clientContext;
-(void)_configurationDidLoadWithResult:(bool)arg1 error:(id)arg2 ;
-(void)_clientContextDidLoadWithContext:(id)arg1 error:(id)arg2 ;
-(void)_loadRootViewController;
-(id)_newRootViewController;
-(void)_showRootViewController;
-(void)redeemAgainAnimated:(bool)arg1 ;
-(void)setClientContext:(id)arg1 ;
-(id)initWithRedeemCategory:(long long)arg1 ;
-(void)setInitialCode:(id)arg1 ;
-(id)initialCode;
@end
