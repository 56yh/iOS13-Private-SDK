//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSDate, NSString, PPConnectionsCriteria, PPQuickTypeExplanationSet;

@protocol PPConnectionsLocationSource 
+ (NSString *)identifier;
- (NSArray *)locationItemsWithCriteria:(PPConnectionsCriteria *)arg1 earliest:(NSDate *)arg2 latest:(NSDate *)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(PPQuickTypeExplanationSet *)arg6;
@end

