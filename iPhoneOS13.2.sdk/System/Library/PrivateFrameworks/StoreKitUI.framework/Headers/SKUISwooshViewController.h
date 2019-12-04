//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIColorScheme;
@protocol SKUISwooshViewControllerDelegate;

@interface SKUISwooshViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id <SKUISwooshViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISwooshViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)unhideImages;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)deselectAllItems;

@end

