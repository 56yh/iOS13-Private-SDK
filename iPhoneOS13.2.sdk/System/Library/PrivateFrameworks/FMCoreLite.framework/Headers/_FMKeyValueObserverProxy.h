//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FMCoreLite/_FMObserverProxy.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMKeyValueObserverProxy : _FMObserverProxy
{
    _Bool _isObserving;
    id /* block */ _observerBlock;
    id _observedObject;
    NSString *_keyPath;
}

@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) __weak id observedObject; // @synthesize observedObject=_observedObject;
@property(readonly, copy, nonatomic) id /* block */ observerBlock; // @synthesize observerBlock=_observerBlock;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithWeakObserver:(id)arg1 observedObject:(id)arg2 keyPath:(id)arg3 options:(unsigned long long)arg4 observerBlock:(id /* block */)arg5;

@end

