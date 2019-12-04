//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

#import <RelevanceEngine/REPipedLocationDonor-Protocol.h>

@class CLLocation, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface REPipedLocationReceiver : RESingleton <REPipedLocationDonor>
{
    NSXPCConnection *_connection;
    CLLocation *_location;
    long long _connectionWindowRetainCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_queue_clearConnection;
- (void)_queue_setupConnection;
@property(copy, nonatomic) CLLocation *location;
- (void)_queue_setLocation:(id)arg1;
- (void)dealloc;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

