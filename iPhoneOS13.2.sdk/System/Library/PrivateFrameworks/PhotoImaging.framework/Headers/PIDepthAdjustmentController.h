//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PIAdjustmentController.h>

@class NSDictionary;

@interface PIDepthAdjustmentController : PIAdjustmentController
{
}

+ (id)apertureKey;
+ (id)depthInfoKey;
- (id)capturedAperture;
@property(nonatomic) double aperture;
@property(copy, nonatomic) NSDictionary *depthInfo;
- (_Bool)canRenderDepth;
- (id)initWithAdjustment:(id)arg1;

@end

