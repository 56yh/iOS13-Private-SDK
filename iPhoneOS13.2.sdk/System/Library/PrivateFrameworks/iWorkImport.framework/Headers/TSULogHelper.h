//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface TSULogHelper : NSObject
{
    unsigned long long _throttleCount;
    NSDate *_lastThrottleCheck;
}

+ (id)sharedInstance;
@property(retain) NSDate *lastThrottleCheck; // @synthesize lastThrottleCheck=_lastThrottleCheck;
@property unsigned long long throttleCount; // @synthesize throttleCount=_throttleCount;
- (_Bool)incrementThrottleCountAndCheckThottleMax:(unsigned long long)arg1;

@end

