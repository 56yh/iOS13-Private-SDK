//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import <GeoServices/GEOXPCReply-Protocol.h>

@class GEOETATrafficUpdateRequest, NSString;

@interface GEOETAUpdateableWillSendReply : GEOXPCReply <GEOXPCReply>
{
    GEOETATrafficUpdateRequest *_updatedRequest;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *updatedRequest; // @synthesize updatedRequest=_updatedRequest;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

