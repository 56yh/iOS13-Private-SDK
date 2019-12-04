//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CDInteractionAdvising;

@interface _CDInteractionAdvisorSimple : NSObject
{
    id <_CDInteractionAdvising> _interactionAdvisor;
}

+ (id)advisorSettingsForMatchingDisplayName:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingPersonID:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
+ (id)advisorSettingsForMatchingHandles:(id)arg1 mechanism:(long long)arg2 date:(id)arg3 count:(long long)arg4;
@property(retain) id <_CDInteractionAdvising> interactionAdvisor; // @synthesize interactionAdvisor=_interactionAdvisor;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForDisplayName:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForPersonId:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3 date:(id)arg4;
- (id)rankedInteractionsForHandles:(id)arg1 mechanism:(long long)arg2 count:(long long)arg3;
- (id)bestInteractionMatchingDisplayName:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingContactID:(id)arg1 mechanism:(long long)arg2;
- (id)bestInteractionMatchingHandles:(id)arg1 mechanism:(long long)arg2;
- (id)initWithInteractionAdvisor:(id)arg1;
- (id)initWithCoreDuetDatabase;
- (id)initWithCoreDuetDaemon;
- (id)init;

@end

