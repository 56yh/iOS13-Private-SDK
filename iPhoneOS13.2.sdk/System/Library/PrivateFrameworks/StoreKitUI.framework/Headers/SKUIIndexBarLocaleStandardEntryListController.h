//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIIndexBarEntryListController.h>

@class IKViewElementStyle, NSSet, SKUIIndexBarEntryListViewElement;

__attribute__((visibility("hidden")))
@interface SKUIIndexBarLocaleStandardEntryListController : SKUIIndexBarEntryListController
{
    SKUIIndexBarEntryListViewElement *_entryListViewElement;
    NSSet *_requiredVisibilitySet;
    IKViewElementStyle *_style;
}

- (void)reloadViewElementData;
- (id)targetIndexBarEntryIDForEntryDescriptorAtIndex:(long long)arg1 returningRelativeSectionIndex:(out long long *)arg2;
- (id)entryDescriptorAtIndex:(long long)arg1;
- (long long)numberOfEntryDescriptors;
- (id)initWithSKUIIndexBarEntryListViewElement:(id)arg1;

@end

