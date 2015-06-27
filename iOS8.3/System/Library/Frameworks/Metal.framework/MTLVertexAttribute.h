/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:01:10 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface MTLVertexAttribute : NSObject {

	char _active;
	NSString* _name;
	unsigned _attributeIndex;
	unsigned _attributeType;

}

@property (readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (readonly) unsigned attributeIndex;                  //@synthesize attributeIndex=_attributeIndex - In the implementation block
@property (readonly) unsigned attributeType;                   //@synthesize attributeType=_attributeType - In the implementation block
@property (getter=isActive,readonly) char active;              //@synthesize active=_active - In the implementation block
-(unsigned)attributeType;
-(void)setAttributeType:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 attributeIndex:(unsigned)arg2 attributeType:(unsigned)arg3 isActive:(char)arg4 ;
-(unsigned)attributeIndex;
-(void)dealloc;
-(id)description;
-(char)isActive;
-(NSString *)name;
@end
