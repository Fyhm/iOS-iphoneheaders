/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 9:34:49 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/AccessibilityBundles/BackBoard.axbundle/BackBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct SCRCMathAverageValue {
	unsigned samples;
	float fifo[50];
	int fifoIndex;
	float sum;
	float average;
	float current;
} SCRCMathAverageValue;

typedef struct {
	int field1;
	int field2;
	CGPoint field3;
	CGPoint field4;
	unsigned field5;
	unsigned long long field6;
	void field7;
	int field8;
	int field9;
	unsigned field10;
	unsigned long long field11;
	unsigned char field12[0];
} SCD_Struct_AX1;

typedef struct __IOHIDUserDevice* IOHIDUserDeviceRef;

typedef struct __IOHIDEvent* IOHIDEventRef;
