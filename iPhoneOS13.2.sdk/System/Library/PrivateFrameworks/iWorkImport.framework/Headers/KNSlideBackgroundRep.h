//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class CALayer, KNSlideBackgroundInfo;

__attribute__((visibility("hidden")))
@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching>
{
    CALayer *_blackBackgroundLayer;
    _Bool _layerNeedsUpdate;
}

+ (id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3;
- (id)textureForDescription:(id)arg1;
- (_Bool)wantsToDistortWithImagerContext;
- (void)drawInContext:(struct CGContext *)arg1;
@property(readonly) KNSlideBackgroundInfo *slideBackgroundInfo;
- (_Bool)isOpaque;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;

@end

