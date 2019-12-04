//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

#import <MIME/MFLockObject-Protocol.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject>
{
    NSString *_name;
    id _delegate;
}

+ (void)initialize;
- (void)dealloc;
- (id)description;
- (void)unlockWithCondition:(long long)arg1;
- (void)unlock;
- (_Bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;
- (_Bool)lockBeforeDate:(id)arg1;
- (_Bool)isLockedByMe;
- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;
- (id)init;

@end

