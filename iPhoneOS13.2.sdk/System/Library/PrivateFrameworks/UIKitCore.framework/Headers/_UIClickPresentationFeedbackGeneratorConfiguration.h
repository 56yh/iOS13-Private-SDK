//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIFeedbackGeneratorUserInteractionDrivenConfiguration.h>

@class _UIFeedback;
@protocol _UIFeedbackDiscretePlayable;

__attribute__((visibility("hidden")))
@interface _UIClickPresentationFeedbackGeneratorConfiguration : _UIFeedbackGeneratorUserInteractionDrivenConfiguration
{
}

+ (id)defaultConfiguration;
- (id)feedbackKeyPaths;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *draggedPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *poppedPattern;
@property(readonly, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *previewedPattern;
- (long long)requiredSupportLevel;

@end
