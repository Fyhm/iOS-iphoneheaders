/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:00 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol WPContinuityDelegate <NSObject>
@optional
-(void)continuity:(id)arg1 didFailToStartAdvertisingOfType:(long long)arg2 withError:(id)arg3;
-(void)continuity:(id)arg1 didDiscoverType:(long long)arg2 withData:(id)arg3 fromPeer:(id)arg4;
-(void)continuity:(id)arg1 didLosePeer:(id)arg2 type:(long long)arg3;
-(void)continuity:(id)arg1 didFailToStartScanningForType:(long long)arg2 WithError:(id)arg3;
-(void)continuity:(id)arg1 didConnectToPeer:(id)arg2 error:(id)arg3;
-(void)continuity:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
-(void)continuity:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
-(void)continuityDidStartTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3 error:(id)arg4;
-(void)continuityDidStopTrackingPeer:(id)arg1 peer:(id)arg2 type:(long long)arg3;
-(void)continuity:(id)arg1 didDiscoverPeerWithData:(id)arg2 fromPeer:(id)arg3;
-(void)continuity:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
-(void)continuityDidStartAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;
-(void)continuityDidStopAdvertisingOfType:(id)arg1 advertisingType:(long long)arg2;
-(void)continuityDidStartScanningForType:(id)arg1 scanningType:(long long)arg2;
-(void)continuityDidStopScanningForType:(id)arg1 scanningType:(long long)arg2;
-(void)continuityDidChangeBluetoothBandwidthState:(id)arg1;

@required
-(void)continuityDidUpdateState:(id)arg1;

@end

