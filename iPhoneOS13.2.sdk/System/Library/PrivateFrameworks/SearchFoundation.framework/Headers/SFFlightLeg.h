//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



#import <SearchFoundation/SFFlightLeg-Protocol.h>

@class NSData, NSDate, NSDictionary, NSString, SFAirport;

@interface SFFlightLeg : NSObject <SFFlightLeg, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int status:1;
    } _has;
    int _status;
    NSDate *_departurePublishedTime;
    NSDate *_departureActualTime;
    NSString *_departureTerminal;
    NSString *_departureGate;
    SFAirport *_departureAirport;
    NSDate *_arrivalPublishedTime;
    NSDate *_arrivalActualTime;
    NSString *_arrivalTerminal;
    NSString *_arrivalGate;
    SFAirport *_arrivalAirport;
    SFAirport *_divertedAirport;
    NSString *_title;
    NSString *_baggageClaim;
    NSDate *_departureGateClosedTime;
    NSDate *_departureRunwayTime;
    NSDate *_arrivalRunwayTime;
    NSDate *_arrivalGateTime;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDate *arrivalGateTime; // @synthesize arrivalGateTime=_arrivalGateTime;
@property(copy, nonatomic) NSDate *arrivalRunwayTime; // @synthesize arrivalRunwayTime=_arrivalRunwayTime;
@property(copy, nonatomic) NSDate *departureRunwayTime; // @synthesize departureRunwayTime=_departureRunwayTime;
@property(copy, nonatomic) NSDate *departureGateClosedTime; // @synthesize departureGateClosedTime=_departureGateClosedTime;
@property(copy, nonatomic) NSString *baggageClaim; // @synthesize baggageClaim=_baggageClaim;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) SFAirport *divertedAirport; // @synthesize divertedAirport=_divertedAirport;
@property(retain, nonatomic) SFAirport *arrivalAirport; // @synthesize arrivalAirport=_arrivalAirport;
@property(copy, nonatomic) NSString *arrivalGate; // @synthesize arrivalGate=_arrivalGate;
@property(copy, nonatomic) NSString *arrivalTerminal; // @synthesize arrivalTerminal=_arrivalTerminal;
@property(copy, nonatomic) NSDate *arrivalActualTime; // @synthesize arrivalActualTime=_arrivalActualTime;
@property(copy, nonatomic) NSDate *arrivalPublishedTime; // @synthesize arrivalPublishedTime=_arrivalPublishedTime;
@property(retain, nonatomic) SFAirport *departureAirport; // @synthesize departureAirport=_departureAirport;
@property(copy, nonatomic) NSString *departureGate; // @synthesize departureGate=_departureGate;
@property(copy, nonatomic) NSString *departureTerminal; // @synthesize departureTerminal=_departureTerminal;
@property(copy, nonatomic) NSDate *departureActualTime; // @synthesize departureActualTime=_departureActualTime;
@property(copy, nonatomic) NSDate *departurePublishedTime; // @synthesize departurePublishedTime=_departurePublishedTime;
@property(nonatomic) int status; // @synthesize status=_status;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)hasStatus;
- (id)initWithProtobuf:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

