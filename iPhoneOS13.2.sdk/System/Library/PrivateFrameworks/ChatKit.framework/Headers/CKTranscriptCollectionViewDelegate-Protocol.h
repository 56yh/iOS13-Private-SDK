//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKEditableCollectionViewDelegate-Protocol.h>

@class CKTranscriptCollectionView;

@protocol CKTranscriptCollectionViewDelegate <CKEditableCollectionViewDelegate>
- (void)collectionViewDidInset:(CKTranscriptCollectionView *)arg1;
- (void)collectionViewWillInset:(CKTranscriptCollectionView *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)collectionViewWillProgrammaticallyScroll:(CKTranscriptCollectionView *)arg1 animated:(_Bool)arg2;
- (void)collectionViewWillScroll:(CKTranscriptCollectionView *)arg1 targetContentOffset:(inout struct CGPoint *)arg2;
@end

