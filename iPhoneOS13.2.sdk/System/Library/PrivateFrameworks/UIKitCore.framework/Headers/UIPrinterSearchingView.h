//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class _UIPrintMessageAndSpinnerView;

__attribute__((visibility("hidden")))
@interface UIPrinterSearchingView : UIView
{
    _Bool _constraintsSet;
    _UIPrintMessageAndSpinnerView *_messageAndSpinner;
}

@property(nonatomic) __weak _UIPrintMessageAndSpinnerView *messageAndSpinner; // @synthesize messageAndSpinner=_messageAndSpinner;
- (void)updateFont;
- (void)setSearching:(_Bool)arg1;
- (void)searchTimeout;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

