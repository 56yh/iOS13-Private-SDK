//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADImageFillTechnique.h>

__attribute__((visibility("hidden")))
@interface OADTileTechnique : OADImageFillTechnique
{
    float mOffsetX;
    _Bool mIsOffsetXOverridden;
    float mOffsetY;
    _Bool mIsOffsetYOverridden;
    float mScaleX;
    _Bool mIsScaleXOverridden;
    float mScaleY;
    _Bool mIsScaleYOverridden;
    int mFlipMode;
    _Bool mIsFlipModeOverridden;
    int mAlignment;
    _Bool mIsAlignmentOverridden;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isAlignmentOverridden;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (_Bool)isFlipModeOverridden;
- (void)setFlipMode:(int)arg1;
- (int)flipMode;
- (_Bool)isScaleYOverridden;
- (void)setScaleY:(float)arg1;
- (float)scaleY;
- (_Bool)isScaleXOverridden;
- (void)setScaleX:(float)arg1;
- (float)scaleX;
- (_Bool)isOffsetYOverridden;
- (void)setOffsetY:(float)arg1;
- (float)offsetY;
- (_Bool)isOffsetXOverridden;
- (void)setOffsetX:(float)arg1;
- (float)offsetX;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

