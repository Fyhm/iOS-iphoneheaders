/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/MTLToolsObject.h>
#import <Metal/MTLFunctionSPI.h>

@class MTLToolsPointerArray, NSString, NSArray;

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI> {

	MTLToolsPointerArray* _functions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned functionType; 
@property (readonly) NSArray * vertexAttributes; 
@property (readonly) NSString * name; 
@property (copy,readonly) NSString * filePath; 
@property (readonly) int lineNumber; 
-(int)lineNumber;
-(void)acceptVisitor:(id)arg1 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 functions:(id)arg3 ;
-(unsigned)functionType;
-(NSArray *)vertexAttributes;
-(void)dealloc;
-(NSString *)name;
-(NSString *)filePath;
-(id<MTLDevice>)device;
@end
