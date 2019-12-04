//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSString, UIButton;
@protocol HUResizableCellDelegate;

@interface HUFootnoteButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    HFItem *_item;
    UIButton *_titleButton;
}

@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)_updateTextColor;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didMoveToSuperview;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

