//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIInputView.h>

#import <WorkflowUI/UINavigationControllerDelegate-Protocol.h>

@class NSString, UINavigationController, WFVariableConfigurationViewController;

@interface WFVariableConfigurationView : UIInputView <UINavigationControllerDelegate>
{
    WFVariableConfigurationViewController *_viewController;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) WFVariableConfigurationViewController *viewController; // @synthesize viewController=_viewController;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (double)preferredHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithVariable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

