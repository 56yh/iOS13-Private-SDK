//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _KSRequestThrottle : NSObject
{
    id /* CDUnknownBlockType */ _curveFunction;
    double _maximum;
    id /* CDUnknownBlockType */ _request;
    int _retryCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_debugIdentifier;
}

@property(copy, nonatomic) NSString *debugIdentifier; // @synthesize debugIdentifier=_debugIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)_launch;
- (void)postRequest:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCurve:(id /* CDUnknownBlockType */)arg1 maximumDelay:(double)arg2;
- (id)init;

@end

