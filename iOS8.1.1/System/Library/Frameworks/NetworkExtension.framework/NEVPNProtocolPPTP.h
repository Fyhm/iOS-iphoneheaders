/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:42 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolPPP.h>

@interface NEVPNProtocolPPTP : NEVPNProtocolPPP {

	long long _encryptionLevel;

}

@property (assign) long long encryptionLevel;              //@synthesize encryptionLevel=_encryptionLevel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 ;
-(id)copyLegacyDictionary;
-(SCNetworkInterfaceRef)createInterface;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(void)setEncryptionLevel:(long long)arg1 ;
-(long long)encryptionLevel;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
