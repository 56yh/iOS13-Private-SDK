//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

#import <HealthDaemon/HDDatumRendering-Protocol.h>
#import <HealthDaemon/HDHealthServiceCharacteristic-Protocol.h>

@class NSDate, NSString;

@interface HDFitnessMachineDataCharacteristicBase : HDHealthServiceCharacteristic <HDDatumRendering, HDHealthServiceCharacteristic>
{
}

+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (unsigned char)flagFieldLength;
+ (id)uuid;
- (id)getBinaryValueWithError:(id *)arg1;
- (id)allFields;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) _Bool elapsedTimeIsSet;
- (id)generateDatums:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSDate *updateTime;

@end

