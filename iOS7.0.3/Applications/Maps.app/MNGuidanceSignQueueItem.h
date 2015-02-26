/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class MNGuidanceSignView, MNGuidanceSecondarySignView;

@interface MNGuidanceSignQueueItem : NSObject {

	MNGuidanceSignView* _primarySignView;
	MNGuidanceSecondarySignView* _secondarySignView;

}

@property (nonatomic,retain) MNGuidanceSignView * primarySignView;                         //@synthesize primarySignView=_primarySignView - In the implementation block
@property (nonatomic,retain) MNGuidanceSecondarySignView * secondarySignView;              //@synthesize secondarySignView=_secondarySignView - In the implementation block
-(id)secondarySignView;
-(id)primarySignView;
-(void)setPrimarySignView:(id)arg1 ;
-(void)setSecondarySignView:(id)arg1 ;
-(void)dealloc;
@end
