//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIUserActionListDataSource-Protocol.h>

@class CNContact, CNUIUserActionDisambiguationModeler, CNUIUserActionListModelCache, NSString;
@protocol CNSchedulerProvider;

@interface CNUIUserActionListDataSource : NSObject <CNUIUserActionListDataSource>
{
    _Bool _tracksChanges;
    id <CNSchedulerProvider> _schedulerProvider;
    CNContact *_contact;
    CNUIUserActionListModelCache *_models;
    CNUIUserActionDisambiguationModeler *_modeler;
}

+ (id)displayNameForDisambiguationForActionType:(id)arg1;
+ (id)displayNameForButtonForActionType:(id)arg1;
+ (id)allSupportedActionTypesWithCapabilities:(id)arg1;
+ (id)allSupportedActionTypes;
+ (id)allActionTypes;
+ (id)descriptorForRequiredKeys;
@property(retain, nonatomic) CNUIUserActionDisambiguationModeler *modeler; // @synthesize modeler=_modeler;
@property(retain, nonatomic) CNUIUserActionListModelCache *models; // @synthesize models=_models;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(nonatomic) _Bool tracksChanges; // @synthesize tracksChanges=_tracksChanges;
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
- (id)thirdPartyActionsForCurrentContactAndPropertyKey:(id)arg1 identifier:(id)arg2;
- (id)thirdPartyActionsForContactProperty:(id)arg1;
- (id)thirdPartyTargetsForActionTypes:(id)arg1;
- (id)makeModelObservableForActionType:(id)arg1;
- (id)modelsForActionType:(id)arg1;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2;
- (id)consumer:(id)arg1 actionModelsForActionType:(id)arg2 handler:(id /* block */)arg3;
- (_Bool)shouldUseLabelForButtonWithDefaultAction:(id)arg1;
- (id)consumer:(id)arg1 localizedDisplayNameForButtonWithDefaultAction:(id)arg2 actionType:(id)arg3;
- (id)consumer:(id)arg1 localizedButtonDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 localizedDisplayNameForActionType:(id)arg2;
- (id)consumer:(id)arg1 imageForActionType:(id)arg2;
- (id)actionTypesForConsumer:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)dealloc;
- (id)initWithDiscoveringEnvironment:(id)arg1;
- (id)initWithSchedulerProvider:(id)arg1 idsAvailabilityProvider:(id)arg2;
- (id)initWithSchedulerProvider:(id)arg1;
- (id)initWithContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

