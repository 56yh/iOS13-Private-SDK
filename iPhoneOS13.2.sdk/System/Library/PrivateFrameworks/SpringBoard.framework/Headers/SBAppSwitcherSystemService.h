//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemServiceServerAppSwitcherDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString, SBCommandTabController, SBRecentAppLayouts;

@interface SBAppSwitcherSystemService : NSObject <SBSystemServiceServerAppSwitcherDelegate>
{
    FBServiceClientAuthenticator *_requestAppearanceForHiddenAppAuthenticator;
    SBRecentAppLayouts *_recentAppLayouts;
    SBCommandTabController *_commandTabController;
}

- (void)systemServiceServer:(id)arg1 requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg2 assertionPort:(id)arg3 forClient:(id)arg4 withCompletion:(id /* block */)arg5;
- (void)requestAppearanceForHiddenAppWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 forClient:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)initWithRecentAppLayoutsController:(id)arg1 commandTabController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

