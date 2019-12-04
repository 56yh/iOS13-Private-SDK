//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>



@class HMFActivity, NSDictionary, NSString, NSUUID;

@interface HMBProcessingOptions : HMFObject <NSSecureCoding>
{
    _Bool _shouldPerformDelegateCallbacks;
    _Bool _shouldEnqueueMirrorOutput;
    _Bool _shouldRollBackIfMirrorOutputFails;
    _Bool _disallowsCellularAccessForMirrorOutput;
    NSString *_label;
    NSDictionary *_messagePayload;
    NSString *_messageName;
    id /* block */ _messageResponseHandler;
    NSUUID *_messageTransactionIdentifier;
    long long _qualityOfService;
    HMFActivity *_activity;
}

+ (id)optionsWithMessage:(id)arg1;
+ (id)optionsWithLabel:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) HMFActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) _Bool disallowsCellularAccessForMirrorOutput; // @synthesize disallowsCellularAccessForMirrorOutput=_disallowsCellularAccessForMirrorOutput;
@property(nonatomic) _Bool shouldRollBackIfMirrorOutputFails; // @synthesize shouldRollBackIfMirrorOutputFails=_shouldRollBackIfMirrorOutputFails;
@property(nonatomic) _Bool shouldEnqueueMirrorOutput; // @synthesize shouldEnqueueMirrorOutput=_shouldEnqueueMirrorOutput;
@property(nonatomic) _Bool shouldPerformDelegateCallbacks; // @synthesize shouldPerformDelegateCallbacks=_shouldPerformDelegateCallbacks;
@property(retain, nonatomic) NSUUID *messageTransactionIdentifier; // @synthesize messageTransactionIdentifier=_messageTransactionIdentifier;
@property(copy, nonatomic) id /* block */ messageResponseHandler; // @synthesize messageResponseHandler=_messageResponseHandler;
@property(retain, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(retain, nonatomic) NSDictionary *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)callMessageResponseHandlerWithPayload:(id)arg1 error:(id)arg2;
- (id)attributeDescriptions;
- (id)transactionIdentifier;
- (id)initWithLabel:(id)arg1;

@end

