//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;

@interface SiriUIActivityViewController : UIActivityViewController
{
    id <SiriUIActivityViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(id /* block */)arg2;

@end

