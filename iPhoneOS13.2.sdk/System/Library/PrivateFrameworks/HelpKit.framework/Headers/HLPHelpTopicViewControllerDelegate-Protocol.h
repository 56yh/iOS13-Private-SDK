//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HLPHelpTopicItem, HLPHelpTopicViewController, NSError;

@protocol HLPHelpTopicViewControllerDelegate 
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 failToLoadWithError:(NSError *)arg2;
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 topicLoaded:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerDoneButtonTapped:(HLPHelpTopicViewController *)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(HLPHelpTopicViewController *)arg1;

@optional
- (void)helpTopicViewController:(HLPHelpTopicViewController *)arg1 selectedHelpTopicItem:(HLPHelpTopicItem *)arg2;
- (void)helpTopicViewControllerTableOfContentButtonTapped:(HLPHelpTopicViewController *)arg1;
@end

