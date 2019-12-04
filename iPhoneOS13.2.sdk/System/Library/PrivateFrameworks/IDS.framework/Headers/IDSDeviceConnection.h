//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSInputStream, NSOutputStream, _IDSDeviceConnection;

@interface IDSDeviceConnection : NSObject
{
    _IDSDeviceConnection *_internal;
}

@property(readonly, nonatomic) _IDSDeviceConnection *_internal;
@property(readonly, nonatomic) NSDictionary *metrics;
@property(readonly, nonatomic) unsigned long long mtu;
- (void)close;
@property(readonly, nonatomic) NSOutputStream *outputStream;
@property(readonly, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)description;
- (void)dealloc;
- (_Bool)updateConnectionWithOptions:(id)arg1 error:(id *)arg2;
- (id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;
- (id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 queue:(id)arg4;

@end

