//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/EDAccount-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol ECMailbox, EDDeliveryAccount;

@protocol EDReceivingAccount <EDAccount>
@property(readonly, nonatomic) _Bool shouldArchiveByDefault;
@property(readonly, nonatomic) _Bool isLocalAccount;
@property(readonly, copy, nonatomic) NSString *smtpIdentifier;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) _Bool sourceIsManaged;
@property(readonly, nonatomic) _Bool isManaged;
- (_Bool)containsMailboxWithURL:(NSURL *)arg1;
- (id <ECMailbox>)mailboxForType:(long long)arg1;
- (void)setDeliveryAccount:(id <EDDeliveryAccount>)arg1;
- (id <EDDeliveryAccount>)deliveryAccount;
@end

