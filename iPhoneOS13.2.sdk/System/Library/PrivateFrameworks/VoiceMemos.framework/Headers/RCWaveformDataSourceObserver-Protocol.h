//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class RCWaveformDataSource, RCWaveformSegment;

@protocol RCWaveformDataSourceObserver 
- (void)waveformDataSource:(RCWaveformDataSource *)arg1 didLoadWaveformSegment:(RCWaveformSegment *)arg2;
- (void)waveformDataSourceDidFinishLoading:(RCWaveformDataSource *)arg1;

@optional
- (void)waveformDataSourceRequiresUpdate:(RCWaveformDataSource *)arg1;
@end

