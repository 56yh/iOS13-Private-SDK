//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CATTaskResultObject.h"

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServiceFetchMyCertificatesTaskResultObject : CATTaskResultObject
{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate; // @synthesize stagedMarkedCertificate=_stagedMarkedCertificate;
@property(copy, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate; // @synthesize activeMarkedCertificate=_activeMarkedCertificate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

