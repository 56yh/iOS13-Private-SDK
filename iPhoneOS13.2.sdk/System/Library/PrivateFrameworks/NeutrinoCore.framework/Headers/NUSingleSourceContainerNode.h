//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUSourceContainerNode.h>

@class NUSourceNode;

@interface NUSingleSourceContainerNode : NUSourceContainerNode
{
    NUSourceNode *_source;
}

- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)primarySourceNode;
- (id)initWithSourceNode:(id)arg1 assetIdentifier:(id)arg2;
- (id)initWithAssetIdentifier:(id)arg1;

@end

