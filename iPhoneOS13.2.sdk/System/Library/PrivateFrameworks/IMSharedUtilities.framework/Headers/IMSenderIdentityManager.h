//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject
{
    CNGeminiManager *_geminiManager;
}

+ (_Bool)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) CNGeminiManager *geminiManager; // @synthesize geminiManager=_geminiManager;
- (id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2;
- (id)bestSenderIdentityForHandleIDs:(id)arg1;
- (id)init;

@end

