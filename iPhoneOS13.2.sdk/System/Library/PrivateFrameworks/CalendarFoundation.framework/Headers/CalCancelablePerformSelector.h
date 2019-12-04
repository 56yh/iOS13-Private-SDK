//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable>
{
    id /* block */ _block;
    NSRunLoop *_runloop;
}

@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(copy, nonatomic) id /* block */ block; // @synthesize block=_block;
- (void)_performBlock:(id /* block */)arg1;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (id)initWithBlock:(id /* block */)arg1;

@end

