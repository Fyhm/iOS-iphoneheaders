/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/00LaunchServicesMigrator.migrator/00LaunchServicesMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface LSDatabaseMigrator : DataClassMigrator
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(id)init;
@end
