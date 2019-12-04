//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, UIImageView;

__attribute__((visibility("hidden")))
@interface UIMovieScrubberEditingView : UIView
{
    UIImageView *_leftImageView;
    UIImageView *_middleImageView;
    UIImageView *_rightImageView;
    NSArray *_activeImages;
    NSArray *_activeNoEditImages;
    NSArray *_inactiveImages;
    _Bool _enabled;
    _Bool _editing;
    double _edgeInset;
}

@property(nonatomic) double edgeInset; // @synthesize edgeInset=_edgeInset;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (double)_bounceValueForFraction:(double)arg1;
- (void)bounce;
- (void)_updateHandleImages;
- (id)_handleImages;
- (int)handleForPoint:(struct CGPoint)arg1 hitOffset:(double *)arg2;
- (_Bool)pointInsideRightHandle:(struct CGPoint)arg1;
- (struct CGRect)_rightHandleRect;
- (_Bool)pointInsideLeftHandle:(struct CGPoint)arg1;
- (struct CGRect)_leftHandleRect;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

