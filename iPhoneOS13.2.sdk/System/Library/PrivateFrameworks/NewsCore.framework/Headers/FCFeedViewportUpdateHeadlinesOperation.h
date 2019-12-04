//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCFeedDescriptor, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportDiff;
@protocol FCCoreConfiguration;

@interface FCFeedViewportUpdateHeadlinesOperation : FCOperation
{
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedViewport *_viewport;
    FCFeedDescriptor *_feedDescriptor;
    double _maxArticleAge;
    FCFeedViewportBookmark *_fromBookmark;
    FCFeedViewportBookmark *_toBookmark;
    id /* block */ _updateHeadlinesCompletionHandler;
    FCFeedViewport *_resultViewport;
    FCFeedViewportDiff *_resultDiff;
    FCFeedViewportBookmark *_adjustedFromBookmark;
    FCFeedViewportBookmark *_adjustedToBookmark;
}

@property(retain, nonatomic) FCFeedViewportBookmark *adjustedToBookmark; // @synthesize adjustedToBookmark=_adjustedToBookmark;
@property(retain, nonatomic) FCFeedViewportBookmark *adjustedFromBookmark; // @synthesize adjustedFromBookmark=_adjustedFromBookmark;
@property(retain, nonatomic) FCFeedViewportDiff *resultDiff; // @synthesize resultDiff=_resultDiff;
@property(retain, nonatomic) FCFeedViewport *resultViewport; // @synthesize resultViewport=_resultViewport;
@property(copy, nonatomic) id /* block */ updateHeadlinesCompletionHandler; // @synthesize updateHeadlinesCompletionHandler=_updateHeadlinesCompletionHandler;
@property(copy, nonatomic) FCFeedViewportBookmark *toBookmark; // @synthesize toBookmark=_toBookmark;
@property(copy, nonatomic) FCFeedViewportBookmark *fromBookmark; // @synthesize fromBookmark=_fromBookmark;
@property(nonatomic) double maxArticleAge; // @synthesize maxArticleAge=_maxArticleAge;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

