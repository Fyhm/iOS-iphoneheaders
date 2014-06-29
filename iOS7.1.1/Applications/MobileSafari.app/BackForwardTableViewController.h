/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>

@protocol BackForwardTableViewControllerDelegate;
@class NSArray;

@interface BackForwardTableViewController : PopoverSizingTableViewController {

	BOOL _reversesListOrder;
	<BackForwardTableViewControllerDelegate>* _delegate;
	NSArray* _backForwardList;

}

@property (assign,nonatomic) <BackForwardTableViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * backForwardList;                                          //@synthesize backForwardList=_backForwardList - In the implementation block
@property (assign,nonatomic) BOOL reversesListOrder;                                           //@synthesize reversesListOrder=_reversesListOrder - In the implementation block
-(void)setBackForwardList:(id)arg1 ;
-(BOOL)reversesListOrder;
-(void)setReversesListOrder:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)loadView;
-(id)backForwardList;
-(int)indexForIndexPath:(id)arg1 ;
@end
