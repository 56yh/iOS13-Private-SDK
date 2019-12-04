//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIDeferredActivityItemProvider.h>

@class SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider
{
    SKUIResourceLoader *_resourceLoader;
}

+ (id)placeholderItem;
- (id)linkPresentationImageFor:(id)arg1;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)item;
- (id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2;
- (id)initWithProductPageItemProvider:(id /* block */)arg1 clientContext:(id)arg2;

@end

