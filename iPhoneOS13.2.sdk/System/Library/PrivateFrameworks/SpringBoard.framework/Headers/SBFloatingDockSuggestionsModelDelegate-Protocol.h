//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSOrderedSet, SBDisplayItem, SBFloatingDockSuggestionsModel;

@protocol SBFloatingDockSuggestionsModelDelegate 
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didReloadItems:(NSOrderedSet *)arg2 withItems:(NSOrderedSet *)arg3;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didReplaceItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 withItem:(SBDisplayItem *)arg4 atIndex:(unsigned long long)arg5 involvesContinuity:(_Bool)arg6;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didRemoveItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(_Bool)arg4;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didInsertItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(_Bool)arg4;
@end

