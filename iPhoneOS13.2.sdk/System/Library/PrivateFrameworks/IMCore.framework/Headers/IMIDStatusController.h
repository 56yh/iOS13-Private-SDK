//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSRecursiveLock;

@interface IMIDStatusController : NSObject
{
    NSRecursiveLock *_servicesLock;
    NSMutableSet *_servicesRegistered;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *_servicesRegistered; // @synthesize _servicesRegistered;
@property(retain, nonatomic) NSRecursiveLock *_servicesLock; // @synthesize _servicesLock;
- (long long)statusForID:(id)arg1 onService:(id)arg2;
- (void)requestStatusForID:(id)arg1 onAccount:(id)arg2;
- (void)requestStatusForID:(id)arg1 onService:(id)arg2;
- (void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3;
- (long long)_idStatusForID:(id)arg1 onAccount:(id)arg2;
- (long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2;
- (long long)_idStatusForID:(id)arg1 onService:(id)arg2;
- (long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(_Bool)arg3;
- (void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3;
- (id)init;

@end

