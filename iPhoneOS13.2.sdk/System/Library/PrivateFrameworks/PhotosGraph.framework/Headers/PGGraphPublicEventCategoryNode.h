//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphPublicEventCategoryNode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
}

- (id)associatedNodesForRemoval;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) unsigned long long level;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

