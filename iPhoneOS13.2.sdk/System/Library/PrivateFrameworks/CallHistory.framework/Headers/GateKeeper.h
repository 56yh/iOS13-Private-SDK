//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallHistory/CHLogger.h>

@interface GateKeeper : CHLogger
{
    _Bool _hasDeviceBeenUnlockedSinceBoot;
}

+ (id)instance;
@property _Bool hasDeviceBeenUnlockedSinceBoot; // @synthesize hasDeviceBeenUnlockedSinceBoot=_hasDeviceBeenUnlockedSinceBoot;
- (void)cacheUnlockSinceBootState;
- (void)setupMobileKeyBag;
- (void)reFetch;
- (id)init;

@end

