//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageLegacy/MFAccount.h>

@interface DeliveryAccount : MFAccount
{
}

+ (id)newDefaultInstance;
+ (id)carrierDeliveryAccount;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2 lookForExistingAccounts:(BOOL)arg3;
+ (id)accountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)existingAccountWithIdentifier:(id)arg1;
+ (id)accountWithIdentifier:(id)arg1;
+ (id)accountWithUniqueId:(id)arg1;
+ (void)removeDeliveryAccount:(id)arg1;
+ (void)addDeliveryAccount:(id)arg1;
+ (id)deliveryAccounts;
+ (id)existingAccountForUniqueID:(id)arg1;
+ (void)reloadDeliveryAccounts;
+ (void)_postDeliveryAccountsHaveChanged;
+ (id)accountTypeIdentifier;
- (void)_updateAccountDescriptionWithUsername:(id)arg1 hostname:(id)arg2;
- (BOOL)shouldUseSaveSentForAccount:(id)arg1;
- (BOOL)supportsOutboxCopy;
- (BOOL)hasEnoughInformationForEasySetup;
- (BOOL)canBeFallbackAccount;
- (id)displayHostname;
- (BOOL)hasNoReferences;
- (id)mailAccountIfAvailable;
- (void)setMaximumMessageBytes:(NSUInteger)arg1;
- (NSUInteger)maximumMessageBytes;
- (void)_setAccountProperties:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setShouldUseAuthentication:(BOOL)arg1;
- (BOOL)shouldUseAuthentication;
- (id)identifier;
- (id)newDeliveryWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)newDeliveryWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newDeliveryWithMessage:(id)arg1;
- (Class)deliveryClass;

@end

