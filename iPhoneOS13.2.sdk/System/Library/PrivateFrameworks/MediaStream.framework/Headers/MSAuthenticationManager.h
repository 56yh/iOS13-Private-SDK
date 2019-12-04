//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, MSAlertManager;

@interface MSAuthenticationManager : NSObject
{
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
    _Bool _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

+ (id)sharedManager;
@property(nonatomic) int keybagChangeNotifyToken; // @synthesize keybagChangeNotifyToken=_keybagChangeNotifyToken;
@property(nonatomic) _Bool isListeningToKeybagChanges; // @synthesize isListeningToKeybagChanges=_isListeningToKeybagChanges;
@property(readonly, nonatomic, getter=isWaitingForAuth) _Bool waitingForAuth;
- (void)rearmAuthenticationAlert;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)_renewCredentialsForAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAlertManager:(id)arg1;

@end

