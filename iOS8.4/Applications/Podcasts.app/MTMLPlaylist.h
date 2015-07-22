/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, MPMediaPlaylist, NSString, NSNumber;

@interface MTMLPlaylist : NSObject {

	NSMutableArray* _children;
	char _cachedEmpty;
	char _empty;
	char _isFolder;
	char _isGenius;
	char _isOnTheGo;
	char _isSmart;
	char _isHidden;
	MPMediaPlaylist* _playlist;
	NSString* _name;
	NSNumber* _mediaLibraryId;
	NSNumber* _parentMediaLibraryId;

}

@property (retain) MPMediaPlaylist * playlist;                             //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * mediaLibraryId;                    //@synthesize mediaLibraryId=_mediaLibraryId - In the implementation block
@property (nonatomic,retain) NSNumber * parentMediaLibraryId;              //@synthesize parentMediaLibraryId=_parentMediaLibraryId - In the implementation block
@property (assign,nonatomic) char isFolder;                                //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) char isGenius;                                //@synthesize isGenius=_isGenius - In the implementation block
@property (assign,nonatomic) char isOnTheGo;                               //@synthesize isOnTheGo=_isOnTheGo - In the implementation block
@property (assign,nonatomic) char isSmart;                                 //@synthesize isSmart=_isSmart - In the implementation block
@property (assign,nonatomic) char isHidden;                                //@synthesize isHidden=_isHidden - In the implementation block
+(id)playlistWithMPPlaylist:(id)arg1 ;
-(NSNumber *)mediaLibraryId;
-(char)isGenius;
-(char)isOnTheGo;
-(void)setMediaLibraryId:(NSNumber *)arg1 ;
-(NSNumber *)parentMediaLibraryId;
-(void)setParentMediaLibraryId:(NSNumber *)arg1 ;
-(char)isSmart;
-(void)setIsFolder:(char)arg1 ;
-(void)setIsGenius:(char)arg1 ;
-(void)setIsOnTheGo:(char)arg1 ;
-(void)setIsSmart:(char)arg1 ;
-(char)isHidden;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)isEmpty;
-(void)setIsHidden:(char)arg1 ;
-(void)setPlaylist:(MPMediaPlaylist *)arg1 ;
-(MPMediaPlaylist *)playlist;
-(void)addChild:(id)arg1 ;
-(char)isFolder;
-(id)children;
@end
