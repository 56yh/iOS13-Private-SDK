//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIScreen, UIView, UIWindow;

@interface SBScreenFlash : NSObject
{
    NSMutableArray *_flashCompletionBlocks;
    UIScreen *_screen;
    UIWindow *_flashWindow;
    UIView *_flashView;
    _Bool _windowVisible;
}

+ (id)mainScreenFlasher;
- (void)_orderWindowFrontAndThenOut:(id)arg1 withColor:(id)arg2;
- (void)_orderWindowOut:(id)arg1;
- (void)_tearDown;
- (void)_createUIWithColor:(id)arg1;
- (void)flashColor:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)flashWhiteWithCompletion:(id /* block */)arg1;
- (id)initWithScreen:(id)arg1;

@end

