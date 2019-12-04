//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class PDFPageLayerEffectPrivate;

__attribute__((visibility("hidden")))
@interface PDFPageLayerEffect : CALayer
{
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createFlashEffectForPDFLinkAnnotation:(id)arg1 withLayer:(id)arg2 forType:(long long)arg3;
+ (id)createPDFNoteLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)arg1 withLayer:(id)arg2;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect)arg1 withLayer:(id)arg2;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)arg1 withLayer:(id)arg2;
- (id)pdfResult;
- (void)updateColor:(unsigned long long)arg1;
- (void)addSelection:(id)arg1;
- (void)setSelections:(id)arg1;
- (id)annotation;
- (_Bool)shouldRotateContent;
- (void)update;
- (void)setPageFrame:(struct CGRect)arg1;
- (struct CGRect)pageFrame;
- (id)UUID;
- (id)initWithPDFPageLayer:(id)arg1;

@end

