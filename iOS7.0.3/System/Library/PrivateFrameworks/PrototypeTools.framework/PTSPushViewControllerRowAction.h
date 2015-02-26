/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PrototypeTools-Structs.h>
#import <PrototypeTools/PTSRowAction.h>

@interface PTSPushViewControllerRowAction : PTSRowAction {

	/*^block*/ id _viewControllerCreator;

}

@property (nonatomic,copy) id viewControllerCreator;              //@synthesize viewControllerCreator=_viewControllerCreator - In the implementation block
+(id)actionWithViewControllerCreator:(/*^block*/ id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setViewControllerCreator:(/*^block*/ id)arg1 ;
-(/*^block*/ id)viewControllerCreator;
-(void).cxx_destruct;
@end
