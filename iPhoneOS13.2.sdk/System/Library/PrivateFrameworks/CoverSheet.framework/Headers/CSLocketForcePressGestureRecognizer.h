//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import <CoverSheet/UIInteractionProgressObserver-Protocol.h>

@class NSString, UIInteractionProgress;

@interface CSLocketForcePressGestureRecognizer : UILongPressGestureRecognizer <UIInteractionProgressObserver>
{
    UIInteractionProgress *_interactionProgress;
    _Bool _forceTouchCompleted;
}

@property(nonatomic) _Bool forceTouchCompleted; // @synthesize forceTouchCompleted=_forceTouchCompleted;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;
@property(readonly, nonatomic) double percentComplete;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

