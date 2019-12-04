//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding>
{
    unsigned int _eventPort;
    unsigned long long _globalTraceObjectID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) unsigned int eventPort; // @synthesize eventPort=_eventPort;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
@property unsigned long long signaledValue;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)init;

@end

