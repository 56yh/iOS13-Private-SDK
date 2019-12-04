//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/CMDiagramShapeMapper.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CMDiagramShapeHierarchyMapper : CMDiagramShapeMapper
{
    NSMutableDictionary *mNodeInfoMap;
    _Bool mIsLayered;
}

- (struct CGSize)sizeForNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)mapNode:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapLayerNodes:(id)arg1 at:(id)arg2 scale:(float)arg3 offsetX:(float)arg4 offsetY:(float)arg5 withState:(id)arg6;
- (void)mapChildrenAt:(id)arg1 withState:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 identifier:(id)arg4 parent:(id)arg5;
- (struct ODIHRangeVector *)mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3 index:(unsigned long long)arg4;
- (void)copyInfoForNode:(id)arg1 depth:(int)arg2;
- (struct CGRect)mapLogicalBoundsWithXRanges:(const struct ODIHRangeVector *)arg1;
- (struct CGRect)boundsForNode:(id)arg1;
- (id)infoForNode:(id)arg1;
- (void)setUpLayers;

@end

