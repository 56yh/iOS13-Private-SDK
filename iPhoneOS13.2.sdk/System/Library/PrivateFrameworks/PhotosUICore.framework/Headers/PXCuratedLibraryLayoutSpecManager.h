//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpecManager.h>

@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager
{
    NSArray *_availableThumbnailSizes;
}

@property(retain, nonatomic) NSArray *availableThumbnailSizes; // @synthesize availableThumbnailSizes=_availableThumbnailSizes;
- (_Bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (id)createSpec;
- (Class)specClass;

// Remaining properties
@property(readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec; // @dynamic spec;

@end

