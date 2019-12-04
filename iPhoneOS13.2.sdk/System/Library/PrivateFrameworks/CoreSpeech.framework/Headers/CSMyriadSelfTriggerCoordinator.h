//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSSelfTriggerDetectorDelegate-Protocol.h>

@class NSString;
@protocol CSMyriadSelfTriggerCoordinatorDelegate;

@interface CSMyriadSelfTriggerCoordinator : NSObject <CSSelfTriggerDetectorDelegate>
{
    id <CSMyriadSelfTriggerCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <CSMyriadSelfTriggerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

