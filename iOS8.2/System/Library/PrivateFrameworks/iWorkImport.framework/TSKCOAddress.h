/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:15 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSString;

@interface TSKCOAddress : NSObject {

	TSKCOAddress* mParent;
	NSArray* mAllPathElements;

}

@property (nonatomic,readonly) TSKCOAddress * parent; 
@property (nonatomic,readonly) NSString * pathElement; 
@property (nonatomic,readonly) NSArray * allPathElements; 
-(NSString *)pathElement;
-(NSArray *)allPathElements;
-(char)hasSamePrefix:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(char)contains:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(TSKCOAddress *)parent;
-(char)equals:(id)arg1 ;
@end
