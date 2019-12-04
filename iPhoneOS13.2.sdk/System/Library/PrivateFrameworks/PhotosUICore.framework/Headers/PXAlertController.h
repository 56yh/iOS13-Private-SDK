//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIActivityIndicatorView, UIProgressView, UIView, _PXAlertContentViewController;

@interface PXAlertController : UIAlertController
{
    _PXAlertContentViewController *_contentViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    UIProgressView *_progressView;
    UIView *_contentView;
}

+ (id)progressAlertControllerWithMessage:(id)arg1;
+ (id)activityAlertControllerWithTitle:(id)arg1 cancelHandler:(id /* block */)arg2;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
