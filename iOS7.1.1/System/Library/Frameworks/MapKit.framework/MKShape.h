/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:24 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotation.h>

@class NSString;

@interface MKShape : NSObject <MKAnnotation> {

	NSString* _title;
	NSString* _subtitle;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void).cxx_destruct;
-(SCD_Struct_MK1)coordinate;
@end
