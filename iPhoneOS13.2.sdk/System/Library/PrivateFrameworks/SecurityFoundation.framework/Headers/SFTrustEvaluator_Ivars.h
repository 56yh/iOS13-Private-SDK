//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator_Ivars : NSObject
{
    SFTrustPolicy *trustPolicy;
    SFRevocationPolicy *revocationPolicy;
    NSArray *applicationAnchorCertificates;
    struct {
        unsigned int allowCertificateFetching:1;
        unsigned int trustSystemAnchorCertificates:1;
    } trustEvaluatorFlags;
}


@end

