//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>



@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying>
{
    NSData *_report;
    NSString *_virtualDeviceID;
}

@property(retain, nonatomic) NSData *report; // @synthesize report=_report;
@property(retain, nonatomic) NSString *virtualDeviceID; // @synthesize virtualDeviceID=_virtualDeviceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasReport;
@property(readonly, nonatomic) _Bool hasVirtualDeviceID;

@end

