//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNFutureImpl-Protocol.h>

@class NSError, NSString;

@interface _CNFailedFutureImpl : NSObject <CNFutureImpl>
{
    NSError *_error;
}

- (void)updateDescriptionWithBuilder:(id)arg1;
- (_Bool)cancel;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)initWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

