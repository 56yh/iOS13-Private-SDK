//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSection.h>

@class PXCollectionsDataSource;

@interface _PXCollectionsDataSourceSection : PXCollectionsDataSection
{
    long long _count;
    PXCollectionsDataSource *_collectionsDataSource;
}

@property(readonly, nonatomic) PXCollectionsDataSource *collectionsDataSource; // @synthesize collectionsDataSource=_collectionsDataSource;
- (id)objectAtIndex:(long long)arg1;
- (long long)count;
- (id)content;
- (long long)countForCollection:(id)arg1;
- (long long)indexOfCollection:(id)arg1;
- (id)initWithCollectionsDataSource:(id)arg1;

@end

