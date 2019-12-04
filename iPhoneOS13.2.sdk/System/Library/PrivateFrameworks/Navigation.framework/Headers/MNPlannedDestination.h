//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNJSONOutput-Protocol.h>



@class GEOComposedWaypoint, MNTimepoint, NSDate, NSString, NSUUID, _MNTimepointAndTransportType;

@interface MNPlannedDestination : NSObject <MNJSONOutput, NSSecureCoding, NSCopying>
{
    GEOComposedWaypoint *_destinationWaypoint;
    NSDate *_expirationDate;
    _MNTimepointAndTransportType *_internalTimepoint;
    NSUUID *_uuid;
}

+ (_Bool)supportsSecureCoding;
+ (id)destinationFromArchiveData:(id)arg1;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) NSUInteger hash;
- (id)jsonDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archiveData;
- (void)_setTimepoint:(id)arg1 transportType:(int)arg2;
@property(readonly, nonatomic) _MNTimepointAndTransportType *_internalTimepoint; // @synthesize _internalTimepoint;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(nonatomic) int transportType; // @dynamic transportType;
@property(copy, nonatomic) MNTimepoint *timepoint; // @dynamic timepoint;
- (_Bool)isDuplicateOf:(id)arg1;
- (id)uniqueIdentifier;
- (id)initWithWaypoint:(id)arg1 transportType:(int)arg2;

// Remaining properties
@property(readonly) Class superclass;

@end

