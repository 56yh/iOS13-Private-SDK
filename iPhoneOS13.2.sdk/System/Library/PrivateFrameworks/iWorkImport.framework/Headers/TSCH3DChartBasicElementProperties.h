//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DChartMutableElementProperties.h>

@class TSCH3DChartModelEnumerator;

__attribute__((visibility("hidden")))
@interface TSCH3DChartBasicElementProperties : TSCH3DChartMutableElementProperties
{
    TSCH3DChartModelEnumerator *mEnumerator;
    tvec2_3b141483 mSize;
}

@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (id).cxx_construct;
- (id)texcoordsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)normalsForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)boundsGeometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (id)geometryForSeries:(id)arg1 index:(const tvec2_3b141483 *)arg2;
- (void)createResources;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

