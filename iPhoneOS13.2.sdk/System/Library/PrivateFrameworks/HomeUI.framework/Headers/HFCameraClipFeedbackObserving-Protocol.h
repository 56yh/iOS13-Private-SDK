//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HFCameraClipFeedbackManager, HMCameraClip, NSArray;

@protocol HFCameraClipFeedbackObserving
- (void)manager:(HFCameraClipFeedbackManager *)arg1 didSubmitCameraClips:(NSArray *)arg2;
- (void)manager:(HFCameraClipFeedbackManager *)arg1 didSubmitCameraClip:(HMCameraClip *)arg2;
@end
