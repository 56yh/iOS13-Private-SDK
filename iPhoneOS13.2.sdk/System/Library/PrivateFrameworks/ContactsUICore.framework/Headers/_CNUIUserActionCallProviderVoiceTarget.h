//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUICore/CNUIUserActionTarget.h>

@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget
{
}

- (id)actionsForInstantMessageAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForSocialProfiles:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 group:(long long)arg3 options:(unsigned long long)arg4 discoveringEnvironment:(id)arg5;
- (id)actionsForPhoneNumbers:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (id)actionsForEmailAddresses:(id)arg1 contact:(id)arg2 discoveringEnvironment:(id)arg3;
- (_Bool)isCallProviderManagedUsingDiscoveringEnvironment:(id)arg1;
- (id)externalAccountIdentifierForContact:(id)arg1 contactStore:(id)arg2;
- (id)managedBundleIdentifierForContact:(id)arg1 discoveringEnvironment:(id)arg2;
- (id)actionsForContact:(id)arg1 discoveringEnvironment:(id)arg2;

@end

