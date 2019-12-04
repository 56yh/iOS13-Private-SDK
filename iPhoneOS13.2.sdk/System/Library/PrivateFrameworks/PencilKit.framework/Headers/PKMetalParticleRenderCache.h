//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKStrokeRenderCache-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface PKMetalParticleRenderCache : NSObject <PKStrokeRenderCache>
{
    NSMutableArray *_buffers;
    unsigned long long _totalCost;
    unsigned long long _inkVersion;
}

@property(readonly, nonatomic) unsigned long long inkVersion; // @synthesize inkVersion=_inkVersion;
- (_Bool)lockPurgeableResourcesAddToSet:(id)arg1;
- (_Bool)needsCompute;
- (unsigned long long)cacheCost;
@property(readonly, nonatomic) NSArray *buffers; // @dynamic buffers;
- (void)addBuffer:(id)arg1;
- (id)initWithDevice:(id)arg1 inkVersion:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

