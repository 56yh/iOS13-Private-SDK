//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCActionDonationRecommender : NSObject
{
}

+ (id)disabledSpotlightApps;
+ (id)getDonationsFromActionResponse:(id)arg1;
+ (id)filterDonationsForTitleLength:(id)arg1;
+ (id)filteredActionDonations:(id)arg1 byApplicationAppIdentifier:(id)arg2;
+ (_Bool)actionDonation:(id)arg1 matchesQuery:(id)arg2;
+ (id)donationsByRemovingDuplicatesFromDonations:(id)arg1 query:(id)arg2 excludingAppIdentifiers:(id)arg3 includingSingleDonationPerApp:(_Bool)arg4;
+ (void)fetchPredictedDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)fetchRecentDonationsWithLimit:(unsigned long long)arg1 applicationBundleIdentifier:(id)arg2 filteringForTopLevel:(_Bool)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4 withCompletionHandler:(id /* block */)arg5;
+ (void)fetchSuggestedDonationsForApplicationBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchSuggestedDonationsForAllAppsWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchRecommendedDonationsByAppIdentifierWithLimit:(unsigned long long)arg1 query:(id)arg2 filteringForIsEligibleForPrediction:(_Bool)arg3 completionHandler:(id /* block */)arg4;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 filteringForIsEligibleForPrediction:(_Bool)arg4 filteringActiveShortcuts:(_Bool)arg5 actionDonationCategory:(unsigned long long)arg6 completionHandler:(id /* block */)arg7;
+ (void)fetchRecommendedDonationsForAppPredictionsWithLimit:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchRecommendedDonationsForApplicationBundleIdentifier:(id)arg1 limit:(unsigned long long)arg2 query:(id)arg3 completionHandler:(id /* block */)arg4;
+ (void)initialize;

@end

