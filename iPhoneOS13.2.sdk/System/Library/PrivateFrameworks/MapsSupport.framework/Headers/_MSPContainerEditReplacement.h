//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditReplacement-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditReplacement : _MSPContainerEdit <MSPContainerEditReplacement>
{
    NSArray *_originalObjects;
    NSArray *_originalImmutableObjects;
    NSArray *_replacementObjects;
    NSArray *_replacementImmutableObjects;
    NSIndexSet *_indexesOfReplacedObjects;
}

@property(readonly, nonatomic) NSIndexSet *indexesOfReplacedObjects; // @synthesize indexesOfReplacedObjects=_indexesOfReplacedObjects;
@property(readonly, nonatomic) NSArray *replacementImmutableObjects; // @synthesize replacementImmutableObjects=_replacementImmutableObjects;
@property(readonly, nonatomic) NSArray *replacementObjects; // @synthesize replacementObjects=_replacementObjects;
@property(readonly, nonatomic) NSArray *originalImmutableObjects; // @synthesize originalImmutableObjects=_originalImmutableObjects;
@property(readonly, nonatomic) NSArray *originalObjects; // @synthesize originalObjects=_originalObjects;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithOriginalObjects:(id)arg1 replacementObjects:(id)arg2 indexes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

