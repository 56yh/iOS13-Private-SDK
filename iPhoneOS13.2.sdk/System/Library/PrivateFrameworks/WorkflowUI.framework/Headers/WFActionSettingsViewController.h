//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, WFAction;
@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController
{
    id <WFActionSettingsViewControllerDelegate> _delegate;
    WFAction *_action;
    NSDictionary *_definition;
}

@property(readonly, nonatomic) NSDictionary *definition; // @synthesize definition=_definition;
@property(readonly, nonatomic) WFAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <WFActionSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)donePressed:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)initWithAction:(id)arg1 definition:(id)arg2;

@end

