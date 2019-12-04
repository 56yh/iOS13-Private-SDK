//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, NSURL, SKUISearchFieldController, SKUISearchRequest, SSMetricsSearchEvent;

@protocol SKUISearchFieldDelegate 

@optional
- (_Bool)searchFieldControllerShouldBeginEditing:(SKUISearchFieldController *)arg1;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 searchBarDidChangeText:(NSString *)arg2;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithSearchTerm:(NSString *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithURL:(NSURL *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearch:(SKUISearchRequest *)arg2;
@end

