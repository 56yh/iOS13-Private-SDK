//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CLLocation, NSAttributedString, NSDateComponents, NSError, NSString, NSURL, NSUserActivity, REMReminderCreationViewController;

@protocol REMReminderCreationDelegate 
@property(readonly, nonatomic) NSUserActivity *userActivity;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *locationString;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSDateComponents *dueDateComponents;
@property(readonly, nonatomic) NSAttributedString *notes;
@property(readonly, nonatomic) NSAttributedString *title;
- (void)reminderCreationViewController:(REMReminderCreationViewController *)arg1 didCreateReminder:(_Bool)arg2 error:(NSError *)arg3;

@optional
@property(readonly, nonatomic) long long locationProximity;
@property(readonly, nonatomic) _Bool titleIsGeneratedSuggestion;
@property(readonly, nonatomic) _Bool wantsExtendedDetailOnlyView;
@end

