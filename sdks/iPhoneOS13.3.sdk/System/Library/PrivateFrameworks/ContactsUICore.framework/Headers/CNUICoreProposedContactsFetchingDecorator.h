//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsModelFetching-Protocol.h>

@protocol CNSchedulerProvider, CNUICoreFamilyInfoFetching, CNUICoreFamilyMemberContactsModelFetching;

@interface CNUICoreProposedContactsFetchingDecorator : NSObject <CNUICoreFamilyMemberContactsModelFetching>
{
    id <CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id <CNUICoreFamilyInfoFetching> _familyInfoFetcher;
    id <CNSchedulerProvider> _schedulerProvider;
}

+ (id)modelWithProposedContactsFromFamilyInfo:(id)arg1;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) id <CNUICoreFamilyInfoFetching> familyInfoFetcher; // @synthesize familyInfoFetcher=_familyInfoFetcher;
@property(readonly, nonatomic) id <CNUICoreFamilyMemberContactsModelFetching> modelFetcher; // @synthesize modelFetcher=_modelFetcher;
// - (void).cxx_destruct;
- (id)whitelistedContactsModel;
- (id)allContactsModel;
- (id)initWithModelFetcher:(id)arg1 familyInfoFetcher:(id)arg2 schedulerProvider:(id)arg3;
- (id)initWithModelFetcher:(id)arg1 familyMember:(id)arg2 schedulerProvider:(id)arg3;

@end
