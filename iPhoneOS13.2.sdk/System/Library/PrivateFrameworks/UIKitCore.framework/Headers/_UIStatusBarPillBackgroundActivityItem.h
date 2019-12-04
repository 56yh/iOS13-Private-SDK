//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem
{
    long long _previousType;
    _UIStatusBarPillView *_combinedView;
    struct CGSize _pillSize;
}

+ (_Bool)shouldKeepIconVisibleForActivityType:(long long)arg1;
+ (id)pillCombinedDisplayIdentifier;
@property(retain, nonatomic) _UIStatusBarPillView *combinedView; // @synthesize combinedView=_combinedView;
@property(nonatomic) long long previousType; // @synthesize previousType=_previousType;
@property(nonatomic) struct CGSize pillSize; // @synthesize pillSize=_pillSize;
- (_Bool)shouldUpdateIndicatorForIdentifier:(id)arg1;
- (id)viewForIdentifier:(id)arg1;
- (void)_create_combinedView;
- (_Bool)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2;
- (id)_backgroundColorForActivityType:(long long)arg1;
- (id)imageForUpdate:(id)arg1;
- (void)updatedDisplayItemsWithData:(id)arg1;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (id)_backgroundActivityViewForIdentifier:(id)arg1;
- (id)createDisplayItemForIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;

@end

