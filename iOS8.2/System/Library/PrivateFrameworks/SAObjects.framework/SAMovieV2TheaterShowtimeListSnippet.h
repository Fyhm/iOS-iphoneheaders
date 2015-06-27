/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:59 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAMovieV2MovieDetailSnippet, NSString, NSArray;

@interface SAMovieV2TheaterShowtimeListSnippet : SAUISnippet

@property (nonatomic,retain) SAMovieV2MovieDetailSnippet * movieDetailSnippet; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSArray * theaterShowtimeListCells; 
@property (nonatomic,copy) NSString * title; 
+(id)theaterShowtimeListSnippet;
+(id)theaterShowtimeListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAMovieV2MovieDetailSnippet *)movieDetailSnippet;
-(void)setMovieDetailSnippet:(SAMovieV2MovieDetailSnippet *)arg1 ;
-(NSArray *)theaterShowtimeListCells;
-(void)setTheaterShowtimeListCells:(NSArray *)arg1 ;
@end
