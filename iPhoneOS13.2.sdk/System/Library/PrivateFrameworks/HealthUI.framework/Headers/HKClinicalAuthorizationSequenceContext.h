//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HKClinicalSourceAuthorizationController, HKSource, NSString;

@interface HKClinicalAuthorizationSequenceContext : NSObject
{
    HKClinicalSourceAuthorizationController *_authorizationController;
    NSString *_readUsageDescription;
    HKSource *_source;
}

@property(copy, nonatomic) HKSource *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *readUsageDescription; // @synthesize readUsageDescription=_readUsageDescription;
@property(retain, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // @synthesize authorizationController=_authorizationController;

@end

