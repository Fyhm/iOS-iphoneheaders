/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTListController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/MTPlaylistLayoutControllerProtocol.h>

@protocol MTPlaylistLayoutViewControllerDelegate;
@class UIViewController, UIPopoverController, NSString, UIView, UIButton, UIBarButtonItem, UIRefreshControl, MTPodcastPlaylistSheetViewController, MTAllPropertyChangesQueryObserver;

@interface MTPlaylistGroupDetailListController : MTListController <MTSourceListDelegate, UIViewControllerRestoration, MTReachabilityObserver, MTPlaylistLayoutControllerProtocol> {

	UIViewController* _detailController;
	UIPopoverController* _episodePopover;
	NSString* _settingsUuidDisplayingPopover;
	UIView* _headerViewSeparator;
	UIView* _footerView;
	UIButton* _settingsButton;
	UIBarButtonItem* _settingsButtonItem;
	UIPopoverController* _settingsPopover;
	UIRefreshControl* _refreshControl;
	unsigned _episodesCount;
	MTPodcastPlaylistSheetViewController* _addPodcastsViewController;
	MTAllPropertyChangesQueryObserver* _downloadedQuery;
	char _restoring;
	char _downloadButtonEnabled;
	char _downloadsAvailable;
	/*^block*/id _settingsBlock;
	id<MTPlaylistLayoutViewControllerDelegate> _layoutDelegate;
	NSString* _playlistUuid;
	NSString* _playingUuid;

}

@property (nonatomic,retain) NSString * playlistUuid;                                                       //@synthesize playlistUuid=_playlistUuid - In the implementation block
@property (nonatomic,copy) NSString * playingUuid;                                                          //@synthesize playingUuid=_playingUuid - In the implementation block
@property (assign,nonatomic) char downloadButtonEnabled;                                                    //@synthesize downloadButtonEnabled=_downloadButtonEnabled - In the implementation block
@property (assign,nonatomic) char downloadsAvailable;                                                       //@synthesize downloadsAvailable=_downloadsAvailable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id settingsBlock;                                                                //@synthesize settingsBlock=_settingsBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MTPlaylistLayoutViewControllerDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(id)stationPodcastPredicateForPlaylist:(id)arg1 ;
+(Class)playlistSettingsClass;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setPlaylistUuid:(NSString *)arg1 ;
-(void)setPlayingUuid:(NSString *)arg1 ;
-(void)transitionToState:(int)arg1 animated:(char)arg2 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(id)editingToolbarButtons;
-(void)markSelectedItems:(char)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)toolbarButtons;
-(void)edit:(id)arg1 ;
-(NSString *)playingUuid;
-(id)emptyListMessage;
-(void)showSettings:(id)arg1 ;
-(id)leftButtonItems;
-(void)didEndUpdatingAllPodcasts:(id)arg1 ;
-(NSString *)playlistUuid;
-(id)episodeListForSettings:(id)arg1 ;
-(id)settingsButtonItem;
-(void)refreshPlaylist:(id)arg1 ;
-(void)setDownloadButtonEnabled:(char)arg1 ;
-(void)setDownloadsAvailable:(char)arg1 ;
-(void)updateDownloadButtonState;
-(void)_synchronousUpdatePlaylist;
-(void)_modifyEpisodesForSettingsWithBlock:(/*^block*/id)arg1 atIndexPaths:(id)arg2 ctx:(id)arg3 ;
-(void)updateEditingState:(char)arg1 animated:(char)arg2 ;
-(void)_updatePlaylist;
-(void)_updatePlaylistSuppressUpdates:(char)arg1 ;
-(void)playlistSettingsDidChange;
-(id)settingsBlock;
-(void)setSettingsBlock:(id)arg1 ;
-(id)leftEditingItems;
-(id)rightEditingItems;
-(void)downloadAll:(id)arg1 ;
-(void)finishedSettings:(id)arg1 ;
-(void)finishedAdding:(id)arg1 ;
-(void)playlistSettingsDidChangeSetting:(id)arg1 ;
-(char)downloadButtonEnabled;
-(char)downloadsAvailable;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(id)headerView;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)delete:(id)arg1 ;
-(id)footerView;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id<MTPlaylistLayoutViewControllerDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<MTPlaylistLayoutViewControllerDelegate>)arg1 ;
-(id)settingsButton;
-(void)cancel:(id)arg1 ;
-(void)setLibrary:(id)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end
