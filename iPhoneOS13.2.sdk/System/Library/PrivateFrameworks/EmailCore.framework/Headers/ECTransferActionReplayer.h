//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
{
}

- (id)failActionWithError:(id)arg1;
- (id)_deleteItemsInAction:(id)arg1;
- (id)_appendMessagesInAction:(id)arg1;
- (id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id *)arg2;
- (id)_transferItemsInAction:(id)arg1 isMove:(_Bool)arg2;
- (id)_downLoadSourceMessagesInAction:(id)arg1;
- (id)replayAction;

@end

