//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

// - (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithPopoverController:(id)arg1;

@end

