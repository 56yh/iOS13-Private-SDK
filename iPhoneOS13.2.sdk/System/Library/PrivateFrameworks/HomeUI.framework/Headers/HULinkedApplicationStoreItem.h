//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HULinkedApplicationItem.h>



@class SSLookupItem;

@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying>
{
    SSLookupItem *_storeItem;
}

@property(readonly, nonatomic) SSLookupItem *storeItem; // @synthesize storeItem=_storeItem;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2;
- (id)_loadStoreIconWithArtwork:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoreItem:(id)arg1;
- (id)init;

@end

