/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _EditScriptData <NSObject>
@required
+(id)EditScriptDataWithArray:(id)arg1;
+(id)EditScriptDataWithString:(id)arg1 chunkSize:(long long)arg2;
-(long long)length;
-(id)stringValue;
-(long long)lengthOfItem:(long long)arg1;
-(long long)characterIndexForItem:(long long)arg1;
-(long long)indexOfFirstDifferenceWithOtherData:(id)arg1 shouldReverseIterate:(BOOL)arg2;
-(id)stringAtIndex:(long long)arg1;

@end
