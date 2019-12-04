//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SignpostSupportExactProcessNameFilter, SignpostSupportPIDFilter, SignpostSupportSubsystemCategoryFilter, SignpostSupportUniquePIDFilter;

@interface SignpostSerializationFilterConfiguration : NSObject
{
    SignpostSupportSubsystemCategoryFilter *_subsystemCategoryFilter;
    SignpostSupportPIDFilter *_pidFilter;
    SignpostSupportUniquePIDFilter *_uniquePidFilter;
    SignpostSupportExactProcessNameFilter *_processNameFilter;
}

@property(retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter; // @synthesize processNameFilter=_processNameFilter;
@property(retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter; // @synthesize uniquePidFilter=_uniquePidFilter;
@property(retain, nonatomic) SignpostSupportPIDFilter *pidFilter; // @synthesize pidFilter=_pidFilter;
@property(retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter; // @synthesize subsystemCategoryFilter=_subsystemCategoryFilter;

@end

