//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVLockupFactory : NSObject
{
}

+ (id)_configurationIdentifierForElement:(id)arg1;
+ (void)_configureStackingPoster:(id)arg1 layout:(id)arg2 element:(id)arg3 forMetrics:(_Bool)arg4;
+ (void)_configureCell:(id)arg1 layout:(id)arg2 element:(id)arg3;
+ (struct UIEdgeInsets)_customCellPaddingForCellMetrics:(struct TVCellMetrics)arg1 withCollectionCellMetrics:(struct TVCellMetrics)arg2 contentAlignment:(long long)arg3;
+ (void)updateViewLayoutForCell:(id)arg1 forSize:(struct CGSize)arg2;
+ (struct TVCellMetrics)cellMetricsForCollectionElement:(id)arg1;
- (void)_registerLockup;
- (id)init;

@end

