//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



__attribute__((visibility("hidden")))
@interface _UISegmentedControlCacheKey : NSObject <NSCopying>
{
    double _size;
    unsigned long long _state;
    struct CGColor *_primaryColor;
}

- (void)dealloc;
- (_Bool)isEqualToCacheKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCornerRadius:(double)arg1 state:(unsigned long long)arg2 primaryColor:(struct CGColor *)arg3;
- (id)initWithSize:(int)arg1 primaryColor:(struct CGColor *)arg2 background:(_Bool)arg3;

@end

