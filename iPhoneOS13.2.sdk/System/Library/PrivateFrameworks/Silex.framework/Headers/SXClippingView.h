//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SXClippingLayer;

@interface SXClippingView : UIView
{
    UIView *_contentView;
    unsigned long long _clippingMode;
    struct CGSize _contentSize;
    struct CGRect _contentFrame;
}

+ (Class)layerClass;
@property(nonatomic) unsigned long long clippingMode; // @synthesize clippingMode=_clippingMode;
@property(nonatomic) struct CGRect contentFrame; // @synthesize contentFrame=_contentFrame;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) SXClippingLayer *layer; // @dynamic layer;

@end

