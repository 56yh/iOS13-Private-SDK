//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying>
{
    long long _style;
    double _width;
    long long _spokeCount;
    long long _spokeFrameRatio;
    struct CGSize _shadowOffset;
    struct CGColor *_color;
    struct CGColor *_shadowColor;
}

- (void)dealloc;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(struct CGSize)arg5 color:(struct CGColor *)arg6 shadowColor:(struct CGColor *)arg7;

@end

