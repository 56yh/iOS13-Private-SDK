//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKColor;

__attribute__((visibility("hidden")))
@interface SKUIPlaceholderImageKey : NSObject
{
    long long _height;
    long long _imageTreatment;
    long long _width;
    IKColor *_placeholderBackgroundColor;
}

- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize)arg1 imageTreatment:(long long)arg2 placeholderBackgroundColor:(id)arg3;

@end

