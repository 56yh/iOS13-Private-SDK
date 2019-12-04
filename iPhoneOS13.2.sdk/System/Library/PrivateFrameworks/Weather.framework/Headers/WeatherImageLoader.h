//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject
{
    double _scale;
    CPBitmapStore *_store;
    NSCache *_conditionImagesCache;
}

+ (id)conditionImageBundle;
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;
+ (id)cachedImageNamed:(id)arg1 completion:(id /* block */)arg2;
+ (id)colorForImageColor:(id)arg1 lighter:(_Bool)arg2;
+ (id)conditionImageNamed:(id)arg1 size:(struct CGSize)arg2 cloudAligned:(_Bool)arg3 stroke:(_Bool)arg4 strokeAlpha:(double)arg5 lighterColors:(_Bool)arg6;
+ (id)conditionImageNamed:(id)arg1 style:(long long)arg2;
+ (id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2;
+ (id)conditionImageWithConditionIndex:(long long)arg1;
+ (void)cacheImageIfNecessary:(id)arg1;
+ (id)sharedImageLoader;
+ (void)preloadImages;
@property(retain, nonatomic) NSCache *conditionImagesCache; // @synthesize conditionImagesCache=_conditionImagesCache;
@property(retain, nonatomic) CPBitmapStore *store; // @synthesize store=_store;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKey:(id)arg1;
- (id)init;

@end

