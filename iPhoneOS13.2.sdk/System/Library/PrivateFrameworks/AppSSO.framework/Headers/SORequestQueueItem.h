//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOAuthorizationRequestParameters;
@protocol SOServiceProtocol;

@interface SORequestQueueItem : NSObject
{
    id <SOServiceProtocol> _service;
    SOAuthorizationRequestParameters *_requestParameters;
    id /* block */ _completionBlock;
}

@property(readonly, copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) SOAuthorizationRequestParameters *requestParameters; // @synthesize requestParameters=_requestParameters;
@property(readonly, nonatomic) id <SOServiceProtocol> service; // @synthesize service=_service;
- (id)description;
- (id)initWithService:(id)arg1 requestParameters:(id)arg2 completionBlock:(id /* block */)arg3;

@end

