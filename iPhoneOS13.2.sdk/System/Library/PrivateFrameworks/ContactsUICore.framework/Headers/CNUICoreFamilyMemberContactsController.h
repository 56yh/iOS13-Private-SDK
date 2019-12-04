//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsDataSource-Protocol.h>

@class CNFuture, FAFamilyMember, NSNumber, NSString;
@protocol CNCancelable, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsUpdating;

@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource>
{
    NSNumber *_countOfFamilyMemberContacts;
    id <CNUICoreFamilyMemberContactsObserver> _observer;
    FAFamilyMember *_familyMember;
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
    id <CNSchedulerProvider> _schedulerProvider;
    CNFuture *_countOfFamilyMemberContactsFuture;
    CNFuture *_updateContactListByAddingContactsFuture;
    CNFuture *_updateContactListByRemovingContactsFuture;
    id <CNCancelable> _contactStoreDidChangeToken;
}

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)propertyKeysContainingSenstiveData;
@property(retain, nonatomic) id <CNCancelable> contactStoreDidChangeToken; // @synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken;
@property(retain, nonatomic) CNFuture *updateContactListByRemovingContactsFuture; // @synthesize updateContactListByRemovingContactsFuture=_updateContactListByRemovingContactsFuture;
@property(retain, nonatomic) CNFuture *updateContactListByAddingContactsFuture; // @synthesize updateContactListByAddingContactsFuture=_updateContactListByAddingContactsFuture;
@property(retain, nonatomic) CNFuture *countOfFamilyMemberContactsFuture; // @synthesize countOfFamilyMemberContactsFuture=_countOfFamilyMemberContactsFuture;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator; // @synthesize familyMemberContactsUpdator=_familyMemberContactsUpdator;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher; // @synthesize modelFetcher=_modelFetcher;
@property(readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property(nonatomic) __weak id <CNUICoreFamilyMemberContactsObserver> observer; // @synthesize observer=_observer;
- (void)updateListByRemovingContacts:(id)arg1;
- (void)updateListByAddingContacts:(id)arg1;
- (id)countOfFamilyMemberContactsFutureFromFetcher;
- (void)cancelCountOfFamilyMemberContactsFetch;
- (void)triggerCountOfFamilyMemberContactsFetch;
@property(retain, nonatomic) NSNumber *countOfFamilyMemberContacts; // @synthesize countOfFamilyMemberContacts=_countOfFamilyMemberContacts;
@property(readonly, nonatomic) long long fetchStatus;
- (void)dealloc;
- (void)setupChangeNotificationResponse;
- (id)initWithFamilyMember:(id)arg1 modelFetcher:(id)arg2 familyMemberContactsUpdator:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

