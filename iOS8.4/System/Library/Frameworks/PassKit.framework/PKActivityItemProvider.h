/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIActivityItemProvider.h>

@class NSData, PKPassView, NSString;

@interface PKActivityItemProvider : UIActivityItemProvider {

	NSData* _passData;
	PKPassView* _passView;
	NSString* _passOrganizationName;

}
-(id)initWithPass:(id)arg1 andPassView:(id)arg2 ;
-(void)dealloc;
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 ;
@end
