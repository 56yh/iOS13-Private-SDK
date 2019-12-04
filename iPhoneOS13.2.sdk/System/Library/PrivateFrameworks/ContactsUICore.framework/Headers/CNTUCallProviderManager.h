//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNTUCallProviderManager-Protocol.h>

@class NSString, TUCallProviderManager;

@interface CNTUCallProviderManager : NSObject <CNTUCallProviderManager>
{
    TUCallProviderManager *_callProviderManager;
}

@property(copy, nonatomic) TUCallProviderManager *callProviderManager; // @synthesize callProviderManager=_callProviderManager;
- (id)thirdPartyCallProviderWithBundleIdentifier:(id)arg1;
- (id)thirdPartyCallProvidersForActionType:(id)arg1;
- (id)observableForCallProvidersChangedWithSchedulerProvider:(id)arg1;
- (id)providerManagerQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

