//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HMAccessorySettings, HMMediaSession;
@protocol HMMediaObject;

@protocol HMMediaObjectDelegate 

@optional
- (void)mediaObject:(id <HMMediaObject>)arg1 didUpdateSettings:(HMAccessorySettings *)arg2;
- (void)mediaObject:(id <HMMediaObject>)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
@end

