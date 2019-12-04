//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscriberStore : NSObject
{
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}

@property(readonly, nonatomic) NSArray *subscriptions;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)init;

@end
