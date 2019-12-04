//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UISegmentedControl, UISwitch;
@protocol _PXFeedbackTapToRadarViewControllerDelegate;

@interface _PXFeedbackTapToRadarViewController : UIViewController
{
    UISwitch *_screenshotSwitch;
    UISwitch *_diagnoseSwitch;
    id <_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
    UISegmentedControl *_segmentedControl;
}

@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) id <_PXFeedbackTapToRadarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *diagnoseSwitch; // @synthesize diagnoseSwitch=_diagnoseSwitch;
@property(retain, nonatomic) UISwitch *screenshotSwitch; // @synthesize screenshotSwitch=_screenshotSwitch;
- (void)_didSelectFileRadarButton:(id)arg1;
- (void)_didSelectCancelButton:(id)arg1;
- (void)viewDidLoad;

@end

