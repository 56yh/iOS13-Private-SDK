//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITapGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISingleFingerTapExtensionGesture : UITapGestureRecognizer
{
    NSMutableSet *_trackedEvents;
}

- (long long)_modifierFlags;
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_gestureCanBeginWithEvent:(id)arg1;

@end

