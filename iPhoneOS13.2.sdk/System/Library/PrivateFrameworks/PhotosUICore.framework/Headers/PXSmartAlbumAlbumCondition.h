//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumAlbumCondition : PXSmartAlbumCondition
{
    NSArray *_albumValues;
}

+ (id)defaultSingleQueryForEditingContext:(id)arg1;
+ (id)anyAlbumValue;
- (id)_albumValues;
@property(retain, nonatomic) PXLabeledValue *albumValue;
@property(readonly, nonatomic) _Bool albumValueIsOrphaned;

@end

