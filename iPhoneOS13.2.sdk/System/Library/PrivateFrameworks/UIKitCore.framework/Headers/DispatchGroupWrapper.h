//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface DispatchGroupWrapper : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property(nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void)notify:(id /* block */)arg1;
- (void)executeWithDispatchGroup:(id /* block */)arg1;
- (void)dealloc;
- (id)init;

@end

