//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIColor;

@interface _NTKColorManager : NSObject
{
    CALayer *_layer;
    UIColor *_color;
}

@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, nonatomic) UIColor *contentColor;
- (_Bool)shouldAnimatePropertyWithKey:(id)arg1;
- (void)_updateFilterColor;

@end

