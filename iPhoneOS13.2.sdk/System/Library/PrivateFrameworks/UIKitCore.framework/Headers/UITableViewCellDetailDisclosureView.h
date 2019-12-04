//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class UIButton, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellDetailDisclosureView : UIControl
{
    UIButton *_accessoryButton;
    UIImageView *_disclosureView;
    UITableViewCell *_cell;
}

@property(readonly, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(_Bool)arg5;

@end

