//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableSet, NSSet;
@protocol SKUISettingsEditTransactionDelegate;

__attribute__((visibility("hidden")))
@interface SKUISettingsEditTransaction : NSObject
{
    NSSet *_all;
    id /* block */ _commitBlock;
    NSLock *_lock;
    NSMutableSet *_pending;
    _Bool _success;
    id <SKUISettingsEditTransactionDelegate> _delegate;
}

@property(nonatomic) __weak id <SKUISettingsEditTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_settingDescription:(id)arg1 completedWithSuccess:(_Bool)arg2;
- (void)_finalizeCommit;
- (void)_delegateWillCommitTransaction;
- (void)_delegateWillBeginTransaction;
- (void)_delegateDidFailTransaction;
- (void)_delegateDidCompleteTransaction;
- (void)rollbackTransaction;
- (_Bool)isValid;
- (_Bool)isCommiting;
- (void)commitTransaction;
- (void)cancelTransaction;
- (void)beginTransaction;
- (id)initWithSettingDescriptions:(id)arg1;

@end

