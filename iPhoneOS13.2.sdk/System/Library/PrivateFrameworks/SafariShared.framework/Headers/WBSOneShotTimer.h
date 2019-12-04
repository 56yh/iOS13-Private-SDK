//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

@interface WBSOneShotTimer : NSObject
{
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_fireDate;
}

@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) _Bool isValid;
- (void)invalidate;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
- (id)initWithFireDate:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;

@end

