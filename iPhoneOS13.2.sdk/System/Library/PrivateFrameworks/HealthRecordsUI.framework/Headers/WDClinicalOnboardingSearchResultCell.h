//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthRecordsUI/WDMedicalRecordBrandCell.h>

@class HKClinicalProviderSearchResult, NSArray;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingSearchResultCell : WDMedicalRecordBrandCell
{
    HKClinicalProviderSearchResult *_searchResult;
    NSArray *_searchTerms;
}

@property(copy, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
@property(copy, nonatomic) HKClinicalProviderSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (void)_updateForContentSizeCategory:(id)arg1;
- (void)_updateContentWithSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)_updateLabelVisibility;
- (void)setSearchResult:(id)arg1 dataProvider:(id)arg2 searchTerms:(id)arg3;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

