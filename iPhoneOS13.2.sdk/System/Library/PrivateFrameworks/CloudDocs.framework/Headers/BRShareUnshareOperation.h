//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareUnshareOperation : BROperation
{
    CKShare *_share;
    id /* block */ _unshareCompletionBlock;
}

@property(copy) id /* block */ unshareCompletionBlock; // @synthesize unshareCompletionBlock=_unshareCompletionBlock;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)initWithShare:(id)arg1;

@end

