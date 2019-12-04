//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/SFSafariViewControllerDelegate-Protocol.h>

@class HKHealthRecordsStore, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate>
{
    HKHealthRecordsStore *_healthRecordsStore;
    NSURL *_loginURL;
}

+ (id)sharedSafariDelegate;
@property(retain, nonatomic) NSURL *loginURL; // @synthesize loginURL=_loginURL;
@property(retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // @synthesize healthRecordsStore=_healthRecordsStore;
- (id)safariViewController:(id)arg1 excludedActivityTypesForURL:(id)arg2 title:(id)arg3;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)_postAWDMetricForSafariCancellation:(id)arg1;
- (id)init;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

