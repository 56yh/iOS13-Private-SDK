//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;
@protocol HMFLocking;

@interface HMDLostModeManager : HMFObject <HMFLogging>
{
    id <HMFLocking> _lock;
    _Bool _lost;
}

+ (id)sharedManager;
+ (id)logCategory;
@property(readonly, getter=isLost) _Bool lost;
- (id)init;
- (id)attributeDescriptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
