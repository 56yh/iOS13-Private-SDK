//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class WFGlyphView;

@interface WFGlyphPickerCell : UICollectionViewCell
{
    WFGlyphView *_glyphView;
}

@property(nonatomic) __weak WFGlyphView *glyphView; // @synthesize glyphView=_glyphView;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) unsigned short glyphCharacter;
- (id)initWithFrame:(struct CGRect)arg1;

@end

