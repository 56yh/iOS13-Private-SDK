//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSNumber;

@interface HMDAccessorySettingMergeStrategy : HMFObject
{
    NSNumber *_conflictValue;
    long long _strategy;
}

@property(readonly, nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(readonly, nonatomic) NSNumber *conflictValue; // @synthesize conflictValue=_conflictValue;
- (id)initWithMergeStrategy:(id)arg1;

@end

