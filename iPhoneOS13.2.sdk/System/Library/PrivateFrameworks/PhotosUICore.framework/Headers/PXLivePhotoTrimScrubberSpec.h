//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface PXLivePhotoTrimScrubberSpec : NSObject
{
    _Bool _fallbackToKeyTimeTracking;
    _Bool _fallbackToPlayheadTracking;
    _Bool _useMiniScrubberHeight;
    double _scrubberHeight;
    double _handleTouchDistance;
    double _handleWidth;
    double _handleHeight;
    double _handleAnchorX;
    double _loupeOuterCornerRadius;
    double _loupeInnerCornerRadius;
    double _filmstripCornerRadius;
    UIColor *_disabledOverlayColor;
    struct UIEdgeInsets _filmstripViewInsets;
}

@property(nonatomic) _Bool useMiniScrubberHeight; // @synthesize useMiniScrubberHeight=_useMiniScrubberHeight;
@property(nonatomic) _Bool fallbackToPlayheadTracking; // @synthesize fallbackToPlayheadTracking=_fallbackToPlayheadTracking;
@property(nonatomic) _Bool fallbackToKeyTimeTracking; // @synthesize fallbackToKeyTimeTracking=_fallbackToKeyTimeTracking;
@property(retain, nonatomic) UIColor *disabledOverlayColor; // @synthesize disabledOverlayColor=_disabledOverlayColor;
@property(nonatomic) double filmstripCornerRadius; // @synthesize filmstripCornerRadius=_filmstripCornerRadius;
@property(nonatomic) double loupeInnerCornerRadius; // @synthesize loupeInnerCornerRadius=_loupeInnerCornerRadius;
@property(nonatomic) double loupeOuterCornerRadius; // @synthesize loupeOuterCornerRadius=_loupeOuterCornerRadius;
@property(nonatomic) struct UIEdgeInsets filmstripViewInsets; // @synthesize filmstripViewInsets=_filmstripViewInsets;
@property(nonatomic) double handleAnchorX; // @synthesize handleAnchorX=_handleAnchorX;
@property(nonatomic) double handleHeight; // @synthesize handleHeight=_handleHeight;
@property(nonatomic) double handleWidth; // @synthesize handleWidth=_handleWidth;
@property(nonatomic) double handleTouchDistance; // @synthesize handleTouchDistance=_handleTouchDistance;
@property(nonatomic) double scrubberHeight; // @synthesize scrubberHeight=_scrubberHeight;
- (void)_updateScrubberHeight;
- (id)init;

@end

