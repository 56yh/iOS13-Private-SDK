//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

__attribute__((visibility("hidden")))
@interface TSDPartitionedPartialRep : TSDRep
{
}

- (struct CGRect)p_convertBaseToNaturalRect:(struct CGRect)arg1;
- (struct CGImage *)p_newImageForCachingBaseRep;
- (struct CGRect)p_clipRect;
- (struct UIEdgeInsets)p_edgeInsetsForClipping;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)willBeRemoved;
- (struct CGRect)clipRect;
- (struct CGRect)layerFrameInScaledCanvas;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

