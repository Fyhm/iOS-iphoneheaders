/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:41 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <CoreHAP/HAPAccessoryServer.h>
#import <CoreHAP/HAPHTTPClientDelegate.h>
#import <CoreHAP/HAPHTTPClientDebugDelegate.h>

@protocol OS_dispatch_queue, HAPAccessoryServerIPDelegatePrivate;
@class NSString, NSObject, NSDictionary, NSArray, NSMutableArray, HAPAccessory, HAPHTTPClient;

@interface HAPAccessoryServerIP : HAPAccessoryServer <HAPHTTPClientDelegate, HAPHTTPClientDebugDelegate> {

	MFiSAPRef _mfiSAP;
	PairingSessionPrivateRef _pairingSession;
	unsigned long long _featureFlags;
	BOOL _establishingSecureConnection;
	NSString* _deviceID;
	NSString* _model;
	NSString* _protocolVersion;
	NSString* _sourceVersion;
	unsigned long long _configNumber;
	unsigned long long _stateNumber;
	unsigned long long _statusFlags;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSDictionary* _bonjourDeviceInfo;
	id<HAPAccessoryServerIPDelegatePrivate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSString* _accessoryServerName;
	NSArray* _ipServices;
	NSMutableArray* _queuedOperations;
	HAPAccessory* _primaryAccessoryForServer;
	HAPHTTPClient* _httpClient;
	/*^block*/id _pairVerifyCompletionBlock;
	NSString* _controllerUsername;
	/*^block*/id _netServiceResolveCompletionBlock;

}

