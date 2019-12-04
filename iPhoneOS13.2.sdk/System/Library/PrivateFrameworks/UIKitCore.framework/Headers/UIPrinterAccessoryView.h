//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIButton;
@protocol UIPrinterAccessoryViewDelegate;

__attribute__((visibility("hidden")))
@interface UIPrinterAccessoryView : UIView
{
    int _printerState;
    UIButton *_infoButton;
    UIView *_statusView;
    id <UIPrinterAccessoryViewDelegate> _delegate;
}

@property(nonatomic) int printerState; // @synthesize printerState=_printerState;
@property(nonatomic) __weak id <UIPrinterAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)infoButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

