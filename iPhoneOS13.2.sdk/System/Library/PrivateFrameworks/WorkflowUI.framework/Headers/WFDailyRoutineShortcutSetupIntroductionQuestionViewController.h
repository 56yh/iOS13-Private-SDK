//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <WorkflowUI/WFDailyRoutineShortcutSetupQuestionChildViewController-Protocol.h>

@class NSString, WFDailyRoutineShortcutSetupIntroductionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController>
{
    id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> _delegate;
    WFDailyRoutineShortcutSetupIntroductionQuestion *_question;
}

@property(readonly, nonatomic) WFDailyRoutineShortcutSetupIntroductionQuestion *question; // @synthesize question=_question;
@property(nonatomic) __weak id <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectContinueButton;
@property(readonly, nonatomic) _Bool parentShouldShowSkipButton;
- (id)initWithQuestion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

