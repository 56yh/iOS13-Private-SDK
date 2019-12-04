//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFModuleSummaryEditor.h>

#import <WorkflowUI/HUServicePickerViewControllerDelegate-Protocol.h>
#import <WorkflowUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class HMHome, NSString, UIViewController;

@interface WFHomeServicePickerParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIViewController *_presentedViewController;
    HMHome *_home;
}

@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)servicePickerDidCancel:(id)arg1;
- (void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2;
- (void)cancelEditingWithCompletionHandler:(id /* block */)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

