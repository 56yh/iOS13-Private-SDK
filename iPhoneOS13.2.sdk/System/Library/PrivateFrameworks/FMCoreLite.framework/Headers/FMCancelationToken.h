//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMCancelable-Protocol.h>

@class NSMutableArray, NSString;

@interface FMCancelationToken : NSObject <FMCancelable>
{
    _Bool _isCanceled;
    NSMutableArray *_cancelationBlocks;
}

+ (id)tokenWrappingCancelable:(id)arg1;
+ (id)tokenWithCancelationBlock:(id /* block */)arg1;
- (void)callCancelationBlocks:(id)arg1;
- (_Bool)isCanceled;
- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(id /* block */)arg1;
- (id)nts_cancel;
- (void)cancel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

