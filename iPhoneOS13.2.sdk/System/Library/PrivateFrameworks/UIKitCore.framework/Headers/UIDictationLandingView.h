//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/_UIBasicAnimationFactory-Protocol.h>

@class CADisplayLink, NSOperation, NSString, UITextRange;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView <_UIBasicAnimationFactory>
{
    UITextRange *_range;
    id _placeholder;
    _Bool _didHaveText;
    _Bool _willInsertResult;
    double _angle;
    double _diameter;
    CADisplayLink *_displayLink;
    double _startTime;
    double _shrinkStartTime;
    _Bool _shrinking;
    NSOperation *_afterShrinkCompletionInvocation;
}

+ (long long)fallbackPlaceholderLength;
+ (id)activeInstance;
+ (id)sharedInstance;
+ (double)widthForLineHeight:(double)arg1;
+ (double)diameterForLineHeight:(double)arg1;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (double)fadeOutDuration;
- (void)stopLandingForError;
- (void)errorShakeDidFinish;
- (_Bool)hasActivePlaceholder;
- (void)stopLanding;
- (void)startLandingIfNecessary;
- (void)startDisplayLinkIfNecessary;
- (void)showCursor;
- (void)hideCursor;
- (_Bool)delegateWasEmpty;
- (void)updatePosition;
- (void)drawRect:(struct CGRect)arg1;
- (void)advanceLanding:(id)arg1;
- (void)shrinkWithCompletion:(id)arg1;
- (void)rotateBy:(double)arg1;
- (void)clearRotation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

