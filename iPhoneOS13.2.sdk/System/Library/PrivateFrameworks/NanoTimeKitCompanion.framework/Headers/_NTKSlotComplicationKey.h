//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSString, NSUUID, NTKComplication;

@interface _NTKSlotComplicationKey : NSObject <NSCopying>
{
    NSString *_slot;
    NTKComplication *_complication;
    NSUUID *_deviceUUID;
}

+ (id)keyWithSlot:(id)arg1 complication:(id)arg2 forDevice:(id)arg3;
@property(readonly) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
@property(readonly, copy) NSString *slot; // @synthesize slot=_slot;
@property(readonly) NTKComplication *complication; // @synthesize complication=_complication;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
