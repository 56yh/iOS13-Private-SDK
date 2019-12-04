//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/KNPdfExporter.h>

@class KNPrintSegment, NSArray;

__attribute__((visibility("hidden")))
@interface KNPdfNoteExporter : KNPdfExporter
{
    _Bool _isPrintingNote;
    NSArray *_segments;
    KNPrintSegment *_currentSegment;
    double _viewScaleForPageCount;
    struct CGRect _unscaledClipRectForPageCount;
}

@property(nonatomic) double viewScaleForPageCount; // @synthesize viewScaleForPageCount=_viewScaleForPageCount;
@property(nonatomic) struct CGRect unscaledClipRectForPageCount; // @synthesize unscaledClipRectForPageCount=_unscaledClipRectForPageCount;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (struct CGRect)p_slideRectFromUnscaledClipRect:(struct CGRect)arg1 viewScale:(double)arg2 outScaledClipRect:(struct CGRect *)arg3;
- (id)p_noteSegmentsForSlideNode:(id)arg1 withScaledClipRect:(struct CGRect)arg2;
- (id)p_segmentsForSlideNode:(id)arg1 withScaledClipRect:(struct CGRect)arg2;
- (void)p_segmentSlideNodesWithUnscaledClipRect:(struct CGRect)arg1 viewScale:(double)arg2;
- (void)p_segmentSlidesIfNecessary;
- (unsigned long long)pageCount;
- (_Bool)incrementPage;
- (id)currentInfos;

@end

