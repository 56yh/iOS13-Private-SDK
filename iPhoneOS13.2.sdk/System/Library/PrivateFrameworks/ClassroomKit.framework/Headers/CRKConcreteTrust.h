//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTrust-Protocol.h>

@class NSString;
@protocol CRKCertificate;

@interface CRKConcreteTrust : NSObject <CRKTrust>
{
    struct __SecTrust *_underlyingTrust;
}

@property(readonly, nonatomic) struct __SecTrust *underlyingTrust; // @synthesize underlyingTrust=_underlyingTrust;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <CRKCertificate> leafCertificate;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

