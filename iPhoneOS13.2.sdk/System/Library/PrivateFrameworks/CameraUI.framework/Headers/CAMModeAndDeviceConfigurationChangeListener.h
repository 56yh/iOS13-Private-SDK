//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAMModeAndDeviceConfigurationChangeListener : NSObject
{
    long long _desiredMode;
    long long _desiredDevicePosition;
    id /* block */ _handler;
}

@property(copy, nonatomic) id /* block */ handler; // @synthesize handler=_handler;
@property(nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;

@end

