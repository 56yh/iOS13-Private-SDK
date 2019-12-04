//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HUIntrinsicSizeDescriptor;

@interface HUQuickControlSliderMetrics : NSObject
{
    HUIntrinsicSizeDescriptor *_sizeDescriptor;
    double _cornerRadius;
    double _widthToCornerRadiusRatio;
}

@property(readonly, nonatomic) double widthToCornerRadiusRatio; // @synthesize widthToCornerRadiusRatio=_widthToCornerRadiusRatio;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) HUIntrinsicSizeDescriptor *sizeDescriptor; // @synthesize sizeDescriptor=_sizeDescriptor;
- (id)initWithSizeDescriptor:(id)arg1 cornerRadius:(double)arg2 widthToCornerRadiusRatio:(double)arg3;

@end

