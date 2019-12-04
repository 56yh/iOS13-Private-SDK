//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;
@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell
{
    UIView *_inputView;
    id <FIUIHealthSettingsForceUpdatable> _forceUpdatable;
}

@property(nonatomic) __weak id <FIUIHealthSettingsForceUpdatable> forceUpdatable; // @synthesize forceUpdatable=_forceUpdatable;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

