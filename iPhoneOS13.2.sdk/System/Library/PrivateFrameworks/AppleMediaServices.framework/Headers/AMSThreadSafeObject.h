//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AMSThreadSafeObject : NSObject
{
    id _object;
    NSObject<OS_dispatch_queue> *_objectAccessQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *objectAccessQueue; // @synthesize objectAccessQueue=_objectAccessQueue;
- (id)accessAndSetObjectWithBlock:(id /* block */)arg1;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (id)initWithObject:(id)arg1;
- (id)init;

@end

