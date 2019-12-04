//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetViewer/ASVGesture.h>

@protocol ASVSingleFingerGestureDelegate, ASVTouch;

@interface ASVSingleFingerGesture : ASVGesture
{
    _Bool _panThresholdPassed;
    // Error parsing type: , name: _initialTouchLocation
    // Error parsing type: , name: _latestTouchLocation
    id <ASVSingleFingerGestureDelegate> _delegate;
    unsigned long long _enabledGestureTypes;
    id <ASVTouch> _touch;
    double _touchStartTime;
}

@property(nonatomic) double touchStartTime; // @synthesize touchStartTime=_touchStartTime;
@property(retain, nonatomic) id <ASVTouch> touch; // @synthesize touch=_touch;
@property(readonly, nonatomic) unsigned long long enabledGestureTypes; // @synthesize enabledGestureTypes=_enabledGestureTypes;
@property(nonatomic) __weak id <ASVSingleFingerGestureDelegate> delegate; // @synthesize delegate=_delegate;
// Error parsing type for property latestTouchLocation:
// Property attributes: T,N,V_latestTouchLocation

// Error parsing type for property initialTouchLocation:
// Property attributes: T,N,V_initialTouchLocation

@property(nonatomic) _Bool panThresholdPassed; // @synthesize panThresholdPassed=_panThresholdPassed;
- (void)finishGesture;
- (_Bool)generatesTransforms;
- (_Bool)generatesTaps;
- (_Bool)gestureTypeIsEnabled:(unsigned long long)arg1;
- (void)updateGesture;
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;

@end

