//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying>
{
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)pathWithEdges:(id)arg1;
+ (id)path;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)graphRepresentation;
- (void)removeAllEdges;
- (void)setEdges:(id)arg1;
- (void)removeLastEdge;
- (void)removeFirstEdge;
- (void)addLastEdge:(id)arg1;
- (void)addFirstEdge:(id)arg1;
- (_Bool)containsNode:(id)arg1;
- (_Bool)containsEdge:(id)arg1;
- (double)edgesWeight;
- (_Bool)isEmpty;
- (unsigned long long)edgesCount;
- (unsigned long long)nodesCount;
- (id)edgeAtIndex:(unsigned long long)arg1;
- (id)nodeAtIndex:(unsigned long long)arg1;
- (id)edgesForLabel:(id)arg1;
- (id)nodesForLabel:(id)arg1;
- (id)targetNode;
- (id)sourceNode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToPath:(id)arg1;
- (id)description;
- (id)init;

@end

