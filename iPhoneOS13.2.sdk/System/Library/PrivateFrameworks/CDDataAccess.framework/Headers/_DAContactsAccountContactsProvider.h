//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CDDataAccess/DAContactsAccountProvider.h>

@class CNContactStore;

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider
{
    CNContactStore *_contactStore;
}

@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)accountForContainerWithIdentifier:(id)arg1;
- (id)allAccounts;
- (id)accountWithExternalIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;
- (id)initWithContactStore:(id)arg1;

@end
