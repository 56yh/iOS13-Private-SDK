//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreMotion/CMOdometer.h>

#import <HealthDaemon/HDCoreMotionDataSource-Protocol.h>

@class NSString;

@interface CMOdometer (HealthDaemon) <HDCoreMotionDataSource>
- (void)hd_stopStreaming;
- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@end

