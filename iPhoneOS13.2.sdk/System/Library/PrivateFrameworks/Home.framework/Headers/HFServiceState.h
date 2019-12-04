//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFServiceState : NSObject
{
}

+ (id)stateForServiceDescriptor:(id)arg1 withBatchReadResponse:(id)arg2;
+ (Class)stateClassForServiceDescriptor:(id)arg1;
+ (id)optionalCharacteristicTypes;
+ (id)requiredCharacteristicTypes;
+ (id)stateClassIdentifier;
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)initWithBatchReadResponse:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long primaryState; // @dynamic primaryState;
@property(readonly, nonatomic) long long priority; // @dynamic priority;
@property(readonly, copy, nonatomic) NSString *stateTypeIdentifier; // @dynamic stateTypeIdentifier;

@end

