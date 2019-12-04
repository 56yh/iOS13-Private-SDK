//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@class NSMutableDictionary;

@interface MFError : NSError
{
    NSMutableDictionary *_moreUserInfo;
}

+ (id)errorWithException:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 title:(id)arg4 userInfo:(id)arg5;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
- (void)dealloc;
- (void)useGenericDescription:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setMoreInfo:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (id)mf_shortDescription;
- (id)mf_moreInfo;
- (id)recoveryAttempter;
- (id)localizedDescription;
- (id)userInfo;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;

@end

