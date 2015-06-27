/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:00:17 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/MDRenderTarget.h>

@class NSString;

@interface GGLImageCanvas : NSObject <MDRenderTarget> {

	CGSize _size;
	float _contentScale;
	char _canMakeImage;
	char _recreateRenderTarget;
	unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D> >* _colorTexture;
	unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> >* _flippedColorBuffer;
	unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture> >* _flippedSurfaceTexture;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _flippedRenderTarget;
	unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer> >* _colorBuffer;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _depthStencilBuffer;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _renderTarget;
	char _useMultisampling;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _msaaColorBuffer;
	unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> >* _msaaDepthStencilBuffer;
	unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation> >* _msaaBlitOperation;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _msaaRenderTarget;

}

@property (assign,nonatomic) CGSize size;                                             //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) float contentScale;                                      //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) RenderTarget* renderTarget; 
@property (nonatomic,readonly) RenderTarget* msaaRenderTarget; 
@property (nonatomic,readonly) RenderTarget* finalRenderTarget; 
@property (nonatomic,readonly) RenderTargetOperation* msaaBlitOperation; 
@property (nonatomic,readonly) char useMultisampling;                                 //@synthesize useMultisampling=_useMultisampling - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) float averageFPS; 
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setContentScale:(float)arg1 ;
-(float)contentScale;
-(CGSize)sizeInPixels;
-(void)_createMSAARenderTarget;
-(void)_destroyMSAARenderTarget;
-(void)_destroyRenderTarget;
-(void)_createRenderTarget;
-(shared_ptr<ggl::BitmapDataBase>*)bitmapDataWithRenderer:(Renderer*)arg1 ;
-(void)willDrawView;
-(void)didDrawView;
-(RenderTarget*)renderTarget;
-(RenderTarget*)msaaRenderTarget;
-(RenderTarget*)finalRenderTarget;
-(RenderTargetOperation*)msaaBlitOperation;
-(id)initWithSize:(CGSize)arg1 scale:(float)arg2 useMultisampling:(char)arg3 ;
-(CGImageRef)newImageWithRenderer:(Renderer*)arg1 ;
-(char)useMultisampling;
@end
