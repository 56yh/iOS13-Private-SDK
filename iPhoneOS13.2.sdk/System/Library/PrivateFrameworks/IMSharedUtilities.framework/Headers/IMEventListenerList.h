//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMEventListenerList : NSObject
{
    NSMutableArray *_eventListeners;
}

- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (_Bool)containsObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end

