//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface NSValue (PXTileIdentifier)
+ (id)valueWithPXTileIdentifier:(struct PXTileIdentifier)arg1;
+ (id)valueWithPXEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)px_valueWithSimpleIndexPath:(struct PXSimpleIndexPath)arg1;
+ (id)px_valueWithMemoryFontsSpecIdentifier:(struct PXMemoryFontsSpecIdentifier)arg1;
+ (id)px_valueWithViewSpecDescriptor:(struct PXViewSpecDescriptor)arg1;
+ (id)valueWithPXTileGeometry:(struct PXTileGeometry)arg1;
+ (id)valueWithPXDisplayAssetDetailedCounts:(CDStruct_aa0b146f)arg1;
+ (id)valueWithPXDisplayAssetTypedCount:(CDStruct_15189878)arg1;
@property(readonly, nonatomic) struct PXTileIdentifier PXTileIdentifierValue;
@property(readonly) struct UIEdgeInsets PXEdgeInsetsValue;
@property(readonly, nonatomic) struct PXSimpleIndexPath px_simpleIndexPathValue;
- (struct PXMemoryFontsSpecIdentifier)px_memoryFontsSpecIdentifierValue;
@property(readonly, nonatomic) struct PXViewSpecDescriptor px_viewSpecDescriptorValue;
- (struct PXTileGeometry)PXTileGeometryValue;
@property(readonly, nonatomic) CDStruct_aa0b146f PXDisplayAssetDetailedCountsValue;
@property(readonly, nonatomic) CDStruct_15189878 PXDisplayAssetTypedCountValue;
@end

