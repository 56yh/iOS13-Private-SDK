//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WBSTabDialogInformation : NSObject
{
    id /* block */ _dismissalBlock;
    _Bool _isInvokingPresentationBlock;
    id /* block */ _presentationBlock;
    _Bool _blockingWebProcess;
    _Bool _dismissed;
    _Bool _presented;
    NSArray *_cancellationExemptions;
    CDStruct_497cfc99 _slot;
}

@property(readonly, nonatomic, getter=isPresented) _Bool presented; // @synthesize presented=_presented;
@property(readonly, nonatomic, getter=isDismissed) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(readonly, nonatomic, getter=isBlockingWebProcess) _Bool blockingWebProcess; // @synthesize blockingWebProcess=_blockingWebProcess;
@property(copy, nonatomic) NSArray *cancellationExemptions; // @synthesize cancellationExemptions=_cancellationExemptions;
@property(nonatomic) CDStruct_497cfc99 slot; // @synthesize slot=_slot;
- (_Bool)isExemptFromCancellationInContext:(id)arg1;
- (void)dismissWithResponse:(id)arg1;
- (void)presentIfNeeded;
- (id)description;
- (id)initWithPresentationBlock:(id /* block */)arg1 dismissalBlock:(id /* block */)arg2 blocksWebProcessUntilDismissed:(_Bool)arg3;

@end

