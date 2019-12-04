//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2;
+ (id)finishSpeech;
- (_Bool)requiresResponse;
@property(nonatomic) double totalAudioRecorded;
@property(copy, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property(nonatomic) long long packetCount;
@property(copy, nonatomic) NSArray *orderedContext;
@property(copy, nonatomic) NSArray *featuresAtEndpoint;
@property(copy, nonatomic) NSString *endpoint;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

