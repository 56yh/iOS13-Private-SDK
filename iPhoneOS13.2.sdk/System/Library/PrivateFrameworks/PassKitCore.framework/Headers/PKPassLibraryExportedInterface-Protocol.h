//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, PKCatalog, PKPass;

@protocol PKPassLibraryExportedInterface
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passRemoved:(PKPass *)arg1;
- (void)passUpdated:(PKPass *)arg1;
- (void)passAdded:(PKPass *)arg1;
- (void)catalogChanged:(PKCatalog *)arg1 withNewPasses:(NSSet *)arg2;
@end

