//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKFitnessFriendAchievement.h>

#import <HealthDaemon/HDCoding-Protocol.h>

@class NSString;

@interface _HKFitnessFriendAchievement (HDCodingSupport) <HDCoding>
+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
- (_Bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

