//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalActivatable-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>
{
    _Bool _listening;
    NSString *_notificationName;
    id /* block */ _callback;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property(nonatomic) _Bool listening; // @synthesize listening=_listening;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy, nonatomic) id /* block */ callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *notificationName; // @synthesize notificationName=_notificationName;
- (_Bool)_removeObserver;
- (_Bool)_addObserver;
- (void)_notificationWithNameReceived:(id)arg1;
- (void)deactivate;
- (void)activate;
- (id)description;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 callback:(id /* block */)arg2;

@end

