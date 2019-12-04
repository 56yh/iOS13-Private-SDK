//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCFeedGroupEmittingContext, FCFeedRefreshSession, NSArray, NSDictionary;

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation
{
    _Bool _lightweightOnly;
    FCFeedRefreshSession *_refreshSession;
    NSArray *_feedGroupEmitters;
    FCFeedGroupEmittingContext *_groupEmittingContext;
    NSDictionary *_toCursorsByEmitterID;
    id /* block */ _emitGroupsCompletionHandler;
    FCFeedRefreshSession *_resultRefreshSession;
}

@property(retain, nonatomic) FCFeedRefreshSession *resultRefreshSession; // @synthesize resultRefreshSession=_resultRefreshSession;
@property(copy, nonatomic) id /* block */ emitGroupsCompletionHandler; // @synthesize emitGroupsCompletionHandler=_emitGroupsCompletionHandler;
@property _Bool lightweightOnly; // @synthesize lightweightOnly=_lightweightOnly;
@property(retain, nonatomic) NSDictionary *toCursorsByEmitterID; // @synthesize toCursorsByEmitterID=_toCursorsByEmitterID;
@property(retain, nonatomic) FCFeedGroupEmittingContext *groupEmittingContext; // @synthesize groupEmittingContext=_groupEmittingContext;
@property(retain, nonatomic) NSArray *feedGroupEmitters; // @synthesize feedGroupEmitters=_feedGroupEmitters;
@property(retain, nonatomic) FCFeedRefreshSession *refreshSession; // @synthesize refreshSession=_refreshSession;
- (_Bool)_isErrorTransient:(id)arg1;
- (id)_exhaustGroupEmitter:(id)arg1 inRefreshSession:(id)arg2;
- (id)_advanceRefreshSessionToNextInterestedEmitter:(id)arg1;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end

