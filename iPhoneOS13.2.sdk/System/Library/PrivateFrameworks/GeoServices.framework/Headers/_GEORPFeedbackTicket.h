//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOAbstractTicket.h>

#import <GeoServices/GEOMapServiceFeedbackReportTicket-Protocol.h>

@class GEOMapServiceTraits, GEORPFeedbackRequest, GEORPFeedbackRequestParameters, GEORPUserCredentials, NSData, NSString;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket>
{
    NSData *_resubmissionData;
    GEORPFeedbackRequestParameters *_feedbackRequestParameters;
    id <GEOMapItem> _place;
    GEORPFeedbackRequest *_feedbackRequest;
    GEORPUserCredentials *_userCredentials;
    NSData *_pushToken;
    NSString *_emailAddress;
    _Bool _started;
}

- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)cancel;
- (id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6;
- (id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2;
- (id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2;

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

