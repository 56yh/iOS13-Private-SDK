//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXDisplayAsset;

@interface PXCuratedLibrarySectionGeometryDescriptor : NSObject
{
    id <PXDisplayAsset> _headerAsset;
    long long _visualPosition;
    CDStruct_2bd92d94 _headerCornerRadius;
    struct CGRect _sectionRect;
    struct CGRect _keyAssetRect;
    struct CGRect _headerRect;
}

@property(readonly, nonatomic) long long visualPosition; // @synthesize visualPosition=_visualPosition;
@property(readonly, nonatomic) id <PXDisplayAsset> headerAsset; // @synthesize headerAsset=_headerAsset;
@property(readonly, nonatomic) CDStruct_2bd92d94 headerCornerRadius; // @synthesize headerCornerRadius=_headerCornerRadius;
@property(readonly, nonatomic) struct CGRect headerRect; // @synthesize headerRect=_headerRect;
@property(readonly, nonatomic) struct CGRect keyAssetRect; // @synthesize keyAssetRect=_keyAssetRect;
@property(readonly, nonatomic) struct CGRect sectionRect; // @synthesize sectionRect=_sectionRect;
- (CDStruct_2bd92d94)cornerRadiusForRect:(struct CGRect)arg1;
- (struct CGRect)resizeRect:(struct CGRect)arg1 fromGeometryDesciptor:(id)arg2 inContainer:(long long)arg3 resizing:(unsigned long long)arg4;
- (id)sectionGeometryDescriptorWithHeaderRect:(struct CGRect)arg1;
- (id)sectionGeometryDescriptorWithMaximumHeightBelowHeader:(double)arg1;
- (id)sectionGeometryDescriptorTransformedBy:(struct CGAffineTransform)arg1;
- (id)sectionGeometryDescriptorOffsetBy:(struct CGPoint)arg1;
- (id)sectionGeometryDescriptorWithVisualPosition:(long long)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSectionRect:(struct CGRect)arg1 headerRect:(struct CGRect)arg2 keyAssetRect:(struct CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5 visualPosition:(long long)arg6;
- (id)initWithSectionRect:(struct CGRect)arg1 headerRect:(struct CGRect)arg2 keyAssetRect:(struct CGRect)arg3 headerCornerRadius:(CDStruct_2bd92d94)arg4 headerAsset:(id)arg5;
- (id)init;

@end

