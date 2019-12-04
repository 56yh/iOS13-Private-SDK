//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlayerResponseBuilder-Protocol.h>
#import <MediaPlaybackCore/MPMiddleware-Protocol.h>
#import <MediaPlaybackCore/_MPCStateDumpPropertyListTransformable-Protocol.h>

@class MPModelGenericObject, NSArray, NSIndexPath, NSString;

@interface MPCStoreFrontLocalEquivalencyMiddleware : NSObject <MPCPlayerResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware>
{
    NSArray *_invalidationObservers;
    MPModelGenericObject *_overridePlayingItem;
    NSIndexPath *_playingItemIndexPath;
}

@property(copy, nonatomic) NSIndexPath *playingItemIndexPath; // @synthesize playingItemIndexPath=_playingItemIndexPath;
@property(retain, nonatomic) MPModelGenericObject *overridePlayingItem; // @synthesize overridePlayingItem=_overridePlayingItem;
@property(retain, nonatomic) NSArray *invalidationObservers; // @synthesize invalidationObservers=_invalidationObservers;
- (id)_stateDumpObject;
- (id)operationsForPlayerRequest:(id)arg1;
- (id)operationsForRequest:(id)arg1;
- (id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

