//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HMSymptomFixSessionDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate>
{
    NSMutableSet *_items;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMutableSet *items; // @synthesize items=_items;
- (void)fixSession:(id)arg1 didChangeState:(long long)arg2;
- (id)_itemForFixSession:(id)arg1;
- (id)_itemForSymptom:(id)arg1 accessory:(id)arg2;
- (void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3;
- (long long)fixStateForSymptom:(id)arg1 accessory:(id)arg2;
- (_Bool)anySymptomIsBeingFixedForFixableObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

