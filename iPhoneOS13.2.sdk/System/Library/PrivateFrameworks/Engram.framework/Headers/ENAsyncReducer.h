//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTResult, NSArray;

@interface ENAsyncReducer : NSObject
{
    NSArray *_input;
    CUTResult *_result;
    id /* block */ _reducerBlock;
    id /* block */ _completionBlock;
}

@property(copy, nonatomic) id /* block */ completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) id /* block */ reducerBlock; // @synthesize reducerBlock=_reducerBlock;
@property(retain, nonatomic) CUTResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray *input; // @synthesize input=_input;
- (void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(id /* block */)arg4;
- (void)_completeWithResult:(id)arg1;
- (void)reduceWithCompletion:(id /* block */)arg1;
- (id)initWithInput:(id)arg1 initialValue:(id)arg2;

@end

