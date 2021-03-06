//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface WFActionRateLimiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

+ (void)performAction:(id)arg1 onQueue:(id)arg2 withBlock:(id /* CDUnknownBlockType */)arg3;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
// - (void).cxx_destruct;
- (void)modify:(id /* CDUnknownBlockType */)arg1;
@property(retain, nonatomic) NSDictionary *attempts;
- (id)initWithUserDefaults:(id)arg1;
- (id)init;

@end

