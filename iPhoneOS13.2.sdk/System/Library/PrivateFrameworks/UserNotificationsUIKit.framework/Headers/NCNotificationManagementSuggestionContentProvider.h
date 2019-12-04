//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationManagementContentProvider.h>

#import <UserNotificationsUIKit/NCNotificationManagementSuggestionContentProviding-Protocol.h>

@class NSString;
@protocol NCNotificationManagementSuggestionDelegate;

@interface NCNotificationManagementSuggestionContentProvider : NCNotificationManagementContentProvider <NCNotificationManagementSuggestionContentProviding>
{
    _Bool _auxiliaryOptionsVisible;
    NSString *_optionsSummaryText;
    unsigned long long _numberOfOptionButtons;
    id <NCNotificationManagementSuggestionDelegate> _suggestionDelegate;
}

@property(nonatomic) __weak id <NCNotificationManagementSuggestionDelegate> suggestionDelegate; // @synthesize suggestionDelegate=_suggestionDelegate;
@property(nonatomic) _Bool auxiliaryOptionsVisible; // @synthesize auxiliaryOptionsVisible=_auxiliaryOptionsVisible;
@property(nonatomic) unsigned long long numberOfOptionButtons; // @synthesize numberOfOptionButtons=_numberOfOptionButtons;
@property(copy, nonatomic) NSString *optionsSummaryText; // @synthesize optionsSummaryText=_optionsSummaryText;
- (void)configureOptionButtons:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1 bundleDisplayName:(id)arg2 managementDelegate:(id)arg3 suggestionDelegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, copy, nonatomic) NSString *optionsSummaryTitle;
@property(readonly) Class superclass;

@end

