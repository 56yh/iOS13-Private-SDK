//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKDataMetadataProvider-Protocol.h>

@class HKSample, HKUnitPreferenceController;

@interface HKDataMetadataDataSource : NSObject <HKDataMetadataProvider>
{
    HKSample *_sample;
    HKUnitPreferenceController *_unitPreferenceController;
}

- (id)_mediaSourceDisplayNamesForSample:(id)arg1;
- (void)addDetailValuesToSection:(id)arg1;
- (id)initWithSample:(id)arg1 unitPreferenceController:(id)arg2;

@end

