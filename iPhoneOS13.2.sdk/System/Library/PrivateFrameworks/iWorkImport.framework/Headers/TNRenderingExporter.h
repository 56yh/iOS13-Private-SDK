//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSARenderingExporter.h>

@class NSMutableArray, TNPageController, TNPdfHyperlinkController;

__attribute__((visibility("hidden")))
@interface TNRenderingExporter : TSARenderingExporter
{
    unsigned long long mSheetIndex;
    unsigned long long mPageIndex;
    unsigned long long mTotalPagesCount;
    vector_06e666a8 mSheetPageCountArray;
    vector_06e666a8 mSheetPageStartArray;
    TNPageController *mPageController;
    TNPdfHyperlinkController *mHyperlinkController;
    NSMutableArray *mCanvasBasedSheets;
    _Bool _renderingAllSheets;
}

@property(nonatomic, getter=isRenderingAllSheets) _Bool renderingAllSheets; // @synthesize renderingAllSheets=_renderingAllSheets;
- (id).cxx_construct;
- (id)quickLookSheets;
- (long long)pageIndexFromQuickLookSheet:(id)arg1;
- (_Bool)isPageInPortraitOrientation:(unsigned long long)arg1;
- (struct CGRect)p_boundsRectForFirstPage;
- (_Bool)p_isActiveSheetForm;
- (id)p_canvasBasedSheets;
- (double)totalProgess;
- (void)drawCurrentPageWithContext:(struct CGContext *)arg1 returnSuccess:(_Bool *)arg2;
- (void)drawAllPagesWithContext:(struct CGContext *)arg1 returnSuccess:(_Bool *)arg2;
- (id)p_activeSheet;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;
- (id)pageController;
- (vector_06e666a8)p_pageStartArray;
- (vector_06e666a8)p_pageCountArray;
- (double)progressForCurrentPage;
- (_Bool)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(double)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(_Bool)arg4;
- (_Bool)incrementPage;
- (_Bool)preparePage:(unsigned long long)arg1;
- (void)setSheetIndex:(unsigned long long)arg1 andPageIndex:(unsigned long long)arg2;
- (unsigned long long)inSheetPageIndexForPage:(unsigned long long)arg1;
- (unsigned long long)sheetIndexForPage:(unsigned long long)arg1;
- (unsigned long long)numberOfCanvasBasedSheets;
- (unsigned long long)pageCount;
- (id)currentInfos;
- (struct CGRect)unscaledClipRect;
- (struct CGRect)boundsRect;

@end

