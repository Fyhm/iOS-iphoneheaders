/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@interface TSTDurationNode : TSTExpressionNode {

	TSTDurationWrapper mValue;
	char mBlank;

}

@property (assign,nonatomic) TSTDurationWrapper value; 
@property (assign,getter=isBlank,nonatomic) char blank; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(DurationNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const DurationNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS271)arg2 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(char)arg2 ;
-(id)exportString;
-(id)initWithContext:(id)arg1 duration:(TSTDurationWrapper)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(id)initWithContext:(id)arg1 asBlank:(char)arg2 firstIndex:(unsigned)arg3 lastIndex:(unsigned)arg4 ;
-(TSTDurationWrapper)durationWrapper;
-(void)setBlank:(char)arg1 ;
-(id)description;
-(id)date;
-(id)string;
-(void)setValue:(TSTDurationWrapper)arg1 ;
-(TSTDurationWrapper)value;
-(id)format;
-(int)tokenType;
-(char)isBlank;
@end
