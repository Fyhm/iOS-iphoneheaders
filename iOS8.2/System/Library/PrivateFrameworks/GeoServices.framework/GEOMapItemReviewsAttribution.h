/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:11 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOMapItemAttribution.h>

@class NSArray;

@interface GEOMapItemReviewsAttribution : GEOMapItemAttribution

@property (nonatomic,readonly) NSArray * addReviewURLs; 
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSArray *)addReviewURLs;
-(id)urlsForReviewWithIdentifier:(id)arg1 ;
-(id)urlsForSelectedItemWithItems:(id)arg1 ;
@end
