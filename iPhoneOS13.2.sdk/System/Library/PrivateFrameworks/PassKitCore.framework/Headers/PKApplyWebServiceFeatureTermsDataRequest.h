//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSString;

@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest
{
    unsigned long long _featureIdentifier;
    NSString *_termsIdentifier;
    NSString *_termsDataFormat;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *termsDataFormat; // @synthesize termsDataFormat=_termsDataFormat;
@property(copy, nonatomic) NSString *termsIdentifier; // @synthesize termsIdentifier=_termsIdentifier;
@property(nonatomic) unsigned long long featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

