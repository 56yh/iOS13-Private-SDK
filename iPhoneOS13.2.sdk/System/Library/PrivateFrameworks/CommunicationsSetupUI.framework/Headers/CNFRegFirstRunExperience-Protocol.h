//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class CNFRegController, IMAccount, UIBarButtonItem;
@protocol CNFRegFirstRunDelegate;

@protocol CNFRegFirstRunExperience 
@property(retain, nonatomic) UIBarButtonItem *customRightButton;
@property(retain, nonatomic) UIBarButtonItem *customLeftButton;
@property(readonly, nonatomic) long long currentAppearanceStyle;
@property(nonatomic) id <CNFRegFirstRunDelegate> delegate;
- (id)initWithRegController:(CNFRegController *)arg1 account:(IMAccount *)arg2;
@end

