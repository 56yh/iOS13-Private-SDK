//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GEOServiceRequester : NSObject
{
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s _pendingRequestsLock;
}

- (id)_validateResponse:(id)arg1;
- (void)_cancelRequest:(id)arg1;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 completionHandler:(id /* block */)arg6;
- (id)init;

@end

