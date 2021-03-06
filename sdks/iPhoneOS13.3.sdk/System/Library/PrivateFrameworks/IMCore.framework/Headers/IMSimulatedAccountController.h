//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController
{
    NSMutableDictionary *_simulatedAccountsPerService;
}

// - (void).cxx_destruct;
- (id)init;
- (id)activeSMSAccount;
- (id)activeIMessageAccount;
- (id)activeAccounts;
- (void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2;

@end

