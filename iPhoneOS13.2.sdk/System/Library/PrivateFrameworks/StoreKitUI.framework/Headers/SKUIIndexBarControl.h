//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSIndexPath, NSMapTable, SKUIIndexBarEntry;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;

@interface SKUIIndexBarControl : UIControl
{
    SKUIIndexBarEntry *_combinedEntry;
    _Bool _didSendPastBottom;
    _Bool _didSendPastTop;
    NSArray *_displayEntries;
    _Bool _hasValidCombinedEntry;
    _Bool _hasValidDisplayEntries;
    _Bool _hasValidNumberOfSections;
    _Bool _hasValidTotalEntryCount;
    _Bool _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    double _lineSpacing;
    long long _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    long long _totalEntryCount;
    struct CGSize _totalSize;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id <SKUIIndexBarControlDataSource> _dataSource;
    NSDictionary *_defaultTextAttributes;
    id <SKUIIndexBarControlDelegate> _delegate;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property(nonatomic) __weak id <SKUIIndexBarControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property(nonatomic) __weak id <SKUIIndexBarControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (struct CGRect)_visibleBounds;
- (struct CGSize)_totalSize;
- (long long)_totalEntryCount;
- (struct CGSize)_sizeForEntryAtIndexPath:(id)arg1;
- (struct CGSize)_sizeForEntries:(id)arg1;
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)_reloadLineSpacing;
- (long long)_numberOfSections;
- (void)_invalidateForChangedLayoutProperties;
- (void)_invalidateDisplayEntries;
- (id)_entryAtIndexPath:(id)arg1;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_displayEntries;
- (void)_configureNewEntry:(id)arg1;
- (id)_combinedEntry;
- (long long)_numberOfEntriesInSection:(long long)arg1;
- (void)_enumerateEntryIndexPathsUsingBlock:(id /* block */)arg1;
- (id)_allRequiredEntries;
- (id)_allEntries;
- (void)reloadSections:(id)arg1;
- (void)reloadEntryAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)reloadCombinedEntry;
- (long long)numberOfEntriesInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

