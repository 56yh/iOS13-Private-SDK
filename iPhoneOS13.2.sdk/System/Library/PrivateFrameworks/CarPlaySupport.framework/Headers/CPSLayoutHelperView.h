//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol CPSLayoutHelperViewDelegate;

@interface CPSLayoutHelperView : UIView
{
    id <CPSLayoutHelperViewDelegate> _layoutDelegate;
}

@property(nonatomic) __weak id <CPSLayoutHelperViewDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)layoutSubviews;
- (id)init;

@end

