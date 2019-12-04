//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestPet-Protocol.h>

@class NSMutableSet, NSString;

@interface PGPet : NSObject <PGGraphIngestPet>
{
    NSMutableSet *_momentNodes;
    NSMutableSet *_ownerNodes;
}

@property(readonly, nonatomic) NSMutableSet *ownerNodes; // @synthesize ownerNodes=_ownerNodes;
@property(readonly, nonatomic) NSMutableSet *momentNodes; // @synthesize momentNodes=_momentNodes;
- (id)initWithMomentNodes:(id)arg1 ownerNodes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

