/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MultipeerConnectivity/MultipeerConnectivity-Structs.h>
#import <MultipeerConnectivity/NSCopying.h>
#import <MultipeerConnectivity/NSSecureCoding.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding> {

	MCPeerIDInternal* _internal;

}

@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)supportsSecureCoding;
-(id)idString;
-(id)serializedRepresentation;
-(id)initWithIDString:(id)arg1 displayName:(id)arg2 ;
-(unsigned long long)pid64;
-(id)internalDescription;
-(id)initWithPID:(unsigned)arg1 displayName:(id)arg2 ;
-(id)initWithDisplayName:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(id)initWithSerializedRepresentation:(id)arg1 ;
-(unsigned)pid;
@end
