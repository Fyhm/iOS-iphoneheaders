/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDevice;
@class NSString;

@interface _MTLComputePipelineState : NSObject {

	NSString* _label;
	id<MTLDevice> _device;

}

@property (readonly) NSString * label;                  //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)label;
-(id<MTLDevice>)device;
@end
