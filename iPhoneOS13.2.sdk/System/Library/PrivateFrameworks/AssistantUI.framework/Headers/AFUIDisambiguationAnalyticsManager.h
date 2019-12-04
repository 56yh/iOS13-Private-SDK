//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AFDisambiguationAssistance, AFUIDisambiguationAnalyticsManagerDataSource;

@interface AFUIDisambiguationAnalyticsManager : NSObject
{
    id <AFUIDisambiguationAnalyticsManagerDataSource> _dataSource;
    NSArray *_listItems;
    id <AFDisambiguationAssistance> _disambiguationAssistance;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <AFDisambiguationAssistance> disambiguationAssistance; // @synthesize disambiguationAssistance=_disambiguationAssistance;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(nonatomic) __weak id <AFUIDisambiguationAnalyticsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_recordSASMetrics:(id)arg1 withSelectedBundleId:(id)arg2 originalCommandId:(id)arg3;
- (id)_allListItems;
- (id)_listItemMatchingAceId:(id)arg1;
- (void)_logDisambiguationSelectedEventWithListItem:(id)arg1;
- (void)logDisambiguationDismissedEvent;
- (void)logDisambiguationItemSelected:(id)arg1;

@end

