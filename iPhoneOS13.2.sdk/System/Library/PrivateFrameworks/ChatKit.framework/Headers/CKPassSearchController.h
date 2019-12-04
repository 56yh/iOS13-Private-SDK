//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMessageTypeSearchController.h>

#import <ChatKit/QLPreviewControllerDelegate-Protocol.h>

@class NSString;

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>
{
}

+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (_Bool)previewControllerPresentsModally;
+ (_Bool)supportsQuicklook;
+ (unsigned long long)recencyRankedTargetResultCount;
- (id)_activityItemProviderForResult:(id)arg1;
- (id)_pasteboardItemsForResult:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)cellForSupplementryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementryViewKind:(id)arg3;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (_Bool)applyLayoutMarginsToLayoutGroup;
- (double)interGroupSpacing;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)filterQueries;
- (id)queryAttributesForText:(id)arg1;
- (id)fetchAttributes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

