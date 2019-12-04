//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol FBSServiceFacilityClientHandle;

@interface SBButtonConsumerClient : NSObject
{
    _Bool _entitledToConsumeButtonsInBackground;
    _Bool _application;
    _Bool _runningVisible;
    _Bool _suspended;
    id <FBSServiceFacilityClientHandle> _systemServiceClient;
    NSMutableSet *_registrations;
}

@property(retain, nonatomic) NSMutableSet *registrations; // @synthesize registrations=_registrations;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
@property(nonatomic, getter=isRunningVisible) _Bool runningVisible; // @synthesize runningVisible=_runningVisible;
@property(nonatomic, getter=isApplication) _Bool application; // @synthesize application=_application;
@property(nonatomic, getter=isEntitledToConsumeButtonsInBackground) _Bool entitledToConsumeButtonsInBackground; // @synthesize entitledToConsumeButtonsInBackground=_entitledToConsumeButtonsInBackground;
@property(retain, nonatomic) id <FBSServiceFacilityClientHandle> systemServiceClient; // @synthesize systemServiceClient=_systemServiceClient;
@property(readonly, nonatomic) _Bool canReceiveEvents;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

