//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/MXMProbeableDevice-Protocol.h>

@class NSString, OSLogDevice;

@interface MXMOSLogDevice_Internal : NSObject <MXMProbeableDevice>
{
    NSString *_name;
    NSString *_identifier;
    OSLogDevice *_rawDevice;
}

@property(retain, nonatomic) OSLogDevice *rawDevice; // @synthesize rawDevice=_rawDevice;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (id)initWithOSLogDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

