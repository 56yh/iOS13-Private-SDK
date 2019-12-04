//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSNumber, NSString, SASRecordingInfo;

@interface SASUpdateAudioInfo : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)updateAudioInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)updateAudioInfo;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *vendorId;
@property(nonatomic) _Bool triggeredTwoShotBorealis;
@property(retain, nonatomic) SASRecordingInfo *recordingInfo;
@property(copy, nonatomic) NSString *productId;
@property(copy, nonatomic) NSString *origin;
@property(copy, nonatomic) NSNumber *noiseReductionLevel;
@property(copy, nonatomic) NSString *headsetName;
@property(copy, nonatomic) NSString *headsetId;
@property(copy, nonatomic) NSString *headsetAddress;
@property(copy, nonatomic) NSString *firmwareVersion;
@property(copy, nonatomic) NSString *dspStatus;
@property(copy, nonatomic) NSString *deviceModel;
@property(copy, nonatomic) NSString *deviceIdentifier;
@property(nonatomic) int codec;
@property(copy, nonatomic) NSString *audioSource;
@property(copy, nonatomic) NSString *audioDestination;
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

