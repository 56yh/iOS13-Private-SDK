//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSDiffableDataSourceSnapshot, NSFetchedResultsController, NSIndexPath, NSOrderedCollectionDifference, NSString;
@protocol NSFetchedResultsSectionInfo;

@protocol NSFetchedResultsControllerDelegate 

@optional
- (NSString *)controller:(NSFetchedResultsController *)arg1 sectionIndexTitleForSectionName:(NSString *)arg2;
- (void)controllerDidChangeContent:(NSFetchedResultsController *)arg1;
- (void)controllerWillChangeContent:(NSFetchedResultsController *)arg1;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeSection:(id <NSFetchedResultsSectionInfo>)arg2 atIndex:(unsigned long long)arg3 forChangeType:(unsigned long long)arg4;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithDifference:(NSOrderedCollectionDifference *)arg2;
- (void)controller:(NSFetchedResultsController *)arg1 didChangeContentWithSnapshot:(NSDiffableDataSourceSnapshot *)arg2;
@end

