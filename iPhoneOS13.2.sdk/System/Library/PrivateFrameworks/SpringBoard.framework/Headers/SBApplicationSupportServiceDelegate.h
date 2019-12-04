//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/UISApplicationSupportServiceDelegate-Protocol.h>

@class NSString, UISApplicationSupportService;

@interface SBApplicationSupportServiceDelegate : NSObject <UISApplicationSupportServiceDelegate>
{
    UISApplicationSupportService *_service;
}

- (void)destroyScenesWithPersistentIdentifiers:(id)arg1 animationType:(unsigned long long)arg2 destroySessions:(_Bool)arg3 forClient:(id)arg4 completion:(id /* block */)arg5;
- (void)requestPasscodeUnlockUIForClient:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)service:(id)arg1 initializeClient:(id)arg2;
- (_Bool)service:(id)arg1 overrideClientInitialization:(id)arg2;
- (void)_rebuildDefaultContext;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

