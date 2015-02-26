/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADGraphic.h>

@class OADShapeGeometry, OADTextBody;

@interface OADShape : OADGraphic {

	OADShapeGeometry* mGeometry;
	OADTextBody* mTextBody;

}
-(void)dealloc;
-(id)init;
-(int)type;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)shapeProperties;
-(BOOL)isTextBox;
-(id)textBody;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setTextBody:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)flattenProperties;
-(void)createPresetGeometryWithShapeType:(int)arg1 ;
@end
