//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUDeviceTrait-Protocol.h>

@class NSString;

@interface NUDeviceTrait : NSObject <NUDeviceTrait>
{
    unsigned long long _deviceTraitSize;
}

@property(readonly, nonatomic) unsigned long long deviceTraitSize; // @synthesize deviceTraitSize=_deviceTraitSize;
@property(readonly, nonatomic, getter=isLandscape) _Bool landscape;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceTraitSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

