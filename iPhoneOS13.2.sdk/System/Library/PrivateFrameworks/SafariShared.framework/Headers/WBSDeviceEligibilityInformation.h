//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface WBSDeviceEligibilityInformation : NSObject
{
    _Bool _hasWindowsDevices;
    NSDate *_dateOfLatestDAVAccessByIneligibleWindowsDevice;
    NSArray *_devices;
}

@property(readonly, nonatomic) _Bool hasWindowsDevices; // @synthesize hasWindowsDevices=_hasWindowsDevices;
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) NSDate *dateOfLatestDAVAccessByIneligibleWindowsDevice; // @synthesize dateOfLatestDAVAccessByIneligibleWindowsDevice=_dateOfLatestDAVAccessByIneligibleWindowsDevice;
- (id)description;
- (CDStruct_4bcfbbae)potentiallyEligibleDevicesWithEligibleOperatingSystemVersionRanges:(id)arg1;
- (id)initWithDeviceListResponseDictionary:(id)arg1;
- (id)initWithDateOfLatestDAVAccessByIneligibleWindowsDevice:(id)arg1 devices:(id)arg2 hasWindowsDevices:(_Bool)arg3;

@end

