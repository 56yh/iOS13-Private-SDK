//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator
{
    PXCuratedLibraryCardSectionBodyLayoutSpec *_cardSpec;
}

@property(readonly, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec; // @synthesize cardSpec=_cardSpec;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct UIEdgeInsets)containerInsets;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;

@end

