//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSIndexSet, NSString;

@protocol TFFeedbackFormPresenterView
- (void)showErrorAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showSubmitButtonForSubmissionPendingState:(_Bool)arg1;
- (void)reloadEntriesAtIndexPaths:(NSArray *)arg1;
- (void)reloadEntryGroupsAtIndices:(NSIndexSet *)arg1;
- (void)prepareForEntryType:(unsigned long long)arg1;
- (void)setNavigationItemTitle:(NSString *)arg1;
@end

