//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSPromise.h>

@interface AMSLazyPromise : AMSPromise
{
    _Bool _executedBlock;
    id /* block */ _block;
}

@property(copy, nonatomic) id /* block */ block; // @synthesize block=_block;
@property(nonatomic) _Bool executedBlock; // @synthesize executedBlock=_executedBlock;
- (_Bool)_runBlock;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultWithError:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (void)addSuccessBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addErrorBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;

@end

