//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, _CNBufferingObservable;
@protocol CNObserver;

@protocol _CNBufferingStrategy <NSObject>
- (void)bufferDidSendResults:(_CNBufferingObservable *)arg1;
- (void)buffer:(_CNBufferingObservable *)arg1 didReceiveResults:(NSArray *)arg2 forObserver:(id <CNObserver>)arg3;
@end

