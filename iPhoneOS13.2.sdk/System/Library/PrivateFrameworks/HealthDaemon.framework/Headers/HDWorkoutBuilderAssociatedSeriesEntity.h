//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutBuilderAssociatedSeriesEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)allBuilderAssociatedSeriesWithProfile:(id)arg1 error:(id *)arg2;
+ (_Bool)enumerateSeriesForBuilder:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(id /* block */)arg4;
+ (id)seriesForBuilder:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (long long)associateSeries:(id)arg1 toWorkoutBuilderID:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

