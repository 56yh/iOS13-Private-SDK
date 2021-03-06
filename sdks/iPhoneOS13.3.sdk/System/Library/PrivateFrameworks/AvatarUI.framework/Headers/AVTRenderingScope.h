//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarPose, NSString;

@interface AVTRenderingScope : NSObject
{
    float _sizeModifier;
    NSString *_framingMode;
    long long _renderingType;
    double _scale;
    NSUInteger _options;
    AVTAvatarPose *_pose;
}

+ (double)extraMagnifyingFactorForFramingMode:(id)arg1;
+ (double)thumbnailHeightRatioForFramingMode:(id)arg1;
+ (double)widthForSunflowerRenderingType:(long long)arg1;
+ (double)widthForRenderingType:(long long)arg1 options:(NSUInteger)arg2;
+ (NSUInteger)scopeOptionsForEnvironment:(id)arg1;
+ (id)simplePickerThumbnailScope;
+ (id)funCamCarouselThumbnailScope;
+ (id)listControllerThumbnailScope;
+ (id)gridThumbnailScope;
+ (id)largeThumbnailScope;
+ (id)thumbnailScope;
@property(readonly, nonatomic) AVTAvatarPose *pose; // @synthesize pose=_pose;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) long long renderingType; // @synthesize renderingType=_renderingType;
@property(readonly, nonatomic) float sizeModifier; // @synthesize sizeModifier=_sizeModifier;
@property(readonly, nonatomic) NSString *framingMode; // @synthesize framingMode=_framingMode;
// - (void).cxx_destruct;
- (id)description;
- (id)framingModeIdentifier;
- (id)adaptedFramingModeForObjectType:(long long)arg1;
- (id)copyApplyingPoseOverride:(id)arg1;
- (id)copyWithSizeModifier:(float)arg1;
- (id)copyWithFramingMode:(id)arg1;
@property(readonly, nonatomic) CGSize size;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(NSUInteger)arg3 framingMode:(id)arg4 pose:(id)arg5 sizeModifier:(float)arg6;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(NSUInteger)arg3 framingMode:(id)arg4 pose:(id)arg5;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2 options:(NSUInteger)arg3;
- (id)initWithRenderingType:(long long)arg1 scale:(double)arg2;
- (NSUInteger)cacheableResourceAssociatedCost;
- (id)cacheableResourceAssociatedIdentifier;

@end

