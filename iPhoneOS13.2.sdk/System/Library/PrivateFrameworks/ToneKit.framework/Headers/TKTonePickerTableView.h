//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@protocol TKTonePickerTableViewLayoutMarginsObserver, TKTonePickerTableViewSeparatorObserver;

@interface TKTonePickerTableView : UITableView
{
    id <TKTonePickerTableViewLayoutMarginsObserver> _layoutMarginsObserver;
    id <TKTonePickerTableViewSeparatorObserver> _separatorObserver;
}

@property(nonatomic) __weak id <TKTonePickerTableViewSeparatorObserver> separatorObserver; // @synthesize separatorObserver=_separatorObserver;
@property(nonatomic) __weak id <TKTonePickerTableViewLayoutMarginsObserver> layoutMarginsObserver; // @synthesize layoutMarginsObserver=_layoutMarginsObserver;
- (void)layoutSubviews;
- (void)setSeparatorColor:(id)arg1;
- (void)_handleSeparatorColorDidChange;
- (void)layoutMarginsDidChange;

@end

