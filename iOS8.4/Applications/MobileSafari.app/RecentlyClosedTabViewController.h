/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UINavigationController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <MobileSafari/BrowserPanel.h>

@protocol RecentlyClosedTabViewControllerDelegate;
@class NSMutableArray, UITableViewController, NSString;

@interface RecentlyClosedTabViewController : UINavigationController <UITableViewDataSource, UITableViewDelegate, BrowserPanel> {

	NSMutableArray* _recentlyClosedTabs;
	UITableViewController* _tableViewController;
	id<RecentlyClosedTabViewControllerDelegate> _recentTabsDelegate;

}

@property (assign,nonatomic,__weak) id<RecentlyClosedTabViewControllerDelegate> recentTabsDelegate;              //@synthesize recentTabsDelegate=_recentTabsDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)panelType;
-(int)pausesPages;
-(char)ignoresPrivateBrowsingStyle;
-(void)addRecentlyClosedTabDocument:(id)arg1 ;
-(void)removeRecentlyClosedTabDocument:(id)arg1 ;
-(void)removeAllRecentlyClosedTabDocuments;
-(id<RecentlyClosedTabViewControllerDelegate>)recentTabsDelegate;
-(void)setRecentTabsDelegate:(id<RecentlyClosedTabViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)doneButtonTapped;
@end
