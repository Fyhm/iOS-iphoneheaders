/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:20:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSXPCService.h>
#import <MailServices/MSDSearchResultsProtocol.h>

@protocol MSSearchDelegate;
@class NSString;

@interface MSSearch : MSXPCService <MSDSearchResultsProtocol> {

	id<MSSearchDelegate> _delegate;

}

@property (assign,nonatomic) id<MSSearchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned)arg3 delegate:(id)arg4 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(char)arg3 onServer:(char)arg4 delegate:(id)arg5 ;
+(id)findMessageData:(id)arg1 matchingCriterion:(id)arg2 shouldFetch:(char)arg3 onServer:(char)arg4 onlyInboxes:(char)arg5 delegate:(id)arg6 ;
+(void)setUnitTestingResultsArray:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MSSearchDelegate>)arg1 ;
-(id<MSSearchDelegate>)delegate;
-(id)_initWithDelegate:(id)arg1 ;
-(void)_findMessageData:(id)arg1 matchingCriterion:(id)arg2 options:(unsigned)arg3 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)foundResults:(id)arg1 error:(id)arg2 ;
-(void)_delegateDidFinishWithError:(id)arg1 ;
-(void)_delegateDidFindResults:(id)arg1 ;
-(char)_unitTestsAreEnabled;
-(id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id*)arg3 ;
-(void)_generateUnitTestResponsesForResultArray:(id)arg1 ;
@end
