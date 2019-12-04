//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface PGIncompleteLocationResolver : NSObject
{
    NSSet *_addressNodes;
    NSMutableDictionary *_resolvedLocationNodesCache;
}

+ (double)_maxDistanceForDimension:(unsigned long long)arg1;
@property(retain, nonatomic) NSMutableDictionary *resolvedLocationNodesCache; // @synthesize resolvedLocationNodesCache=_resolvedLocationNodesCache;
@property(retain, nonatomic) NSSet *addressNodes; // @synthesize addressNodes=_addressNodes;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 resolvedLocation:(id *)arg4 addresses:(id)arg5;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 resolvedLocation:(id *)arg4 sortedAddresses:(id)arg5;
- (id)_resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3 continueResolvingHigherDimensions:(_Bool)arg4;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withPreferredTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long *)arg3;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)_resolveIdentifierForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)initWithAddressNodes:(id)arg1;

@end

