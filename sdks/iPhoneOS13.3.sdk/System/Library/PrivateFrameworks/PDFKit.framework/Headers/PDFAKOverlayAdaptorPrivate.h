//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableIndexSet, PDFDocument, PDFView;

__attribute__((visibility("hidden")))
@interface PDFAKOverlayAdaptorPrivate : NSObject
{
    BOOL isTornDown;
    PDFView *pdfView;
    PDFDocument *pdfDocument;
    NSMutableIndexSet *observedPageIndices;
}

// - (void).cxx_destruct;

@end

