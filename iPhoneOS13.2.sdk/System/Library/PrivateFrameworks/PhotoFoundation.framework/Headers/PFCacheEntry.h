//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NSCopying><NSObject;

@interface PFCacheEntry : NSObject
{
    id <NSCopying> _key;
    id _value;
    unsigned long long _createTime;
    unsigned long long _lastReadTime;
    unsigned long long _readCount;
}

- (id)description;
- (unsigned long long)readCount;
- (unsigned long long)lastReadTime;
- (unsigned long long)createTime;
- (void)touch;
- (id)value;
- (id)key;
- (id)initWithKey:(id)arg1 value:(id)arg2;

@end

