//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DataAccess/DAAccount.h>

@interface ESAccount : DAAccount
{
}

+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)oneshotListOfAccountIDs;
+ (id)_leafExchangeAccountTypes;
+ (id)esAccountSubclassWithBackingAccountInfo:(id)arg1;
- (void)retrieveOofSettingsForConsumer:(id)arg1;
- (void)updateOofSettingsWithParams:(id)arg1 consumer:(id)arg2;

@end

