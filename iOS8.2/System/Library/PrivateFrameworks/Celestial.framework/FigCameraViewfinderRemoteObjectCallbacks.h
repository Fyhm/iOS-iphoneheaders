/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:36 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>
@required
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(long)arg2;

@end
