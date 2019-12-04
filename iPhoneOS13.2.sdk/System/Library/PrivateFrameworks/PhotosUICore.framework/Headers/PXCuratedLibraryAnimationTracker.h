//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface PXCuratedLibraryAnimationTracker : NSObject
{
    NSMutableSet *_inFlightAnimations;
}

+ (void)_scrollAnimationOccurredInZoomLevel:(long long)arg1 isBegin:(_Bool)arg2;
+ (void)scrollAnimationDidEndInZoomLevel:(long long)arg1;
+ (void)scrollAnimationDidBeginInZoomLevel:(long long)arg1;
+ (id)sharedTracker;
@property(readonly, nonatomic) NSMutableSet *inFlightAnimations; // @synthesize inFlightAnimations=_inFlightAnimations;
- (void)zoomLevelTransitionsDidEndEarly;
- (void)_zoomLevelTransitionOccurred:(id)arg1 isBegin:(_Bool)arg2;
- (void)zoomLevelTransitionDidEnd:(id)arg1;
- (void)zoomLevelTransitionDidBegin:(id)arg1;
- (id)init;

@end

