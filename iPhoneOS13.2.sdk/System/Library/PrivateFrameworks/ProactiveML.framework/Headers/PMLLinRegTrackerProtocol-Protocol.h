//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class PMLSparseMatrix, PMLSparseVector;

@protocol PMLLinRegTrackerProtocol <PMLPlistAndChunksSerializableProtocol>
- (void)trackObjectiveFeatures:(PMLSparseVector *)arg1 featureMatrix:(PMLSparseMatrix *)arg2 minibatchSize:(unsigned long long)arg3 support:(float)arg4;
@end
