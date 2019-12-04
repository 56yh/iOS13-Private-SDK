//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HMCameraClip;

@interface HUClipSpacerCollectionViewCell : UICollectionViewCell
{
    _Bool _spansMultipleDays;
    HMCameraClip *_clip;
    HMCameraClip *_previousClip;
}

@property(nonatomic) __weak HMCameraClip *previousClip; // @synthesize previousClip=_previousClip;
@property(nonatomic) __weak HMCameraClip *clip; // @synthesize clip=_clip;
@property(nonatomic) _Bool spansMultipleDays; // @synthesize spansMultipleDays=_spansMultipleDays;
- (void)updateWithClip:(id)arg1 previousClip:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

