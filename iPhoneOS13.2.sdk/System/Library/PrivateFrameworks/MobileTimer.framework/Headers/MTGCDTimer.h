//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTPowerAssertion;
@protocol OS_dispatch_source;

@interface MTGCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    MTPowerAssertion *_powerAssertion;
}

- (void)cancelTimer;
- (void)startTimer:(double)arg1 block:(id /* block */)arg2;
- (void)dealloc;

@end

