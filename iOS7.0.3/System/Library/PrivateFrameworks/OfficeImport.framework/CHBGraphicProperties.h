/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHBGraphicProperties : NSObject
+(id)oadStrokeFrom:(const XlChartLineStyle*)arg1 ;
+(id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const XlChartLineStyle*)arg2 xlFillStyle:(const XlChartFillStyle*)arg3 ;
+(id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType*)arg1 state:(id)arg2 ;
+(id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat*)arg1 state:(id)arg2 ;
+(id)mapFillStyle:(const XlChartFillStyle*)arg1 xlPictureFormat:(const XlChartPicF*)arg2 state:(id)arg3 ;
+(float)widthFromLineWeightEnum:(int)arg1 ;
+(id)mapPresetDashFromPattern:(int)arg1 ;
+(id)mapFillStyleForMarker:(const XlChartMarkerStyle*)arg1 complex:(bool)arg2 state:(id)arg3 ;
+(id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle*)arg1 complex:(bool)arg2 state:(id)arg3 ;
+(int)oaPresetDashTypeFromLinePatternEnum:(int)arg1 ;
+(id)mapAssociatedEscherObjectstate:(id)arg1 ;
+(int)presetLinePatternEnumFromDash:(id)arg1 ;
+(int)lineWeightEnumFromWidth:(float)arg1 ;
@end
