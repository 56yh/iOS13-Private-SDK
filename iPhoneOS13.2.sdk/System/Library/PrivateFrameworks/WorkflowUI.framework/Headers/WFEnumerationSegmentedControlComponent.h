//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ComponentKit/CKComponent.h>

@class WFEnumerationParameter;

@interface WFEnumerationSegmentedControlComponent : CKComponent
{
    WFEnumerationParameter *_parameter;
    id /* block */ _updateBlock;
}

+ (double)estimatedWidthWithSegments:(id)arg1;
+ (double)perSegmentWidthWithSegments:(id)arg1;
+ (double)minimumWidthForSegmentWithTitle:(id)arg1;
+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(id /* block */)arg3 options:(struct WFParameterComponentOptions)arg4;
- (void)segmentedControlSelectedSegmentChanged:(id)arg1;

@end

