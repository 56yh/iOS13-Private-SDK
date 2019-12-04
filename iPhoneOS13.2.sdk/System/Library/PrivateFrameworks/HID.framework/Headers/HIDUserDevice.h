//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HIDUserDevice : NSObject
{
    struct __IOHIDUserDevice *_device;
    id /* block */ _getReportHandler;
    id /* block */ _setReportHandler;
    unsigned int _service;
}

@property(readonly) unsigned int service;
- (_Bool)handleReport:(id)arg1 withTimestamp:(unsigned long long)arg2 error:(out id *)arg3;
- (_Bool)handleReport:(id)arg1 error:(out id *)arg2;
- (void)setSetReportHandler:(id /* block */)arg1;
- (void)setGetReportHandler:(id /* block */)arg1;
- (void)cancel;
- (void)activate;
- (void)setDispatchQueue:(id)arg1;
- (void)setCancelHandler:(id /* block */)arg1;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

@end

