//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//





@protocol MTTimerTime;

@protocol MTTimerTime <NSObject, NSCopying, NSSecureCoding>
@property(readonly, nonatomic) double remainingTime;
- (long long)compare:(id <MTTimerTime>)arg1;
- (_Bool)isEqualToTime:(id <MTTimerTime>)arg1;
@end

