//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class BKSAccelerometer;

@protocol BKSAccelerometerDelegate 
- (void)accelerometer:(BKSAccelerometer *)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;

@optional
- (void)accelerometer:(BKSAccelerometer *)arg1 didChangeDeviceOrientation:(int)arg2;
@end

