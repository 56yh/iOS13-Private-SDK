//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSObject (FMAdditions)
- (void)_fm_removeNotificationObserverProxy:(id)arg1;
- (void)_fm_addNotificationObserverProxy:(id)arg1;
- (id)fm_associatedObjectForDescriptor:(const CDStruct_b9c9288f *)arg1;
- (void)fm_setAssociatedObject:(id)arg1 assocatedObjectDescriptor:(const CDStruct_b9c9288f *)arg2;
- (void)fm_removeNotificationBlockObserver:(id)arg1;
- (id)fm_addNotificationBlockObserverForObject:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 usingBlock:(id /* block */)arg4;
- (id)fm_addNotificationBlockObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id /* block */)arg4;
@property(readonly, retain, nonatomic) NSString *logID;
- (id)nullToNil;
@property(readonly, retain, nonatomic) NSString *fm_logID;
- (id)fm_nullToNil;
@end

