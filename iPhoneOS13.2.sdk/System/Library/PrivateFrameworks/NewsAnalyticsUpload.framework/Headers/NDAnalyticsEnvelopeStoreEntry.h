//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/NDAnalyticsEnvelopeStoreEntry-Protocol.h>

@class NSDate, NSString;

@interface NDAnalyticsEnvelopeStoreEntry : NSObject <NDAnalyticsEnvelopeStoreEntry>
{
    unsigned long long _submissionDateMillisecondsSince1970;
    int _envelopeContentType;
    NSString *_envelopeIdentifier;
}

@property(nonatomic) int envelopeContentType; // @synthesize envelopeContentType=_envelopeContentType;
@property(copy, nonatomic) NSString *envelopeIdentifier; // @synthesize envelopeIdentifier=_envelopeIdentifier;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)stringRepresentation;
@property(copy, nonatomic) NSDate *envelopeSubmissionDate;
- (id)initWithStringRepresentation:(id)arg1;
- (id)init;

@end

