//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDNoDefaultImplicitActionLayer.h>

@class NSMutableSet, TSDInteractiveCanvasController;

@interface TSDTilingHostingLayer : TSDNoDefaultImplicitActionLayer
{
    NSMutableSet *mDirtyTilingLayers;
    TSDInteractiveCanvasController *mController;
}

@property(nonatomic) TSDInteractiveCanvasController *controller; // @synthesize controller=mController;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)p_commonInit;

@end

