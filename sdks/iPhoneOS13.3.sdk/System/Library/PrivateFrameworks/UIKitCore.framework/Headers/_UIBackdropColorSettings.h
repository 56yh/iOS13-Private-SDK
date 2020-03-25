//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    BOOL _hasObservedValues;
    _UIBackdropViewSettings *_parentSettings;
}

@property(nonatomic) BOOL hasObservedValues; // @synthesize hasObservedValues=_hasObservedValues;
@property(nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property(readonly, nonatomic) UIColor *color;
- (BOOL)applyCABackdropLayerStatistics:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
@property(nonatomic) double contrast;
@property(nonatomic) double averageBrightness;
@property(nonatomic) double averageSaturation;
@property(nonatomic) double averageHue;
- (void)setDefaultValues;

@end
