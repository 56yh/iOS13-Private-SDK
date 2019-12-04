//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, SBKRequest;

__attribute__((visibility("hidden")))
@interface SBKTransaction : NSObject
{
    NSString *_domain;
    NSURL *_requestURL;
    SBKRequest *_activeRequest;
    NSMutableDictionary *_userInfo;
}

@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) SBKRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
@property(retain) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
- (id)newRequest;
- (id)clampsKey;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)transactionContextForKey:(id)arg1;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;

@end

