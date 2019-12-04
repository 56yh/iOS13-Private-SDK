//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class CALayer, ICDocCamImageQuadEditOverlay;

__attribute__((visibility("hidden")))
@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement
{
    CALayer *_knobLayer;
    ICDocCamImageQuadEditOverlay *_overlayView;
}

@property(nonatomic) __weak ICDocCamImageQuadEditOverlay *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) __weak CALayer *knobLayer; // @synthesize knobLayer=_knobLayer;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)accessibilityViewIsModal;
- (_Bool)isAccessibilityElement;
- (id)initWithKnobLayer:(id)arg1 overlayView:(id)arg2;

@end

