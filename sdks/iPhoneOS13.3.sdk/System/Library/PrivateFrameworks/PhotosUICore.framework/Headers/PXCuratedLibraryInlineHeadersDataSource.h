//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class PXAssetsDataSource;

@interface PXCuratedLibraryInlineHeadersDataSource : PXSectionedDataSource
{
    long long _numberOfSections;
    NSUInteger _level;
    CDStruct_68723fc0 _sectionInfos;
    PXAssetsDataSource *_assetsDataSource;
}

@property(readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(readonly, nonatomic) CDStruct_68723fc0 sectionInfos; // @synthesize sectionInfos=_sectionInfos;
@property(readonly, nonatomic) NSUInteger level; // @synthesize level=_level;
@property(readonly, nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
// - (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAssetsDataSource:(id)arg1 level:(NSUInteger)arg2 numberOfSections:(long long)arg3 sections:(CDStruct_68723fc0 )arg4;

@end

