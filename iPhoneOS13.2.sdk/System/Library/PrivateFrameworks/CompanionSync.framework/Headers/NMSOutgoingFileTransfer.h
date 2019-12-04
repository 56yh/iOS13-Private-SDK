//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSDeviceTargetable-Protocol.h>
#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class NMSMessageCenter, NSDictionary, NSSet, NSString, NSURL;

@interface NMSOutgoingFileTransfer : NSObject <NMSDeviceTargetable, NMSObfuscatableDescriptionProviding>
{
    NSSet *targetDeviceIDs;
    NSURL *_fileURL;
    NSDictionary *_metadata;
    id _pbHeaderInfo;
    NSString *_idsIdentifier;
    unsigned long long _priority;
    double _sendTimeout;
    NSDictionary *_persistentUserInfo;
    NSDictionary *_extraIDSOptions;
    NMSMessageCenter *_messageCenter;
}

@property(nonatomic) __weak NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property(retain, nonatomic) NSDictionary *extraIDSOptions; // @synthesize extraIDSOptions=_extraIDSOptions;
@property(retain, nonatomic) NSDictionary *persistentUserInfo; // @synthesize persistentUserInfo=_persistentUserInfo;
@property(nonatomic) double sendTimeout; // @synthesize sendTimeout=_sendTimeout;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(retain, nonatomic) id pbHeaderInfo; // @synthesize pbHeaderInfo=_pbHeaderInfo;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSSet *targetDeviceIDs; // @synthesize targetDeviceIDs;
- (id)CPObfuscatedDescriptionObject;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

