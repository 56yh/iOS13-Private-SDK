//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIFeedbackVisualizer : NSObject
{
    UIWindow *_visualFeedbackWindow;
    NSMapTable *_engineLayers;
}

+ (id)sharedVisualizer;
@property(retain, nonatomic) NSMapTable *engineLayers; // @synthesize engineLayers=_engineLayers;
@property(retain, nonatomic) UIWindow *visualFeedbackWindow; // @synthesize visualFeedbackWindow=_visualFeedbackWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_showVisualForFeedback:(id)arg1;
- (void)cancelVisualForFeedback:(id)arg1;
- (void)showVisualForFeedback:(id)arg1 withDelay:(double)arg2;
- (void)_updateEngine:(id)arg1;
- (void)addEngine:(id)arg1;
- (id)_colorForFeedback:(id)arg1;
- (id)_colorForEngineState:(long long)arg1;
- (id)_colorForEngine:(id)arg1;
- (id)_monogramForEngine:(id)arg1;
- (id)init;

@end

