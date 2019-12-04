//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCachePolicy, FCForYouConfig, NSArray, NSDictionary;
@protocol FCContentContext, FCCoreConfiguration, FCFeedPersonalizing;

@interface FCForYouConfigHeadlinesOperation : FCOperation
{
    _Bool _shouldFetchEditorialSectionTags;
    id <FCCoreConfiguration> _configuration;
    id <FCContentContext> _context;
    id <FCFeedPersonalizing> _personalizer;
    long long _fields;
    NSArray *_additionalArticleListIDs;
    NSArray *_additionalTagIDs;
    FCCachePolicy *_forYouConfigCachePolicy;
    FCCachePolicy *_articleListCachePolicy;
    FCCachePolicy *_editorialSectionTagCachePolicy;
    id /* block */ _headlinesCompletionHandler;
    id /* block */ _headlinesAndTagsCompletionHandler;
    FCForYouConfig *_resultForYouConfig;
    NSDictionary *_resultArticleListsByID;
    NSDictionary *_resultHeadlinesByArticleListID;
    NSDictionary *_resultHeadlinesByArticleID;
    NSDictionary *_resultTagsByID;
}

@property(retain, nonatomic) NSDictionary *resultTagsByID; // @synthesize resultTagsByID=_resultTagsByID;
@property(retain, nonatomic) NSDictionary *resultHeadlinesByArticleID; // @synthesize resultHeadlinesByArticleID=_resultHeadlinesByArticleID;
@property(retain, nonatomic) NSDictionary *resultHeadlinesByArticleListID; // @synthesize resultHeadlinesByArticleListID=_resultHeadlinesByArticleListID;
@property(retain, nonatomic) NSDictionary *resultArticleListsByID; // @synthesize resultArticleListsByID=_resultArticleListsByID;
@property(retain, nonatomic) FCForYouConfig *resultForYouConfig; // @synthesize resultForYouConfig=_resultForYouConfig;
@property(copy, nonatomic) id /* block */ headlinesAndTagsCompletionHandler; // @synthesize headlinesAndTagsCompletionHandler=_headlinesAndTagsCompletionHandler;
@property(copy, nonatomic) id /* block */ headlinesCompletionHandler; // @synthesize headlinesCompletionHandler=_headlinesCompletionHandler;
@property(retain, nonatomic) FCCachePolicy *editorialSectionTagCachePolicy; // @synthesize editorialSectionTagCachePolicy=_editorialSectionTagCachePolicy;
@property(retain, nonatomic) FCCachePolicy *articleListCachePolicy; // @synthesize articleListCachePolicy=_articleListCachePolicy;
@property(retain, nonatomic) FCCachePolicy *forYouConfigCachePolicy; // @synthesize forYouConfigCachePolicy=_forYouConfigCachePolicy;
@property(nonatomic) _Bool shouldFetchEditorialSectionTags; // @synthesize shouldFetchEditorialSectionTags=_shouldFetchEditorialSectionTags;
@property(copy, nonatomic) NSArray *additionalTagIDs; // @synthesize additionalTagIDs=_additionalTagIDs;
@property(copy, nonatomic) NSArray *additionalArticleListIDs; // @synthesize additionalArticleListIDs=_additionalArticleListIDs;
@property(nonatomic) long long fields; // @synthesize fields=_fields;
@property(retain, nonatomic) id <FCFeedPersonalizing> personalizer; // @synthesize personalizer=_personalizer;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (id)_edgeCacheHint;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

