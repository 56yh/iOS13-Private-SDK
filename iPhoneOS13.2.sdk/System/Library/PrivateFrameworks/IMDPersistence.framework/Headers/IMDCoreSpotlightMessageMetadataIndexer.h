//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>

#import <IMDPersistence/IMDCoreSpotlightIndexer-Protocol.h>

@class NSString;

@interface IMDCoreSpotlightMessageMetadataIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>
{
}

+ (void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(_Bool)arg3 metadataToUpdate:(id)arg4;
+ (_Bool)cancelIndexingForItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

