//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIStackView;

@interface WFRowOfIconsView : UIView
{
    unsigned long long _maxNumberOfIcons;
    UIStackView *_stackView;
    NSMutableArray *_iconViews;
    double _height;
}

@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) unsigned long long maxNumberOfIcons; // @synthesize maxNumberOfIcons=_maxNumberOfIcons;
- (void)rebuildSubviewsForItems:(id)arg1;
- (void)setHomeIcons:(id)arg1;
- (void)setIcons:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2;

@end

