//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

__attribute__((visibility("hidden")))
@interface OADPathShade : OADShade
{
    OADRelativeRect *mFillToRect;
    int mType;
    _Bool mIsTypeOverridden;
}

+ (id)defaultProperties;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isTypeOverridden;
- (void)setType:(int)arg1;
- (int)type;
- (_Bool)isFillToRectOverridden;
- (void)setFillToRect:(id)arg1;
- (id)fillToRect;
- (void)removeUnnecessaryOverrides;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (_Bool)isAnythingOverridden;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

