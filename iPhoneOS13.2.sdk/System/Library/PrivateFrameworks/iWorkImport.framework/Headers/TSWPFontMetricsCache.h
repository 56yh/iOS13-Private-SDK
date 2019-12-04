//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPFontMetricsCache : NSObject
{
    struct list<unsigned long, std::__1::allocator<unsigned long>> _fontHashList;
    struct map<unsigned long, TSWPFontMetricsCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontMetricsCacheEntry>>> _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    struct _opaque_pthread_rwlock_t _lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCache;
+ (id)_singletonAlloc;
- (id).cxx_construct;
- (void)p_addEntryForFont:(struct __CTFont *)arg1 heightInfo:(const struct TSWPFontHeightInfo *)arg2 widths:(unsigned long long)arg3;
- (_Bool)p_findEntryForFont:(struct __CTFont *)arg1 outHeightInfo:(out struct TSWPFontHeightInfo *)arg2 outWidths:(out unsigned long long *)arg3 outCollision:(out _Bool *)arg4;
- (unsigned long long)supportedFractionalWidthsForFont:(struct __CTFont *)arg1;
- (struct TSWPFontHeightInfo)p_fontHeightInfoForFont:(struct __CTFont *)arg1 outWidths:(out unsigned long long *)arg2;
- (struct TSWPFontHeightInfo)fontHeightInfoForFont:(struct __CTFont *)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

