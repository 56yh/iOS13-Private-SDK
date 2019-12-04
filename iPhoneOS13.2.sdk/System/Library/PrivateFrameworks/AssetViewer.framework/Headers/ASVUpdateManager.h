//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol ASVAROnboardingUIUpdateManagerDelegate;

@interface ASVUpdateManager : NSObject
{
    CADisplayLink *_displayLink;
    double _lastUpdateTime;
    id <ASVAROnboardingUIUpdateManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <ASVAROnboardingUIUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)drawWithTimeDelta:(double)arg1;
- (void)update;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init:(id)arg1 metalLayer:(id)arg2;

@end

