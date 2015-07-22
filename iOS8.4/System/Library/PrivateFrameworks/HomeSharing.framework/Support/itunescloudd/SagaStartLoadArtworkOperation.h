/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:57 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@interface SagaStartLoadArtworkOperation : CloudLibraryOperation {

	unsigned long long _sagaID;
	/*^block*/id _artworkLoadedCompletionHandler;

}

@property (nonatomic,copy) id artworkLoadedCompletionHandler;              //@synthesize artworkLoadedCompletionHandler=_artworkLoadedCompletionHandler - In the implementation block
-(id)initWithSagaID:(unsigned long long)arg1 ;
-(void)setArtworkLoadedCompletionHandler:(id)arg1 ;
-(id)artworkLoadedCompletionHandler;
-(void)main;
@end
