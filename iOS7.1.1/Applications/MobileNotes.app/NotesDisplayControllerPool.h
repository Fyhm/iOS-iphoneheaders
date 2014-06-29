/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface NotesDisplayControllerPool : NSObject {

	NSMutableArray* _pool;

}

@property (nonatomic,retain) NSMutableArray * pool;              //@synthesize pool=_pool - In the implementation block
+(id)pool;
-(id)pool;
-(id)availableDisplayController;
-(void)warm;
-(void)purgeCachedControllers;
-(void)reclaimDisplayController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(void)setPool:(id)arg1 ;
@end
