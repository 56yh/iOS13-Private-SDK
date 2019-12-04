//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/TSUReadChannel-Protocol.h>
#import <TSUtility/TSUStreamReadChannel-Protocol.h>

@class NSString;
@protocol TSUReadChannel;

@interface TSUReadChannelToStreamReadChannelAdapter : NSObject <TSUReadChannel, TSUStreamReadChannel>
{
    id <TSUReadChannel> _readChannel;
}

- (void)addBarrier:(id /* block */)arg1;
- (void)setLowWater:(unsigned long long)arg1;
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 queue:(id)arg3 handler:(id /* block */)arg4;
- (void)close;
- (void)readWithQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithReadChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

