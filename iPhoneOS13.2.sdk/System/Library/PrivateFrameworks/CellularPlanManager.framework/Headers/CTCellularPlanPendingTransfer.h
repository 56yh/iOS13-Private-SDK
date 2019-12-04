//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CTUserLabel, NSString;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding>
{
    NSString *_sourceIccid;
    NSString *_carrierName;
    NSString *_deviceName;
    CTUserLabel *_planLabel;
    NSString *_phoneNumber;
    long long _status;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) CTUserLabel *planLabel; // @synthesize planLabel=_planLabel;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
@property(retain, nonatomic) NSString *sourceIccid; // @synthesize sourceIccid=_sourceIccid;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

