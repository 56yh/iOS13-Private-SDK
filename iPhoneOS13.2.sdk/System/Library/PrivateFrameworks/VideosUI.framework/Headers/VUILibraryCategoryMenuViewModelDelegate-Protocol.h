//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSError, VUILibraryCategoryMenuViewModel, VUIMenuDataSource;

@protocol VUILibraryCategoryMenuViewModelDelegate 

@optional
- (void)categoryViewModel:(VUILibraryCategoryMenuViewModel *)arg1 categoriesDidChange:(VUIMenuDataSource *)arg2;
- (void)categoryViewModel:(VUILibraryCategoryMenuViewModel *)arg1 fetchDidCompleteWithCategories:(VUIMenuDataSource *)arg2 error:(NSError *)arg3;
@end

