//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, WBSSiteMetadataManager;

@interface WBSFaviconRequestsController : NSObject
{
    NSMapTable *_tokenToRequestToken;
    WBSSiteMetadataManager *_manager;
    long long _priority;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) WBSSiteMetadataManager *manager; // @synthesize manager=_manager;
- (void)_issueRequest:(id)arg1 isOneTime:(_Bool)arg2 withToken:(id)arg3 completion:(id /* block */)arg4;
- (void)cancelAllRegistrations;
- (void)cancelAllRegistrationsWithCompletionHandler:(id /* block */)arg1;
- (void)registerOneTimeRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(id /* block */)arg6;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(_Bool)arg3 iconSize:(struct CGSize)arg4 isURLTypedByUser:(_Bool)arg5 completion:(id /* block */)arg6;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)initWithSiteMetadataManager:(id)arg1;

@end

