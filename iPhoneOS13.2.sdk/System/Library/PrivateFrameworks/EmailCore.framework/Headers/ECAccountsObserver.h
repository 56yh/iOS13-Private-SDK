//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailCore/EFLoggable-Protocol.h>

@class ACAccountStore, NSString;

@interface ECAccountsObserver : NSObject <EFLoggable>
{
    ACAccountStore *_accountStore;
}

+ (id)log;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(_Bool)arg2;
- (void)handleCredentialChangeForAccountIdentifier:(id)arg1;
- (void)handleAccountStoreChangeForAccountIdentifier:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_credentialsDidChange:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (id)initWithAccountStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

