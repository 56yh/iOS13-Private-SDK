//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class UIEvent, UIIndexBarDisplayEntry, UIIndexBarEntry, UIIndexBarView, UITouch, UITraitCollection;

@protocol UIIndexBarVisualStyle 
@property(readonly, nonatomic) double minLineHeight;
@property(readonly, nonatomic) _Bool overlay;
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(nonatomic) __weak UIIndexBarView *indexBarView;
- (UIIndexBarDisplayEntry *)displayEntryFromEntry:(UIIndexBarEntry *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithView:(UIIndexBarView *)arg1;

@optional
@property(nonatomic) _Bool expanded;
- (long long)_accessibility_indexForEntryAtPoint:(struct CGPoint)arg1;
- (void)traitCollectionDidChange:(UITraitCollection *)arg1;
- (_Bool)updateSectionForTouch:(UITouch *)arg1 withEvent:(UIEvent *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)deflectionReset:(_Bool)arg1;
- (void)deflectionUpdated;
- (void)highlightedIndexUpdated;
- (void)highlightStyleUpdated;
- (void)indexColorUpdated;
- (void)sizeUpdated;
- (void)displayEntriesUpdated;
- (void)entriesUpdated;
@end

