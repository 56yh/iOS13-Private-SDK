//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface ACDLazyArray : NSArray
{
    struct os_unfair_lock_s _initializationLock;
    id /* block */ _initializationBlock;
    NSArray *_underlyingArray;
}

- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitializer:(id /* block */)arg1;
- (id)init;

@end

