//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ISDeviceInfo : NSObject
{
    NSUInteger _screenClass;
    NSUInteger _deviceClass;
    NSUInteger _deviceSubtype;
    double _screenScale;
}

+ (id)sharedInstance;
@property(readonly) double screenScale; // @synthesize screenScale=_screenScale;
@property(readonly) NSUInteger deviceSubtype; // @synthesize deviceSubtype=_deviceSubtype;
@property(readonly) CGSize messagesLauncherIconSize;
@property(readonly) CGSize largeHomeScreenIconSize;
@property(readonly) CGSize homeScreenIconSize;
@property(readonly) NSUInteger ideom;
- (id)init;
@property(readonly) int deviceClass;
@property(readonly) int screenClass;

@end
