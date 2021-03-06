//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGReminderSuggestionBase.h>

#import <CoreSuggestionsUI/REMReminderCreationDelegate-Protocol.h>

@class CLLocation, NSAttributedString, NSDateComponents, NSString, NSURL, NSUserActivity;

@interface SGReminderSuggestion : SGReminderSuggestionBase <REMReminderCreationDelegate>
{
}

+ (id)remindersImage;
@property(readonly, nonatomic) long long locationProximity;
@property(readonly, nonatomic) BOOL wantsExtendedDetailOnlyView;
@property(readonly, nonatomic) NSAttributedString *title;
@property(readonly, nonatomic) NSUserActivity *userActivity;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *locationString;
@property(readonly, nonatomic) NSAttributedString *notes;
@property(readonly, nonatomic) NSDateComponents *dueDateComponents;
@property(readonly, nonatomic) CLLocation *location;
- (void)reminderCreationViewController:(id)arg1 didCreateReminder:(BOOL)arg2 error:(id)arg3;
- (id)suggestionCategoryImage;
- (id)suggestionImage;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(BOOL)arg2;
- (id)suggestionPrimaryAction;

@end

