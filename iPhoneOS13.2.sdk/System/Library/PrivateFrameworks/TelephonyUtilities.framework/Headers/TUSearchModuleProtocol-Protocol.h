//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSString, TUSearchController, TUSearchResults;

@protocol TUSearchModuleProtocol 
@property(readonly) TUSearchResults *searchResults;
@property(readonly, getter=isSearchComplete) _Bool searchComplete;
- (void)cancelSearch;
- (void)searchForString:(NSString *)arg1 completion:(void (^)(id <TUSearchModuleProtocol>, _Bool))arg2;

@optional
@property __weak TUSearchController *searchController;
@end

