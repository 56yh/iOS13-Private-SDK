//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSSThemeAsset-Protocol.h>

@class NSString;

@protocol TSSPreset <TSSThemeAsset>
@property(readonly, nonatomic) NSString *presetKind;

@optional
- (void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContext )arg2;
@end

