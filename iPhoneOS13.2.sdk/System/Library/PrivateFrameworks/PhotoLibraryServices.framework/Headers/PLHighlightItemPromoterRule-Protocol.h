//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSSet;
@protocol PLHighlightItem;

@protocol PLHighlightItemPromoterRule 
- (id <PLHighlightItem>)fallbackHighlightItemFromAllHighlightItems:(NSSet *)arg1;
- (NSArray *)highlightItemsSortedByImportance:(NSSet *)arg1;
- (_Bool)highlightItemHasMinimumRequirementToBePromoted:(id <PLHighlightItem>)arg1;
- (unsigned long long)maximumNumberOfHighlightItemsToPromote;
@end

