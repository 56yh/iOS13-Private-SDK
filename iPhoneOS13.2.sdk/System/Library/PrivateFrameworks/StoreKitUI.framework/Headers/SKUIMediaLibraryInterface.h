//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUILibraryInterface-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface>
{
}

- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_newDefaultQuery;
- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (void)removeMediaItemsForLibraryItems:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;
- (_Bool)isItemLocalAudiobook:(id)arg1;
- (_Bool)performActionForLibraryItem:(id)arg1;
- (id)exposedPlatformItemKinds;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

