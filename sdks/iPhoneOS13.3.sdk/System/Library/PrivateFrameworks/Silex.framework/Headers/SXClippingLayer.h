//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXLayer.h>

@class CALayer;

@interface SXClippingLayer : SXLayer
{
    CALayer *_contentLayer;
    NSUInteger _clippingMode;
    CGRect _contentFrame;
}

@property(nonatomic) CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(nonatomic) NSUInteger clippingMode; // @synthesize clippingMode=_clippingMode;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
// - (void).cxx_destruct;
- (void)layoutForMasking;
- (void)layoutForContentsRect;
- (void)layoutSublayers;

@end
