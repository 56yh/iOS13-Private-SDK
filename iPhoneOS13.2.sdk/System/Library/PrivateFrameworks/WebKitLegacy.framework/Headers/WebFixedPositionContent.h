//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebFixedPositionContent : NSObject
{
    struct WebFixedPositionContentData *_private;
}

- (_Bool)hasFixedOrStickyPositionLayers;
- (void)setViewportConstrainedLayers:(HashMap_8e3a669a *)arg1 stickyContainerMap:(const HashMap_9d18c561 *)arg2;
- (void)didFinishScrollingOrZooming;
- (void)overflowScrollPositionForLayer:(id)arg1 changedTo:(struct CGPoint)arg2;
- (void)scrollOrZoomChanged:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

