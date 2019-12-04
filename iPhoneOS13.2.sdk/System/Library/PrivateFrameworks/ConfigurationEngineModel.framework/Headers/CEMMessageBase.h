//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSDate, NSString;

@interface CEMMessageBase : CEMPayloadBase
{
    NSString *_messageType;
    NSString *_messageIdentifier;
    NSString *_messageInReplyTo;
    NSDate *_messageTimestamp;
    CEMAnyPayload *_messagePayload;
}

+ (id)messageForData:(id)arg1 error:(id *)arg2;
+ (id)messageForPayload:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) CEMAnyPayload *messagePayload; // @synthesize messagePayload=_messagePayload;
@property(copy, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(copy, nonatomic) NSString *messageInReplyTo; // @synthesize messageInReplyTo=_messageInReplyTo;
@property(copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeAsDataWithError:(id *)arg1;
- (id)serialize;
- (_Bool)loadMessageFromDictionary:(id)arg1 error:(id *)arg2;

@end

