//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

@interface AFFuture : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    id _value;
}

- (id)waitForValue:(unsigned long long)arg1;
- (id)initAndGetSetterBlock:(id /* block */ *)arg1;

@end

