//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/NviSignalProvider-Protocol.h>

@interface NviDirectionalitySignalProvider : NSObject <NviSignalProvider>
{
}

- (void)stopWithDidStopHandler:(id /* CDUnknownBlockType */)arg1;
- (void)reset;
- (void)startWithNviContext:(id)arg1 didStartHandler:(id /* CDUnknownBlockType */)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)initWithDataSource:(id)arg1 assetsProvider:(id)arg2;
@property(readonly, nonatomic) NSUInteger sigType;

@end

