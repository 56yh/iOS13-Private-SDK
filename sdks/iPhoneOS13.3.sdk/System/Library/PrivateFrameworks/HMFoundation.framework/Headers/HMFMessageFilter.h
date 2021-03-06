//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/HMFObject-Protocol.h>

@class HMFMessage, NSArray;

@interface HMFMessageFilter : HMFObject <HMFLogging, HMFObject>
{
    HMFMessage *_message;
}

+ (id)logCategory;
+ (id)policyClasses;
+ (BOOL)canInitWithMessage:(id)arg1;
@property(readonly, copy) HMFMessage *message; // @synthesize message=_message;
// - (void).cxx_destruct;
- (id)logIdentifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithMessage:(id)arg1;
- (BOOL)acceptWithPolicies:(id)arg1 error:(id )arg2;
- (id)init;

@end

