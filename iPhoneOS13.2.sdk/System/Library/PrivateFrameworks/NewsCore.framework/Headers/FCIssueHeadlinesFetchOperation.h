//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, NSArray, NSDictionary;
@protocol FCContentContext;

@interface FCIssueHeadlinesFetchOperation : FCOperation
{
    FCCachePolicy *_cachePolicy;
    id /* block */ _fetchCompletionHandler;
    id <FCContentContext> _context;
    NSArray *_issueIDs;
    NSDictionary *_resultHeadlinesByIssue;
}

@property(retain, nonatomic) NSDictionary *resultHeadlinesByIssue; // @synthesize resultHeadlinesByIssue=_resultHeadlinesByIssue;
@property(retain, nonatomic) NSArray *issueIDs; // @synthesize issueIDs=_issueIDs;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id /* block */ fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) FCCachePolicy *cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (id)_promiseHeldRecordsByType;
- (id)_promiseConfiguration;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithContext:(id)arg1 issues:(id)arg2;
- (id)initWithContext:(id)arg1 issueIDs:(id)arg2;
- (id)init;

@end

