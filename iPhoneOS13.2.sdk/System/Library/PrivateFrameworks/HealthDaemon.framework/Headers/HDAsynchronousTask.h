//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface HDAsynchronousTask : NSObject
{
    _Bool _hasTimeout;
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
    double _timeout;
    id /* block */ _checkpointHandler;
}

@property(copy, nonatomic) id /* block */ checkpointHandler; // @synthesize checkpointHandler=_checkpointHandler;
@property(nonatomic) _Bool hasTimeout; // @synthesize hasTimeout=_hasTimeout;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;

@end

