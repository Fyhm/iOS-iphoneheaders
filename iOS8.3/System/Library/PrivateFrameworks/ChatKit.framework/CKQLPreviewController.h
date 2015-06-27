/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:01:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QLPreviewController.h>
#import <ChatKit/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	NSArray* _previewItems;

}

@property (nonatomic,copy) NSArray * previewItems;              //@synthesize previewItems=_previewItems - In the implementation block
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(id)currentPreviewItem;
-(NSArray *)previewItems;
@end
