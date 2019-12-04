//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAppLibrary, BRCServerItem, NSString;

__attribute__((visibility("hidden")))
@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    _Bool _completed;
    unsigned long long _batchSize;
    _Bool _shouldFillBatch;
    id /* block */ _pcsChainCompletionBlock;
}

@property(nonatomic) _Bool shouldFillBatch; // @synthesize shouldFillBatch=_shouldFillBatch;
@property(copy, nonatomic) id /* block */ pcsChainCompletionBlock; // @synthesize pcsChainCompletionBlock=_pcsChainCompletionBlock;
- (void)main;
- (void)_sendRecordBatch:(id)arg1 completion:(id /* block */)arg2;
- (void)_buildRecordListWithCompletion:(id /* block */)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (_Bool)shouldRetryForError:(id)arg1;
- (id)initWithRootItem:(id)arg1 appLibrary:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

