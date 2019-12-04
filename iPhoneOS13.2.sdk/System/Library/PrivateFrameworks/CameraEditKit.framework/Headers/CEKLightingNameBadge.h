//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraEditKit/CEKBadgeTextView.h>

@class UIView;

@interface CEKLightingNameBadge : CEKBadgeTextView
{
    _Bool _highlighted;
    long long _lightingType;
    UIView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) UIView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) long long lightingType; // @synthesize lightingType=_lightingType;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)_updateText;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

