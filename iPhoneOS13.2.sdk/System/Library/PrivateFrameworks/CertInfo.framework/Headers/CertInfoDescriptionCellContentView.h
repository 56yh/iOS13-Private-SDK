//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface CertInfoDescriptionCellContentView : UIView
{
    NSArray *_labelsAndValues;
    double _idealHeight;
    int _sizesCount;
    struct CGSize *_sizes;
}

- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (double)rowHeight;
- (void)setLabelsAndValues:(id)arg1;
- (void)_recalculateIdealHeight;
- (id)_valueFont;
- (id)_labelFont;
- (void)dealloc;

@end

