//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSData, NSDate;

@interface SPAdvertisement : NSObject <NSSecureCoding>
{
    unsigned char _status;
    NSData *_address;
    NSData *_advertisementData;
    NSData *_reserved;
    long long _rssi;
    NSDate *_scanDate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *scanDate; // @synthesize scanDate=_scanDate;
@property(nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(copy, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(nonatomic) unsigned char status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *advertisementData; // @synthesize advertisementData=_advertisementData;
@property(copy, nonatomic) NSData *address; // @synthesize address=_address;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;

@end
