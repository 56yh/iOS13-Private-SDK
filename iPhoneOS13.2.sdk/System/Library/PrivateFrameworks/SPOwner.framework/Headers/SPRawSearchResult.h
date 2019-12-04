//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSData, NSDate;

@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_hashedPublicKey;
    NSData *_publicKey;
    NSDate *_datePublished;
    long long _status;
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
    long long _rssi;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long rssi; // @synthesize rssi=_rssi;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSDate *datePublished; // @synthesize datePublished=_datePublished;
@property(readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly, copy, nonatomic) NSData *hashedPublicKey; // @synthesize hashedPublicKey=_hashedPublicKey;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 datePublished:(id)arg3 status:(long long)arg4 timestamp:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 horizontalAccuracy:(double)arg8 rssi:(long long)arg9;
- (id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 datePublished:(id)arg3 status:(long long)arg4 timestamp:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 horizontalAcuracy:(double)arg8 rssi:(long long)arg9;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

