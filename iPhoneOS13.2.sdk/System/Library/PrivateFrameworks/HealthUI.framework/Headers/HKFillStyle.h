//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class UIImage;

@interface HKFillStyle : NSObject <NSCopying>
{
    UIImage *_cachedImage;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_renderInContext:(struct CGContext *)arg1 size:(struct CGSize)arg2;
- (_Bool)_needsRenderForSize:(struct CGSize)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1 usingTraitCollection:(id)arg2;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (id)fillImageWithWidth:(double)arg1 usingTraitCollection:(id)arg2;
- (id)fillImageWithHeight:(double)arg1 usingTraitCollection:(id)arg2;
- (void)clearCache;

@end
