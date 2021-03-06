//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, MTCoreMaterialVisualStyling, NSString, UIColor;

@interface MTVisualStyling : NSObject
{
    MTCoreMaterialVisualStyling *_coreMaterialVisualStyling;
}

@property(retain, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling; // @synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling;
// - (void).cxx_destruct;
- (id)visualEffect;
@property(readonly, nonatomic) CAFilter *composedFilter;
@property(readonly, nonatomic) double alpha;
@property(readonly, copy, nonatomic) UIColor *color;
- (id)_layerConfig;
@property(readonly, copy, nonatomic) NSString *visualStyleName;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;
- (id)initWithCoreMaterialVisualStyling:(id)arg1;

@end

