//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class GEODirectionsError, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface MNDirectionsResponseInfo : NSObject <NSSecureCoding>
{
    NSArray *_routeInfos;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_error;
    GEODirectionsError *_directionsError;
    MNTraceRecordingData *_traceRecordingData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(retain, nonatomic) GEODirectionsError *directionsError; // @synthesize directionsError=_directionsError;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSArray *routeInfos; // @synthesize routeInfos=_routeInfos;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