@property (nonatomic,copy) NSString * deviceID;                                                    //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * model;                                                       //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * protocolVersion;                                             //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,copy) NSString * sourceVersion;                                               //@synthesize sourceVersion=_sourceVersion - In the implementation block
@property (assign,nonatomic) unsigned long long configNumber;                                      //@synthesize configNumber=_configNumber - In the implementation block
@property (assign,nonatomic) unsigned long long stateNumber;                                       //@synthesize stateNumber=_stateNumber - In the implementation block
@property (assign,nonatomic) unsigned long long statusFlags;                                       //@synthesize statusFlags=_statusFlags - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                               //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * bonjourDeviceInfo;                                     //@synthesize bonjourDeviceInfo=_bonjourDeviceInfo - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAccessoryServerIPDelegatePrivate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                           //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,copy) NSString * accessoryServerName;                                         //@synthesize accessoryServerName=_accessoryServerName - In the implementation block
@property (nonatomic,retain) NSArray * ipServices;                                                 //@synthesize ipServices=_ipServices - In the implementation block
@property (nonatomic,retain) NSMutableArray * queuedOperations;                                    //@synthesize queuedOperations=_queuedOperations - In the implementation block
@property (nonatomic,retain) HAPAccessory * primaryAccessoryForServer;                             //@synthesize primaryAccessoryForServer=_primaryAccessoryForServer - In the implementation block
@property (nonatomic,retain) HAPHTTPClient * httpClient;                                           //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,copy) id pairVerifyCompletionBlock;                                           //@synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock - In the implementation block
@property (nonatomic,retain) NSString * controllerUsername;                                        //@synthesize controllerUsername=_controllerUsername - In the implementation block
@property (nonatomic,copy) id netServiceResolveCompletionBlock;                                    //@synthesize netServiceResolveCompletionBlock=_netServiceResolveCompletionBlock - In the implementation block
@property (assign) BOOL establishingSecureConnection;                                              //@synthesize establishingSecureConnection=_establishingSecureConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<HAPAccessoryServerIPDelegatePrivate>)arg1 ;
-(NSString *)description;
-(id<HAPAccessoryServerIPDelegatePrivate>)delegate;
-(id)name;
-(void)invalidate;
-(id)identifier;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)deviceID;
-(NSString *)protocolVersion;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(void)setQueuedOperations:(NSMutableArray *)arg1 ;
-(void)setEstablishingSecureConnection:(BOOL)arg1 ;
-(BOOL)_parseAndValidateTXTRecord;
-(id)_deviceID;
-(HAPHTTPClient *)httpClient;
-(void)setHttpClient:(HAPHTTPClient *)arg1 ;
-(NSString *)sourceVersion;
-(unsigned long long)configNumber;
-(unsigned long long)stateNumber;
-(unsigned long long)statusFlags;
-(NSString *)accessoryServerName;
-(BOOL)_checkPairedState;
-(void)_updateWithBonjourDeviceInfo:(id)arg1 ;
-(void)setBonjourDeviceInfo:(NSDictionary *)arg1 ;
-(BOOL)hasPairings;
-(BOOL)isPaired;
-(BOOL)_delegateRespondsToSelector:(SEL)arg1 ;
-(BOOL)_isSessionEstablished;
-(void)_getAttributeDatabase;
-(void)_establishSecureConnectionAndFetchAttributeDatabase;
-(NSArray *)ipServices;
-(id)_serverIdentifier;
-(BOOL)establishingSecureConnection;
-(void)setPairVerifyCompletionBlock:(id)arg1 ;
-(void)_establishSecureSession;
-(void)_isAccessoryPublicKeyPresent:(BOOL*)arg1 registeredWithHomeKit:(BOOL*)arg2 ;
-(int)_pairSetupStart;
-(int)_continuePairingAfterAuthPrompt;
-(int)_pairSetupTryPassword:(id)arg1 ;
-(void)_tearDownSession;
-(void)_error:(id)arg1 forReadCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSMutableArray *)queuedOperations;
-(void)_error:(id)arg1 forWriteCharacteristicValues:(id)arg2 queue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_startAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_queueReadCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleReadResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_handleHTTPClientErrors;
-(void)_queueWriteCharacteristicValues:(id)arg1 queue:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_handleWriteResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 requestTuples:(id)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_queueEnableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(void)_handleEventResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 error:(id)arg4 characteristics:(id)arg5 requestedEventState:(BOOL)arg6 completion:(/*^block*/id)arg7 queue:(id)arg8 ;
-(BOOL)_processEvent:(id)arg1 matchedCharacteristic:(id*)arg2 ;
-(NSDictionary *)bonjourDeviceInfo;
-(BOOL)_parseTXTRecordDictionary:(id)arg1 ;
-(void)_setDeviceIDWithString:(id)arg1 ;
-(void)setSourceVersion:(NSString *)arg1 ;
-(void)setConfigNumber:(unsigned long long)arg1 ;
-(void)setStateNumber:(unsigned long long)arg1 ;
-(void)setStatusFlags:(unsigned long long)arg1 ;
-(void)_processQueuedOperationsWithError:(id)arg1 ;
-(void)_parseAttributeDatabase:(id)arg1 ;
-(HAPAccessory *)primaryAccessoryForServer;
-(id)_parseSerializedAccessory:(id)arg1 ;
-(void)_copyPropertiesForPrimaryAccessoryFromAccessory:(id)arg1 ;
-(void)setPrimaryAccessoryForServer:(HAPAccessory *)arg1 ;
-(BOOL)_updateAccessories:(id)arg1 ;
-(BOOL)_mergeExistingAccessory:(id)arg1 withNewAccessory:(id)arg2 ;
-(BOOL)_mergeExistingService:(id)arg1 withNewService:(id)arg2 ;
-(int)_pairVerifyStart;
-(int)_ensureHTTPClientSetUp;
-(id)pairVerifyCompletionBlock;
-(NSString *)controllerUsername;
-(int)_handlePairSetupCompletionWithData:(id)arg1 ;
-(int)_ensurePairingSessionIsInitializedWithType:(unsigned)arg1 ;
-(int)_handlePairVerifyCompletionWithData:(id)arg1 ;
-(void)_queueAddPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_handlePairingsResponseObject:(id)arg1 type:(unsigned long long)arg2 httpStatus:(int)arg3 httpError:(id)arg4 removeRequest:(BOOL)arg5 completionQueue:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)httpClient:(id)arg1 didReceiveEvent:(id)arg2 ;
-(void)httpClientDidCloseConnectionDueToServer:(id)arg1 ;
-(void)httpClient:(id)arg1 didReceiveHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(void)httpClient:(id)arg1 willSendHTTPMessageWithHeaders:(id)arg2 body:(id)arg3 ;
-(id)initWithBonjourDeviceInfo:(id)arg1 keyStore:(id)arg2 ;
-(id)briefDescription;
-(id)_serverName;
-(void)updateWithBonjourDeviceInfo:(id)arg1 ;
-(id)primaryAccessory;
-(long long)linkType;
-(void)discoverAccessories;
-(void)startPairing;
-(void)continuePairingAfterAuthPrompt;
-(BOOL)tryPairingPassword:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopPairingWithError:(id*)arg1 ;
-(void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enableEvents:(BOOL)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 queue:(id)arg4 ;
-(BOOL)addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)identifyWithCompletion:(/*^block*/id)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccessoryServerName:(NSString *)arg1 ;
-(void)setIpServices:(NSArray *)arg1 ;
-(void)setControllerUsername:(NSString *)arg1 ;
-(id)netServiceResolveCompletionBlock;
-(void)setNetServiceResolveCompletionBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)services;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end
