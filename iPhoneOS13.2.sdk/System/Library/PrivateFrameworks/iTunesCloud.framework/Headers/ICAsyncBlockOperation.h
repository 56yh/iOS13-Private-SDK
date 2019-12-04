//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface ICAsyncBlockOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _cancellationHandler;
    id /* block */ _startHandler;
}

@property(readonly, copy, nonatomic) id /* block */ startHandler; // @synthesize startHandler=_startHandler;
@property(copy, nonatomic) id /* block */ cancellationHandler;
- (void)finishWithError:(id)arg1;
- (void)execute;
- (void)cancel;
- (id)initWithStartHandler:(id /* block */)arg1;

@end

