//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIPointFIFO : NSObject
{
    UIPointFIFO *_nextFIFO;
}

@property(retain, nonatomic) UIPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (void)dealloc;
- (id)initWithFIFO:(id)arg1;

@end

