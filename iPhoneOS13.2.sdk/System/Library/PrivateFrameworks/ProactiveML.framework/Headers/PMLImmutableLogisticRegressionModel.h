//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLClassifierModelProtocol-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>
#import <ProactiveML/PMLRegressionModelProtocol-Protocol.h>

@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLRegressionModelProtocol, PMLClassifierModelProtocol>
{
    id _backingObject;
    const float *_weights;
    int _length;
    _Bool _intercept;
}

- (_Bool)classify:(id)arg1;
- (float)predict:(id)arg1;
- (_Bool)intercept;
- (id)toChunk;
- (id)initWithFloatsNoCopy:(const float *)arg1 count:(int)arg2 intercept:(_Bool)arg3;
- (id)initWithChunk:(id)arg1 intercept:(_Bool)arg2;
- (id)initWithWeights:(id)arg1 intercept:(_Bool)arg2;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

