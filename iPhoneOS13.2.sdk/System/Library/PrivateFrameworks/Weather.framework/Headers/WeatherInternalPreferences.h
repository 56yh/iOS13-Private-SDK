//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults
{
    id _persistence;
}

+ (id)sharedInternalPreferences;
@property(retain) id persistence; // @synthesize persistence=_persistence;
@property(readonly) _Bool shouldShowUpdateTimestamp;
@property(readonly) _Bool isV3Enabled;
@property(readonly) _Bool isInternalInstall;

@end

