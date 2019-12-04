//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreContactManagementConsentCheck-Protocol.h>

@class NSString, STManagementState;
@protocol CNSchedulerProvider;

@interface CNUICoreContactManagementConsentInspector : NSObject <CNUICoreContactManagementConsentCheck>
{
    STManagementState *_managementState;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (unsigned long long)contactManagementConsentStateFromSTContactManagementState:(long long)arg1;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) STManagementState *managementState; // @synthesize managementState=_managementState;
- (id)contactManagementConsentStateFutureForDSID:(id)arg1;
- (unsigned long long)contactManagementConsentStateOfDelegateWithInfo:(id)arg1;
- (id)initWithManagementState:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

