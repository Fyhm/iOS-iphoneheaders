/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptDataRowObject.h>

@protocol CKMessage;
@interface CKTranscriptHeader : NSObject <CKTranscriptDataRowObject> {

	<CKMessage>* _message;

}

@property (nonatomic,retain) <CKMessage> * message;              //@synthesize message=_message - In the implementation block
-(void)dealloc;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)__ck_displayGUIDWithMessage:(id)arg1 ;
-(Class)__ck_displayCellClass;
-(id)__ck_displayCellIdentifier;
-(void)__ck_prewarmForDisplay;
-(id)__ck_displayContactImage;
-(UIEdgeInsets)__ck_displayContentAlignmentInsets;
-(BOOL)__ck_displayTranscriptOrientation;
-(BOOL)__ck_transcriptUsesTextAlignmentInsets;
-(BOOL)__ck_displayDuringSend;
-(BOOL)__ck_wantsDrawerLayout;
-(CGSize)__ck_displaySize:(UIEdgeInsets*)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end
