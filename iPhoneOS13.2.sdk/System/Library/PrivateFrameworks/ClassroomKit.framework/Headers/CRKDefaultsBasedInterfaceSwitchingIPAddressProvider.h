//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;
@protocol CRKIPAddressProviding;

@interface CRKDefaultsBasedInterfaceSwitchingIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    id <CRKIPAddressProviding> mBaseProvider;
}

@property(readonly, copy, nonatomic) NSString *IPAddress;
- (_Bool)prefersEthernet;
- (void)makeProvider;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

