//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKVectorOverlayData.h>

@class NSArray;

@interface VKVectorOverlayPolygonGroup : VKVectorOverlayData
{
    NSArray *_polygons;
    shared_ptr_e0acdecc _style;
    struct CGColor *_fillColor;
    struct CGColor *_strokeColor;
    double _lineWidth;
    long long _lineJoin;
    double _miterLimit;
    double _alpha;
    struct unfair_lock _propertiesLock;
}

@property(readonly, nonatomic, getter=_style) shared_ptr_e0acdecc style; // @synthesize style=_style;
@property(readonly, nonatomic) NSArray *polygons; // @synthesize polygons=_polygons;
- (id).cxx_construct;
@property(nonatomic) double alpha;
@property(nonatomic) struct CGColor *strokeColor;
@property(nonatomic) struct CGColor *fillColor;
@property(nonatomic) double miterLimit;
@property(nonatomic) long long lineJoin;
@property(nonatomic) double lineWidth;
- (void)_updateStyleColor;
- (void)dealloc;
- (id)initWithPolygons:(id)arg1;

@end

