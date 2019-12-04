//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/ECMailAccount-Protocol.h>

@class ACAccount, NSString;

@protocol EDAccount <ECMailAccount>
@property(readonly, nonatomic) _Bool primaryiCloudAccount;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly, copy, nonatomic) ACAccount *systemAccount;
@property(readonly, copy, nonatomic) NSString *identifier;
- (void)savePersistentAccount;
- (_Bool)hasPasswordCredential;
- (_Bool)canAuthenticateWithCurrentCredentials;
- (NSString *)username;
- (NSString *)hostname;
- (NSString *)displayName;
@end

