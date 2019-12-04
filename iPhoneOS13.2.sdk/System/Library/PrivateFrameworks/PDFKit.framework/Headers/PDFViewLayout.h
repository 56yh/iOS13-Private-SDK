//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFDocument, PDFViewLayoutPrivate;

@interface PDFViewLayout : NSObject
{
    PDFViewLayoutPrivate *_private;
}

- (struct CGRect)normalizedPageBounds:(id)arg1;
- (void)generateInternalDocumentGeometry;
- (id)facingPageForPage:(id)arg1;
- (void)invalidateInternalDocumentGeometry;
- (long long)functionalDisplayMode;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromPage:(id)arg2 forScaleFactor:(double)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toPage:(id)arg2 forScaleFactor:(double)arg3;
- (id)pageNearestPoint:(struct CGPoint)arg1 currentPage:(id)arg2;
- (struct CGRect)boundsForPage:(id)arg1;
- (id)visiblePagesInBounds:(struct CGRect)arg1 currentPage:(id)arg2;
- (struct _NSRange)visiblePageRangeInBounds:(struct CGRect)arg1 currentPage:(id)arg2;
- (struct CGSize)contentSizeWithCurrentPage:(id)arg1;
@property(nonatomic) __weak PDFDocument *document;
@property(nonatomic) __weak id delegate;
- (void)dealloc;
- (id)init;

@end

