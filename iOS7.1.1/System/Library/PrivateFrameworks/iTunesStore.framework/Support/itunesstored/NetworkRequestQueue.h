/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 5:50:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunesstored/RequestQueue.h>

@interface NetworkRequestQueue : RequestQueue
+(void)observeXPCServer:(id)arg1 ;
+(void)authenticateWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getMatchStatusWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)loadURLBagWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupItemsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)lookupWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)requestURLWithMessage:(id)arg1 connection:(id)arg2 ;
+(id)sharedNetworkRequestQueue;
-(id)_newClientWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)_sendUnentitledMessageToClient:(id)arg1 ;
-(void)_enqueueOperationsForStoreServicesURL:(id)arg1 ;
-(id)init;
@end
